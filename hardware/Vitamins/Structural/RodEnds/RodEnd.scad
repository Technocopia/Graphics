use <../Tolerance.scad>

function RodEndLength() = 18+3dPrinterTolerance();
function RodEndTopWidth() = 10+3dPrinterTolerance();

function RodEndHoleDiam() = 3.6+3dPrinterTolerance();
function RodEndHoleLength() = 7+3dPrinterTolerance();

module RodEnd()
{
	difference()
	{
		union()
		{
			cylinder(RodEndHoleLength(), RodEndTopWidth()/2, RodEndTopWidth()/2);
			translate([0,-RodEndTopWidth()/2,0])	
			{
				cube([RodEndLength()-RodEndTopWidth()/2,RodEndTopWidth(), RodEndHoleLength()]);
			}
		}	
		translate([0,0,-1])
		{
		cylinder(RodEndHoleLength()+2, RodEndHoleDiam()/2, RodEndHoleDiam()/2);
		}
	}
}


RodEnd();