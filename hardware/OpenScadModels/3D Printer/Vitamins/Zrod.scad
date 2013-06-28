function ZrodLength()=1000;
function ZrodDiameter()=8;  //base case: 8
function ZrodRadius()=ZrodDiameter()/2;

module Zrod()
{
color("Silver")
cylinder(ZrodLength(), ZrodRadius(), ZrodRadius());
}

Zrod();
