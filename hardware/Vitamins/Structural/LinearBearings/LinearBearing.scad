function LinearBearingDiam() = 15;
function LinearBearingInnerDiam() = 8.3;
function LinearBearingHeight() = 24;

module LinearBearing(3dPrinterTolerance=.4)
{
cylinder(LinearBearingHeight()+3dPrinterTolerance, LinearBearingDiam()/2+3dPrinterTolerance, LinearBearingDiam()/2+3dPrinterTolerance);
}


LinearBearing();