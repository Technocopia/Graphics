use <../Tolerance.scad>

function PullyBodyWidth(3dPrinterTolerance=.4) = 22 + 3dPrinterTolerance;
function PullyDiam(3dPrinterTolerance=.4) = 30 + 3dPrinterTolerance;

module Pully(3dPrinterTolerance=.4)
{
	cylinder(PullyBodyWidth(3dPrinterTolerance), PullyDiam(3dPrinterTolerance)/2, PullyDiam(3dPrinterTolerance)/2);
}

Pully();