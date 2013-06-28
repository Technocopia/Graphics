use <../Parameters.scad>

function BallBearingDiam() = 22 + 3dPrinterTolerance();
function BallBearingHeight() = 7 + 3dPrinterTolerance();
function BallBearingInnerDiam()=8 + 3dPrinterTolerance();

module BallBearing()
{
cylinder(BallBearingHeight(), BallBearingDiam()/2, BallBearingDiam()/2);
}


BallBearing();