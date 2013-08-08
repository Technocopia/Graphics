use <Parameters.scad>
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>
use <../Vitamins/Fasteners/Screws/High_Low_Screw_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>
use <../Vitamins/Sensors/Encoders/Encoder_Vitamin.scad>
use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>

//HEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEYHEY
use <BearingCap.scad>	
use <Clips.scad>	


function EncoderShelfWidth() = PlasticWidth()*3+608BallBearingHeight()+EncoderThickness();
function EncoderShelfDistance() = StandardServoOutcrop()-PlasticWidth()+WorkingPulleyHeight();
function EncoderShelfLength() = ZrodSpacing()-SideWidth()+SlotWidth();
function EncoderShelfOffset() = -ZrodSpacing()/2+PlasticWidth()+SlotWidth()/2;
function EncoderCutoutLength()= PulleyDiam()+PlasticWidth()*2;
function EncoderMountHeight() = StandardServoCenterDist()+StandardServoTolerance()*4+StandardServoBoltDiam()/2;
function EncoderMountWidth() = EncoderWidth()+PlasticWidth();

$fn=50;

echo(PlasticWidth());

module wing()
{
	difference()
	{		
		//This makes the wings for the bed mount
		translate([-SideWidth()*3-PlasticWidth(),-ZrodSpacing()/2-PlasticWidth()/2,0])
		{
			union()
			{	
				//difference()
				//{
				cube([SideWidth()*3,PlasticWidth(), MotorBracketHeight()]);

				//these wings made it hard to figure out scalability
					//translate([SideWidth()+PlasticWidth()*5,-1,-MotorBracketHeight()/1.5])
					//{
						//rotate([0,-45,0])
						//{
								//cube([SideWidth()*3+PlasticWidth()*2,PlasticWidth()+2, MotorBracketHeight()*1.5]);
						//}
					//}
				//}
				translate([0,PlasticWidth()/2,MotorBracketHeight()-HiLoScrewLength()-PlasticWidth()])
				{
					cylinder(h=HiLoScrewLength()+PlasticWidth(), r=PlasticWidth());
				}
			}
		}
		
		//This makes the screwholes on the wings of the bed mount
		translate([-SideWidth()*3-PlasticWidth(),-ZrodSpacing()/2,MotorBracketHeight()-HiLoScrewLength()-PlasticWidth()*2+2])
		{
			cylinder(h=HiLoScrewLength()+PlasticWidth()*2, r=HiLoScrewDiameter()/2);
				
		}
	}	
}

//This just duplicates the wing into two wings
module wings()
{
	union()
	{
		wing();
		translate([0, ZrodSpacing(), 0])
		{
			wing();
		}
	}
}

module BearingCutout()
{
	rotate([0,90,0])
	{
		union()
		{
			608BallBearing();
			translate([0,0,-EncoderShelfDistance()+608BallBearingHeight()/2])
			{
				cylinder(h=EncoderShelfDistance(), r=608BallBearingDiam()/2-PlasticWidth()/2);
			}
			translate([0,0,608BallBearingHeight()/2.5])
			{
				cylinder(h=PlasticWidth()*3, r=608BallBearingDiam()/4);
			}
		}				
	}
}



module EncoderMount()
{
	union()
	{
		//this makes the shelf that the encoder/bearing mount sits on
		difference()
		{
			translate([PlasticWidth(),EncoderShelfOffset(),MotorBracketHeight()-PlasticWidth()*3])
			{
				cube([EncoderShelfWidth()+EncoderShelfDistance(),EncoderShelfLength(), PlasticWidth()*3]);
			}
			translate([PlasticWidth()-1,-EncoderCutoutLength()/2,MotorBracketHeight()-PlasticWidth()*3-1])
			{
				cube([EncoderShelfDistance()+1,EncoderCutoutLength(), PlasticWidth()*3+2]);
			}
		}
		difference()
		{
			//this makes the basic shape of the encoder/bearing mount
			translate([PlasticWidth()+EncoderShelfDistance(),-EncoderShelfLength()/2,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()]) 
			{
				cube([EncoderShelfWidth(), EncoderShelfLength(), EncoderMountHeight()]);
			}
		}
		translate([EncoderShelfWidth()+EncoderShelfDistance()-PlasticWidth()*2,-EncoderMountWidth()/2,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()*4.5]) 
		{
			cube([PlasticWidth()*3, EncoderMountWidth(), EncoderHeight()+PlasticWidth()*2.5]);
		}
	}
}



//this is the actual module for the finished foot, it pulls down the clips and adds the wings to make a bed mount, and cuts holes to accomodate the motor
module StructuralFeet()
{
	difference()
	{
		union()
		{
			difference()
			{
				Clips(true);
				translate([-.5,-StandardServoThickness()/2,PlasticWidth()])
				rotate([0,0,90])
				{
					rotate([90,0,0])
					{
						StandardServoMotor(true, 1, false, .4);
					}
				}
			}
			wings();
			difference()
			{
				EncoderMount();
				translate([EncoderShelfDistance()+PlasticWidth(),0,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()])
				{
					rotate([0,0,180])
					{
						rotate([180,0,0])
						{
							SubtractiveBearingCap();	
						}
					}
				}
			}
		}
		translate([EncoderShelfDistance()+PlasticWidth()+PulleyHubHeight(),0,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()])
		{
			BearingCutout();
			translate([608BallBearingHeight()*1.5,0,0])
			{
				rotate([0,90,0])
				{
					rotate([0,0,90])
					{
						union()
						{
							Encoder_Keepaway();
							#Encoder(false);			
						}					
					}
				}
			}
		}
	}
}








//rotating the module, as it would be rotated for printing
translate([0,0, MotorBracketHeight()])
{
	rotate([0,180,0])
	{
		StructuralFeet();
	}
}

//check it out the pulley fits and everything

//translate([-StandardServoCylinderHeight()-PlasticWidth(),0,EncoderMountHeight()+PlasticWidth()])
//	rotate([0,-90,0])
//		{
//		#servo_pulley(true);
//		}
