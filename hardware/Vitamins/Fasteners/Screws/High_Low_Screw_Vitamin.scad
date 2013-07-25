function HiLoScrewDiameter()= 3.6;  
function HiLoScrewLength()= 22;
function HiLoScrewHeadDiameter()= 6.7;
function HiLoScrewHeadHeight()= 2.5;

//err on the side of smaller tolerances for screws

module HiLoScrew(3dPrinterTolerance=.4)
{
	union()
	{
		translate([0,0,-HiLoScrewLength()])
		{
			cylinder(HiLoScrewLength()+3dPrinterTolerance, (HiLoScrewDiameter()+3dPrinterTolerance)/2, (HiLoScrewDiameter()+3dPrinterTolerance)/2);
		}
		cylinder(HiLoScrewHeadHeight(), HiLoScrewHeadDiameter()/2,HiLoScrewHeadDiameter()/2);
	}
}

HiLoScrew();