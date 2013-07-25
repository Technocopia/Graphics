use <../Tolerance.scad>

function ZrodLength(3dPrinterTolerance=.4)=1000+3dPrinterTolerance;
function ZrodDiameter(3dPrinterTolerance=.4)=8+3dPrinterTolerance;  //base case: 8
function ZrodRadius(3dPrinterTolerance=.4)=ZrodDiameter()/2;

module Zrod(3dPrinterTolerance=.4)
{
color("Silver")
cylinder(ZrodLength(3dPrinterTolerance), ZrodRadius(3dPrinterTolerance), ZrodRadius(3dPrinterTolerance));
}

Zrod();
