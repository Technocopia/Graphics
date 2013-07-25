function LM8UULinearBearingDiam() = 15;
function LM8UULinearBearingInnerDiam() = 8.3;
function LM8UULinearBearingHeight() = 24;
function LM8UULinearBearingRidgeOffset()= 4.6;

module LM8UUBearing(3dPrinterTolerance=.4)
{
cylinder(LM8UULinearBearingHeight()+3dPrinterTolerance, LM8UULinearBearingDiam()/2+3dPrinterTolerance, LM8UULinearBearingDiam()/2+3dPrinterTolerance);
}


LM8UUBearing();