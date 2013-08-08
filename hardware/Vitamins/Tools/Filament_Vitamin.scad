function FilamentDiam()=1.75;
function FilamentHeight()=100;
module Filament(3DPrinterTolerance=.4)
{
	$fn=50;
	cylinder(h=FilamentHeight(), r=FilamentDiam(3dPrinterTolerance)/2);
}

Filament();


