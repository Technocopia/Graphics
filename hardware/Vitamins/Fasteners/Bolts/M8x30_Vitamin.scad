function BoltDiameter()= 7;
function BoltLength()= 38;
function BoltHeadDiameter()= 13;
function BoltHeadHeight()= 8;

//err on the side of larger tolerances for bolts

module LargeBolt(3dPrinterTolerance=.4)
{
	union()
	{
		translate([0,0,-BoltLength()])
		{
			cylinder(BoltLength()+3dPrinterTolerance, (BoltDiameter()+3dPrinterTolerance)/2,(BoltDiameter()+ 3dPrinterTolerance)/2);
		}
		cylinder(BoltHeadHeight()+3dPrinterTolerance, (BoltHeadDiameter()+3dPrinterTolerance)/2,(BoltHeadDiameter()+3dPrinterTolerance)/2);
	}
}

LargeBolt();
