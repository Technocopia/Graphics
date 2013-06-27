use <../Parameters.scad>

function BallBearingDiam() = 40 + 3dPrinterTolerance();
function BallBearingHeight() = 10 + 3dPrinterTolerance();
function BallBearingInnerDiam()=30 + 3dPrinterTolerance();

module BallBearing();
{
cylinder(BallBearingHeight(), BallBearingDiam()/2, BallBearingDiam()/2, 0);
}


BallBearing();