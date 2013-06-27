function ZrodLength()=1000;
function ZrodDiameter()=20;
function ZrodRadius()=ZrodDiameter()/2;

module Zrod()
{
color("Silver")
cylinder(ZrodLength(), ZrodRadius(), ZrodRadius());
}

Zrod();
