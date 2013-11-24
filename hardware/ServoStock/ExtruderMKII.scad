$fn=50;
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>;
use <../Vitamins/Actuators/StandardServo/Servo_Connector_Vitamin.scad>;
use<../Vitamins/Fasteners/Screws/High_Low_Screw_Vitamin.scad>;
use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/Encoder_Vitamin.scad>;
use <../Vitamins/Sensors/Encoders/EncoderMagnet_Vitamin.scad>;
use <../Vitamins/Tools/Standard_Extruder_Spacing_Vitamin.scad>;
use <../Vitamins/Tools/Filament_Vitamin.scad>;
use <MKIIwheel.scad>;
use <Extruder_Encoder_Keepaway.scad>;

//core dimensions depend on the servo and filament.  

function ExtruderX(3dPrinterTolerance=.4) = StandardServoHeightAbvWings(.6)+FilamentDiam()+StandardServoNubHeight()+HiLoScrewDiameter(.4)*2+3dPrinterTolerance;
echo("ExtruderX is",(ExtruderX(.4)));
function ExtruderY(3dPrinterTolerance=.4) = StandardServoLength()+3dPrinterTolerance;
echo("ExtruderY is",(ExtruderY(.4)));
function ExtruderZ(3dPrinterTolerance=.4) = StandardServoThickness()+FilamentDiam()+3dPrinterTolerance;
echo("ExtruderZ is",(ExtruderZ(.4)));

//Thru-hole screw module:
function CounterboreRad(3dPrinterTolerance=.4) = HiLoScrewHeadDiameter(3dPrinterTolerance)/2+.5;
module ThruholeScrew(3dPrinterTolerance=.4){
	rotate([0,0,0]){cylinder(h=HiLoScrewLength()*4, r=HiLoScrewDiameter(.4)/2);}
	
}	

function ScrewVector() = [ExtruderX(.4)-HiLoScrewHeadDiameter(),-StandardExtruderSpacing()/2+ExtruderY(.4)/2+HiLoScrewHeadDiameter()/2,0];

//channel for bearing:
module BearingChannel(3dPrinterTolerance=.4)
union()
{
	translate([0,-608BallBearingDiam()/2,0])cube([608BallBearingDiam(.4),608BallBearingDiam(.4),StandardServoThickness()]);
	cylinder(h=StandardServoThickness(), r=608BallBearingDiam(3dPrinterTolerance)/2);
}
//BearingChannel(.4)

//The extruder bottom.  This includes the servo,screws, and filament subtractions:
module ExtruderBottom(3dPrinterTolerance=.4){
	difference()
	{
		cube([ExtruderX(.4),ExtruderY(.4),ExtruderZ(.4)]);
//Screw holes:
		translate([ExtruderX(.4)-HiLoScrewHeadDiameter(),-StandardExtruderSpacing()/2+ExtruderY(.4)/2+HiLoScrewHeadDiameter()/3,-.1]){ThruholeScrew(.4);}
		translate([ExtruderX(.4)-HiLoScrewHeadDiameter(),StandardExtruderSpacing()/2+ExtruderY(.4)/2-HiLoScrewHeadDiameter()/3,-.1]){ThruholeScrew(.4);}
		translate([0,StandardServoWingsHeight()+StandardServoCylinderDist()+1.1,0]){
//Servo:
			#translate([StandardServoNubHeight()+StandardServoHeightAbvWings()+FilamentDiam()/2,0,StandardServoThickness()/2+FilamentDiam()+.2])rotate([0,90,0])StandardServoMotor(true,2,true,.4);
//The opening for the top half/idler wheel to fit:
			translate([StandardServoHeightAbvWings()/2+FilamentDiam(),0,608BallBearingDiam()-4])rotate([0,-90,180])BearingChannel();
//The Filament:
			#translate([ExtruderX(.4)/2,FilamentHeight()/2,StandardServoThickness()/2+StandardServoNubDiam()+.5])rotate([90,0,0])Filament();
		}
	}
}
//The extruder top.  This is the mount for the Idler Wheel, bearing, and encoder:
module ExtruderTop(3dPrinterTolerance=.4){
	rotate([180,90,0]){
		union(){
			MKIIwheel(.4);
			translate([0,0,-608BallBearingHeight(.4)]){608BallBearing(.4);}
		}
	}
} 

	translate([ExtruderX(.4)-StandardServoNubHeight()*2-FilamentDiam()/2,StandardServoWingsHeight()+StandardServoCylinderDist()+1.1,ExtruderZ(.4)+FilamentDiam()]){ExtruderTop(.4);}
//ExtruderBottom(.4);