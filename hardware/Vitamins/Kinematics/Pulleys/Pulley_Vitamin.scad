function PulleyBodyWidth(3dPrinterTolerance=.4) = 22 + 3dPrinterTolerance;
function PulleyDiam(3dPrinterTolerance=.4) = 30 + 3dPrinterTolerance;

module Pulley(3dPrinterTolerance=.4)
{
	cylinder(PulleyBodyWidth(3dPrinterTolerance), PulleyDiam(3dPrinterTolerance)/2, PulleyDiam(3dPrinterTolerance)/2);
}

Pulley();