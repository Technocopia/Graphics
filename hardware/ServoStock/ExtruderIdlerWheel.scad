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
			cylinder(h=MagnetLength(3dPrinterTolerance), r=608BallBearingInnerDiam(-3dPrinterTolerance)/2);
			
				translate([0,0,MagnetLength(3dPrinterTolerance)-ExtruderIdlerWheelThickness(3dPrinterTolerance)/2])
				{
					cylinder(ExtruderIdlerWheelThickness(3dPrinterTolerance),ExtruderIdlerWheelDiam(3dPrinterTolerance)/2,ExtruderIdlerWheelInnerDiam(3dPrinterTolerance)/2);
				}			
		}
		translate([0,0,MagnetLength(3dPrinterTolerance)-.25]){rotate([0,180,0]){MagnetDraft(.4);}}
	}
}

translate([0,0,MagnetLength()+ExtruderIdlerWheelThickness()/2])
{
	rotate([0,180,0])
	{
		IdlerWheel(.4);	
	}
}