use<../Parameters.scad>

//right now this is a little kludged because it's modeling a plastic screw being used as a bolt, so that it slides through one side of the grip and then grabs onto the other

function OuterDiameter() = 8 + 3dPrinterTolerance();
function BoltDiameter()= 6 + 3dPrinterTolerance();
function BoltLength()= 40 + 3dPrinterTolerance();
function BoltHeadDiameter()= 12 + 3dPrinterTolerance();
function BoltHeadHeight()= 5 + 3dPrinterTolerance();

//err on the side of larger tolerances for bolts

module SmallBolt()
{
	union()
	{
		translate([0,0,-BoltLength()])
		{
			union()
			{
				cylinder(BoltLength(), BoltDiameter()/2, BoltDiameter()/2);
				translate([0,0,BoltLength()/2])
				{
					cylinder(BoltLength()/2, OuterDiameter()/2, OuterDiameter()/2);
				}
			}
		}
		cylinder(BoltHeadHeight(), BoltHeadDiameter()/2,BoltHeadDiameter()/2);
	}
}



SmallBolt();