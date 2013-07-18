use <../Tolerance.scad>

function ScrewDiameter()= 3.6 + 3dPrinterTolerance();  
function ScrewLength()= 22 + 3dPrinterTolerance();
function ScrewHeadDiameter()= 6.7 + 3dPrinterTolerance();
function ScrewHeadHeight()= 2.5 + 3dPrinterTolerance();

//err on the side of smaller tolerances for screws

module screw()
{
	union()
	{
		translate([0,0,-ScrewLength()])
		{
			cylinder(ScrewLength(), ScrewDiameter()/2,ScrewDiameter()/2);
		}
		cylinder(ScrewHeadHeight(), ScrewHeadDiameter()/2,ScrewHeadDiameter()/2);
	}
}

screw();