$fn=50;
use <../Vitamins/Electronics/Hot_Ends/PrintrBotJHeadHotEnd_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/Servo_Connector_Vitamin.scad>;
use <../Vitamins/Fasteners/Screws/High_Low_Screw_Vitamin.scad>;
use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/Encoder_Vitamin.scad>;
use <ExtruderIdlerWheel.scad>;

//core dimensions of the part depend on the screw, servo, and servo connector.  Width is based on the standard platform fastener distance.  Parameterize when possible.
function ExtruderLength(3dPrinterTolerance=.4) = StandardServoLength(3dPrinterTolerance)+HiLoScrewLength(3dPrinterTolerance)/2+2*ConnectorLength(3dPrinterTolerance);
function ExtruderHeight(3dPrinterTolerance=.4) = HiLoScrewLength(3dPrinterTolerance)/2;
function ExtruderWidth(3dPrinterTolerance=.4) = 54+HotEndDiam(3dPrinterTolerance)/2;


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
			ExtruderBlock(.4);
			rotate([0,90,0]){translate([0,0,ExtruderLength()-HotEndLength()/5]){#HotEnd(false,.4);}}
		}
	}else{
	}
}
Extruder(true,.4);
				
			

