use <../Tolerance.scad>

function ZrodLength()=1000;
function ZrodDiameter()=8;  //base case: 8
function ZrodRadius()=ZrodDiameter()/2;

module Zrod(3dPrinterTolerance=.4)
{
color("Silver")
cylinder(ZrodLength(), ZrodRadius()+3dPrinterTolerance/2, ZrodRadius()+3dPrinterTolerance/2);
}

Zrod();
