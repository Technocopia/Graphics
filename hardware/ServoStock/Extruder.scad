$fn=50;
use <../Vitamins/Electronics/Hot_Ends/PrintrBotJHeadHotEnd_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/Servo_Connector_Vitamin.scad>;
use <../Vitamins/Fasteners/Screws/High_Low_Screw_Vitamin.scad>;
use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/Encoder_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/EncoderMagnet_Vitamin.scad>;
use <../Vitamins/Tools/Filament_Vitamin.scad>;
use <ExtruderIdlerWheel.scad>;

//core dimensions of the part depend on the screw, servo, and servo connector.  Width is based on the standard platform fastener distance.  Parameterize when possible.
function ExtruderLength(3dPrinterTolerance=.4) = StandardServoLength(3dPrinterTolerance)+HiLoScrewLength(3dPrinterTolerance)/2+2*ConnectorLength(3dPrinterTolerance);
function ExtruderHeight(3dPrinterTolerance=.4) = HiLoScrewLength(3dPrinterTolerance)/2;
function ExtruderWidth(3dPrinterTolerance=.4) = 54+HotEndDiam(3dPrinterTolerance);


//Creating the basic extruder block
module ExtruderBlock(3dPrinterTolerance=.4)
{
	cube([ExtruderLength(3dPrinterTolerance),ExtruderWidth(3dPrinterTolerance),ExtruderHeight(3dPrinterTolerance)]);
}

//ExtruderBlock(.4);

//Removing feature elements from block. The boolean creates either a servo side or an encoder side.

module Extruder(servo=true, 3dPrinterTolerance=.4)
{
	if(servo==true){
		difference(){
			translate([-ExtruderLength()/2,-ExtruderWidth()/2,0]){ExtruderBlock(.4);}
			translate([ExtruderWidth()/2,0,ExtruderHeight()]){rotate([0,90,0]){HotEnd(false,.4);}}
			translate([0,StandardServoNubDiam()/2+FilamentDiam(3dPrinterTolerance)/4,StandardServoHeightAbvWings()*1.75]){rotate([0,0,-90]){#StandardServoMotor(true,2,true,.4);}}
			rotate([0,90,0]){translate([-ExtruderHeight(),0,-ExtruderLength()/2-2]){Filament(1.75,100,0);}}
			translate([0,-ExtruderIdlerWheelDiam()/2,ExtruderHeight(3dPrinterTolerance)/2-ExtruderIdlerWheelThickness(3dPrinterTolerance)]){IdlerWheelKeepaway(.4);}
			translate([0,-ExtruderIdlerWheelDiam()/2,ExtruderHeight(3dPrinterTolerance)/2-ExtruderIdlerWheelThickness(3dPrinterTolerance)]){IdlerWheel(.4);}
			translate([0,-ExtruderIdlerWheelDiam()/2,-ExtruderHeight()+(ExtruderHeight()-1)]){cylinder(h=MagnetLength(3dPrinterTolerance)*2, r=608BallBearingInnerDiam(-3dPrinterTolerance)/2);}
		}
	}else{
	}
}
Extruder(true,.4);
				
			

