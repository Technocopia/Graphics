function M8x30BoltDiameter()= 7;
function M8x30BoltLength()= 38;
function M8x30BoltHeadDiameter()= 13;
function M8x30BoltHeadHeight()= 8;

//err on the side of larger tolerances for bolts

module M8x30Bolt(3dPrinterTolerance=.4)
{
	union()
	{
		translate([0,0,-M8x30BoltLength()])
		{
			cylinder(M8x30BoltLength()+3dPrinterTolerance, (M8x30BoltDiameter()+3dPrinterTolerance)/2,(M8x30BoltDiameter()+ 3dPrinterTolerance)/2);
		}
		cylinder(M8x30BoltHeadHeight()+3dPrinterTolerance, (M8x30BoltHeadDiameter()+3dPrinterTolerance)/2,(M8x30BoltHeadDiameter()+3dPrinterTolerance)/2);
	}
}

M8x30Bolt();
