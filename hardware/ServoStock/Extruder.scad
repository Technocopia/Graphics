$fn=50;
use <../Vitamins/Electronics/Hot_Ends/PrintrBotJHeadHotEnd_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/Servo_Connector_Vitamin.scad>;
use <../Vitamins/Fasteners/Screws/High_Low_Screw_Vitamin.scad>;
use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/Encoder_Vitamin.scad>;
use <ExtruderIdlerWheel.scad>;

//core dimensions of the part depend on the screw, servo, and servo connector
function ExtruderLength(3dPrinterTolerance=.4) = StandardServoLength()+HiLoScrewLength(3dPrinterTolerance)/2)+2*ConnectorLength(3dPrinterTolerance);
function ExtruderHeight(3dPrinterTolerance=.4) = HiLoScrewLength(3dPrinterTolerance)/2;
function ExtruderWidth(3dPrinterTolerance=.4) = StandardServoLength(3dPrinterTolerance)+5;


//Creating the basic extruder block
module Extruder(3dPrinterTolerance=.4)
{
	cube([ExtruderLength(3dPrinterTolerance),ExtruderWidth(3dPrinterTolerance),ExtruderHeight(3dPrinterTolerance)]);
}

Extruder(.4);

