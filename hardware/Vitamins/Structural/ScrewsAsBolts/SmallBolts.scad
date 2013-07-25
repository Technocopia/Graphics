use <../Tolerance.scad>
use <../Parameters.scad>

//right now this is a little kludged because it's modeling a plastic screw being used as a bolt, so it's got a thicker bit so that it can slide through one side of the grip and then grab onto the other

function OuterDiameter() = 4.5 + 3dPrinterTolerance()*2;
function BoltDiameter()= 3.3 + 3dPrinterTolerance()*2;
function BoltLength()= 22 + 3dPrinterTolerance();
function BoltHeadDiameter()= 6.7 + 3dPrinterTolerance()*2;
function BoltHeadHeight()= 2.5 + 3dPrinterTolerance();

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
				translate([0,0,BoltLength()-(PlasticWidth()+2)])
				{
					cylinder(PlasticWidth()+2, OuterDiameter()/2, OuterDiameter()/2);
				}
			}
		}
		cylinder(BoltHeadHeight(), BoltHeadDiameter()/2,BoltHeadDiameter()/2);
	}
}



SmallBolt();