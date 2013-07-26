function RodEndLength(3dPrinterTolerance=.4) = 18+3dPrinterTolerance;
function RodEndTopWidth(3dPrinterTolerance=.4) = 10+3dPrinterTolerance;

function RodEndHoleDiam(3dPrinterTolerance=.4) = 3.6+3dPrinterTolerance;
function RodEndHoleLength(3dPrinterTolerance=.4) = 7+3dPrinterTolerance;

module RodEnd(3dPrinterTolerance=.4)
{
	difference()
	{
		union()
		{
			cylinder(RodEndHoleLength(3dPrinterTolerance), RodEndTopWidth(3dPrinterTolerance)/2, RodEndTopWidth(3dPrinterTolerance)/2);
			translate([0,-RodEndTopWidth(3dPrinterTolerance)/2,0])	
			{
				cube([RodEndLength(3dPrinterTolerance)-RodEndTopWidth(3dPrinterTolerance)/2,RodEndTopWidth(3dPrinterTolerance), RodEndHoleLength(3dPrinterTolerance)]);
			}
		}	
		translate([0,0,-1])
		{
		cylinder(RodEndHoleLength(3dPrinterTolerance)+2, RodEndHoleDiam(3dPrinterTolerance)/2, RodEndHoleDiam(3dPrinterTolerance)/2);
		}
	}
}


RodEnd();