//This is modelling a plastic screw being used as a bolt, and it's got a thicker bit so that it can slide through one side of the grip and then grab onto the other

function HiLoBoltOuterDiameter(3dPrinterTolerance=.4) = 4.5 + 3dPrinterTolerance*2;
function HiLoBoltDiameter(3dPrinterTolerance=.4)= 3.3 + 3dPrinterTolerance*2;
function HiLoBoltLength(3dPrinterTolerance=.4)= 22 + 3dPrinterTolerance;
function HiLoBoltHeadDiameter(3dPrinterTolerance=.4)= 6.7 + 3dPrinterTolerance*2;
function HiLoBoltHeadHeight(3dPrinterTolerance=.4)= 2.5 + 3dPrinterTolerance;

//err on the side of larger tolerances for bolts

module HiLoBolt(3dPrinterTolerance=.4, PlasticWidth=4.2)
{
	union()
	{
		translate([0,0,-HiLoBoltLength(3dPrinterTolerance)])
		{
			union()
			{
				cylinder(HiLoBoltLength(3dPrinterTolerance), HiLoBoltDiameter(3dPrinterTolerance)/2, HiLoBoltDiameter(3dPrinterTolerance)/2);
				translate([0,0,HiLoBoltLength(3dPrinterTolerance)-(PlasticWidth+2)])
				{
					cylinder(PlasticWidth+2, HiLoBoltOuterDiameter(3dPrinterTolerance)/2, HiLoBoltOuterDiameter(3dPrinterTolerance)/2);
				}
			}
		}
		cylinder(HiLoBoltHeadHeight(3dPrinterTolerance), HiLoBoltHeadDiameter(3dPrinterTolerance)/2,HiLoBoltHeadDiameter(3dPrinterTolerance)/2);
	}
}



HiLoBolt(.4,4.2);