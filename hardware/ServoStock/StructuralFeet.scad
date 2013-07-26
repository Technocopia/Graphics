use <Parameters.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/ServoMotor.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>
use <Vitamins/Pully.scad>
use <Vitamins/Encoder.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/SubtractiveFootBearingCap.scad>
use <Clips.scad>

function EncoderShelfWidth() = PlasticWidth()*3+BallBearingHeight()+EncoderThickness();
function EncoderShelfDistance() = MotorOutcrop()-PlasticWidth()+PullyBodyWidth();
function EncoderShelfLength() = ZrodSpacing()-SideWidth()+SlotWidth();
function EncoderShelfOffset() = -ZrodSpacing()/2+PlasticWidth()+SlotWidth()/2;
function EncoderCutoutLength()= PullyDiam()+PlasticWidth()*2;
function EncoderMountHeight() = MotorCenterDist()+MotorTolerance()*4+MotorBoltDiam()/2;
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
//					difference()
//					{
						cube([SideWidth()*3,PlasticWidth(), MotorBracketHeight()]);

							//these wings made it hard to figure out scalability
//						translate([SideWidth()+PlasticWidth()*5,-1,-MotorBracketHeight()/1.5])
//						{
//							rotate([0,-45,0])
//							{
//								cube([SideWidth()*3+PlasticWidth()*2,PlasticWidth()+2, MotorBracketHeight()*1.5]);
//							}
//						}
//					}
					translate([0,PlasticWidth()/2,MotorBracketHeight()-ScrewLength()-PlasticWidth()])
					{
						cylinder(ScrewLength()+PlasticWidth(), PlasticWidth(), PlasticWidth());
					}
				}
			}
		


	//This makes the screwholes on the wings of the bed mount
		translate([-SideWidth()*3-PlasticWidth(),-ZrodSpacing()/2,MotorBracketHeight()-ScrewLength()-PlasticWidth()*2+2])
		{
			cylinder(ScrewLength()+PlasticWidth()*2, ScrewDiameter()/2, ScrewDiameter()/2);
				
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
			BallBearing();
			translate([0,0,-EncoderShelfDistance()+BallBearingHeight()/2])
			{
				cylinder(EncoderShelfDistance(), BallBearingDiam()/2-PlasticWidth()/10,BallBearingDiam()/2-PlasticWidth()/10);
			}
			translate([0,0,BallBearingHeight()/2.5])
			{
				cylinder(PlasticWidth()*3, BallBearingDiam()/4,BallBearingDiam()/4);
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
				cube([EncoderShelfWidth()+EncoderShelfDistance(),EncoderShelfLength(), PlasticWidth()*3])
;
			}
			translate([PlasticWidth()-1,-EncoderCutoutLength()/2,MotorBracketHeight()-PlasticWidth()*3-1])
			{
				cube([EncoderShelfDistance()+1,EncoderCutoutLength(), PlasticWidth()*3+2])
;
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
			translate([EncoderShelfWidth()+EncoderShelfDistance()-PlasticWidth()*2,-EncoderMountWidth()/2,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()*4]) 
			{
				cube([PlasticWidth()*3, EncoderMountWidth(), EncoderHeight()+PlasticWidth()*2]);
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
			Clips(Bottom());
				translate([-.5,-MotorThickness()/2,PlasticWidth()])
				rotate([0,0,90])
				{
					rotate([90,0,0])
					
				{
					ServoMotor();
				}
}
				
		}
			
		wings();
		difference()
		{
			EncoderMount();
			translate([PlasticWidth()/2+EncoderShelfDistance()+BallBearingHeight(),0,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()/3])
				{
					rotate([180,0,0])
					{
						FootBearingSlot();	
							
					}
				}
		}
	}
			translate([EncoderShelfDistance()+PlasticWidth()*2,1,MotorBracketHeight()-EncoderMountHeight()-PlasticWidth()])
			{
				BearingCutout();
				translate([BallBearingHeight()*1.5,0,0])
				{
					rotate([0,90,0])
					{
						rotate([0,0,90])
						{
						union()
						{
							EncoderSlot();
							#Encoder();
							
						}
							
						
						}
					}}}
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



//StructuralFeet();


//FootBearingSlot();




