use <../Vitamins/Structural/SealedBearings/SealedBearing608.scad>;
use <../Vitamins/Sensors/Encoders/EncoderMagnet_Vitamin.scad>;
module IdlerWheel(){
	difference(){
		union{
			cylinder(MagnetLength(),MagnetDiam()/2+.9,MagnetDiam()/2+.9);
			cylinder (MagnetLength()/5.486
			