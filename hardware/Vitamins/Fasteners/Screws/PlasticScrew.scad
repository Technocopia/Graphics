function ScrewDiameter()= 3.6;  
function ScrewLength()= 22;
function ScrewHeadDiameter()= 6.7;
function ScrewHeadHeight()= 2.5;

//err on the side of smaller tolerances for screws

module screw(3dPrinterTolerance=.4)
{
	union()
	{
		translate([0,0,-ScrewLength()])
		{
			cylinder(ScrewLength()+3dPrinterTolerance, (ScrewDiameter()+3dPrinterTolerance)/2, (ScrewDiameter()+3dPrinterTolerance)/2);
		}
		cylinder(ScrewHeadHeight(), ScrewHeadDiameter()/2,ScrewHeadDiameter()/2);
	}
}

screw();