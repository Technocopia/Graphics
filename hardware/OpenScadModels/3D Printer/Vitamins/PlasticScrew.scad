use <../Parameters.scad>

function ScrewDiameter()= 8 + 3dPrinterTolerance();
function ScrewLength()= 40 + 3dPrinterTolerance();
function ScrewHeadDiameter()= 12 + 3dPrinterTolerance();
function ScrewHeadHeight()= 5 + 3dPrinterTolerance();

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