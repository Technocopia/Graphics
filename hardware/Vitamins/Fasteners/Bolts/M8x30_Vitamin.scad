function M8x30BoltDiameter(3dPrinterTolerance=.4)= 7+3dPrinterTolerance;
function M8x30BoltLength(3dPrinterTolerance=.4)= 38+3dPrinterTolerance;
function M8x30BoltHeadDiameter(3dPrinterTolerance=.4)= 13+3dPrinterTolerance;
function M8x30BoltHeadHeight(3dPrinterTolerance=.4)= 8+3dPrinterTolerance;

//err on the side of larger tolerances for bolts

module M8x30Bolt(3dPrinterTolerance=.4)
{
	union()
	{
		translate([0,0,-M8x30BoltLength(3dPrinterTolerance)])
		{
			cylinder(M8x30BoltLength(3dPrinterTolerance), M8x30BoltDiameter(3dPrinterTolerance)/2,M8x30BoltDiameter(3dPrinterTolerance)/2);
		}
		cylinder(M8x30BoltHeadHeight(3dPrinterTolerance), M8x30BoltHeadDiameter(3dPrinterTolerance)/2,M8x30BoltHeadDiameter(3dPrinterTolerance)/2);
	}
}

M8x30Bolt();
