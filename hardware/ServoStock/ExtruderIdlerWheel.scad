use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/EncoderMagnet_Vitamin.scad>;
$fn=50;
function ExtruderIdlerWheelThickness(3dPrinterTolerance=.4) = 1.65+3dPrinterTolerance;
function ExtruderIdlerWheelDiam(3dPrinterTolerance=.4) = 33.5+3dPrinterTolerance;
function ExtruderIdlerWheelInnerDiam(3dPrinterTolerance=.4) = 32+3dPrinterTolerance;

module IdlerWheel(3dPrinterTolerance=.4){
difference()
{
	union()
	{
		cylinder(MagnetLength(3dPrinterTolerance), 608BallBearingInnerDiam(-3dPrinterTolerance)/2, 608BallBearingInnerDiam(-3dPrinterTolerance)/2);
			translate([0,0,(MagnetLength(3dPrinterTolerance)-ExtruderIdlerWheelThickness(3dPrinterTolerance)*2)])
			{
				cylinder(MagnetLength(3dPrinterTolerance)-608BallBearingHeight()/2,((608BallBearingDiam(3dPrinterTolerance)+608BallBearingInnerDiam(3dPrinterTolerance))/2)/2,((608BallBearingDiam(3dPrinterTolerance)+608BallBearingInnerDiam(3dPrinterTolerance))/2)/2);
			}
			translate([0,0,MagnetLength(3dPrinterTolerance)-ExtruderIdlerWheelThickness(3dPrinterTolerance)])
			{
				cylinder(ExtruderIdlerWheelThickness(3dPrinterTolerance),ExtruderIdlerWheelDiam(3dPrinterTolerance)/2,ExtruderIdlerWheelInnerDiam(3dPrinterTolerance)/2);
			}
			translate([ExtruderIdlerWheelInnerDiam(3dPrinterTolerance)/3,0,MagnetLength(3dPrinterTolerance)])
			{
				cylinder(ExtruderIdlerWheelThickness(3dPrinterTolerance),608BallBearingInnerDiam(-3dPrinterTolerance)/3, 608BallBearingInnerDiam(-3dPrinterTolerance)/3);
			}	
			translate([-ExtruderIdlerWheelInnerDiam(3dPrinterTolerance)/3,0,MagnetLength(3dPrinterTolerance)])
			{
				cylinder(ExtruderIdlerWheelThickness(3dPrinterTolerance),608BallBearingInnerDiam(-3dPrinterTolerance)/3, 608BallBearingInnerDiam(-3dPrinterTolerance)/3);
			}		
	}
	EncoderMagnet(true,.4);
	translate([0,-(ExtruderIdlerWheelInnerDiam(3dPrinterTolerance)/3),MagnetLength(3dPrinterTolerance)-ExtruderIdlerWheelThickness(3dPrinterTolerance)-2])
	{
		cylinder(ExtruderIdlerWheelThickness(3dPrinterTolerance)+4,608BallBearingInnerDiam(3dPrinterTolerance)/3,608BallBearingInnerDiam(3dPrinterTolerance)/3);
	}
	translate([0,(ExtruderIdlerWheelInnerDiam(3dPrinterTolerance)/3),MagnetLength(3dPrinterTolerance)-ExtruderIdlerWheelThickness(3dPrinterTolerance)-2])
	{
		cylinder(ExtruderIdlerWheelThickness(3dPrinterTolerance)+4,608BallBearingInnerDiam(3dPrinterTolerance)/3,608BallBearingInnerDiam(3dPrinterTolerance)/3);
	}
}
}
IdlerWheel(.4);	