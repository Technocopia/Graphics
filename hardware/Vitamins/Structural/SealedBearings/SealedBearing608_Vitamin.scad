function 608BallBearingDiam() = 22;
function 608BallBearingHeight() = 7;
function 608BallBearingInnerDiam()= 8;


module 608BallBearing(3dPrinterTolerance=.04)
{
	union()
	{
		cylinder(608BallBearingHeight(), (608BallBearingDiam()+3dPrinterTolerance)/2, (608BallBearingDiam()+3dPrinterTolerance)/2, 0);
		%cylinder(608BallBearingHeight(), 608BallBearingInnerDiam()/2, 608BallBearingInnerDiam()/2);
	}
}

608BallBearing();