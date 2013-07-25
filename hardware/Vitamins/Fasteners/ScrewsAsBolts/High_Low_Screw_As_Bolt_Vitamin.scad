use <../Tolerance.scad>
use <../Parameters.scad>

//This is modelling a plastic screw being used as a bolt, and it's got a thicker bit so that it can slide through one side of the grip and then grab onto the other

function OuterDiameter(3dPrinterTolerance=.4) = 4.5 + 3dPrinterTolerance*2;
function BoltDiameter(3dPrinterTolerance=.4)= 3.3 + 3dPrinterTolerance*2;
function BoltLength(3dPrinterTolerance=.4)= 22 + 3dPrinterTolerance;
function BoltHeadDiameter(3dPrinterTolerance=.4)= 6.7 + 3dPrinterTolerance*2;
function BoltHeadHeight(3dPrinterTolerance=.4)= 2.5 + 3dPrinterTolerance;

//err on the side of larger tolerances for bolts

module SmallBolt(3dPrinterTolerance=.4, PlasticWidth=4.2)
{
	union()
	{
		translate([0,0,-BoltLength(3dPrinterTolerance)])
		{
			union()
			{
				cylinder(BoltLength(3dPrinterTolerance), BoltDiameter(3dPrinterTolerance)/2, BoltDiameter(3dPrinterTolerance)/2);
				translate([0,0,BoltLength(3dPrinterTolerance)-(PlasticWidth+2)])
				{
					cylinder(PlasticWidth+2, OuterDiameter(3dPrinterTolerance)/2, OuterDiameter(3dPrinterTolerance)/2);
				}
			}
		}
		cylinder(BoltHeadHeight(3dPrinterTolerance), BoltHeadDiameter(3dPrinterTolerance)/2,BoltHeadDiameter(3dPrinterTolerance)/2);
	}
}



SmallBolt();