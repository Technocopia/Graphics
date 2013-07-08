use <../Parameters.scad>

function BallBearingDiam() = 22 + 3dPrinterTolerance(); //USUALLY 22
function BallBearingHeight() = 7 + 3dPrinterTolerance(); //USUALLY 7
function BallBearingInnerDiam()=8 + 3dPrinterTolerance(); //USUALLY 8

module BallBearing()
{
cylinder(BallBearingHeight(), BallBearingDiam()/2, BallBearingDiam()/2);
}


BallBearing();
