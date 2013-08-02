
module Filament(FilamentDiam=1.75, Height=70, 3DPrinterTolerance=.4)
{
	$fn=50;
	cylinder(h=Height, r=(FilamentDiam+3DPrinterTolerance)/2);
}

Filament();

translate([10,0,0])
Filament(3, 100, 0);