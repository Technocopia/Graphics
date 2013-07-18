function BallBearingDiam() = 22;
function BallBearingHeight() = 7;
function BallBearingInnerDiam()= 8;


module BallBearing(3dPrinterTolerance=.04)
{
cylinder(BallBearingHeight(), (BallBearingDiam()+3dPrinterTolerance)/2, (BallBearingDiam()+3dPrinterTolerance)/2, 0);
}

BallBearing();