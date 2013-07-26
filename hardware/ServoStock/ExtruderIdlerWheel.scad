use <../Vitamins/Structural/SealedBearings/SealedBearing608.scad>;
use <../Vitamins/Sensors/Encoders/EncoderMagnet_Vitamin.scad>;
module IdlerWheel(){
	difference(){
		union{
			cylinder(MagnetLength(),MagnetDiam()/2,MagnetDiam()/2)