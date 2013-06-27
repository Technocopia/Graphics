use <../Parameters.scad>

function LinearBearingDiam() = 21.9 + 3dPrinterTolerance();
function LinearBearingHeight() = 30 + 3dPrinterTolerance();

module LinearBearing();
{
cylinder(LinearBearingHeight(), LinearBearingDiam()/2, LinearBearingDiam()/2, 0);
}


LinearBearing();