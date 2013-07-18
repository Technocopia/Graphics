use <../Tolerance.scad>

function PullyBodyWidth() = 22 + 3dPrinterTolerance();
function PullyDiam() = 30 + 3dPrinterTolerance();

module Pully()
{
	cylinder(PullyBodyWidth(), PullyDiam()/2, PullyDiam()/2);
}

Pully();