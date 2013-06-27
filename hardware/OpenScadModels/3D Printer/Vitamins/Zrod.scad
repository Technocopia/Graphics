use<../Parameters.scad>

function ZrodLength()=1000;
function ZrodDiameter()=40;

module Zrod()
{
color("Silver")
cylinder(ZrodLength(), ZrodDiameter()/2, ZrodDiameter()/2);
}

Zrod();
