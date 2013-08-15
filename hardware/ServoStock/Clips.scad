use <Parameters.scad>
use <../Vitamins/Structural/SteelRod/8mm_Rod_Vitamin.scad>
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>
use <../Vitamins/Fasteners/ScrewsAsBolts/High_Low_Screw_As_Bolt_Vitamin.scad>
use <../Vitamins/Fasteners/Screws/High_Low_Screw_Vitamin.scad>
use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>



function MotorBracketHeight()= StandardServoLength()+StandardServoTolerance()*4+PlasticWidth()*2;
function BearingBracketHeight()=608BallBearingDiam()*1.5;
function SlotWidth()= PlasticWidth()/2;
function ClipWidth()=StandardServoHeightAbvWings()-1.5;

//This makes a single clip
module clip(Height = MotorBracketHeight())
{
	difference()
	{
		translate([0,-SideWidth()/2,0])
		{	
			difference()
			{
				//this makes the basic curved rectangle shape of the clip
				union()
				{
					cube([SideWidth()*2,SideWidth(),Height]);
					translate([0,SideWidth()/2,0])
					{
						cylinder(h=Height,r=SideWidth()/2);
					}
				}

				//This makes the holes for the structural rod
				translate([PlasticWidth()+8mmRodDiameter(.6)/4,SideWidth()/2,-1])
				{
					cylinder(h=Height+2, r=8mmRodDiameter(.6)/2);
				}

				//This makes the slot for the clip
				translate([8mmRodDiameter()/2+8mmRodDiameter(.6)/4+1,SideWidth()/2-PlasticWidth()/4,-1])
				{
					cube([SideWidth()*2-SideWidth()/2+PlasticWidth(),SlotWidth(),Height+2]);
				}

				//This makes the screwholes for the bed mount
				translate([-PlasticWidth()/2,SideWidth()/2,-1])
				{
					cylinder(h=Height+2, r=HiLoScrewDiameter()/2);
				}
			} 	
		}	
	}	
}


module sidebolts(Height = MotorBracketHeight())
{
	union()
	{

		//These make the boltholes for the clip
		//uncomment these translates and rotates when you're ready to 
		//translate([SideWidth()*2-PlasticWidth()*1.5,-PlasticWidth()-HiLoBoltHeadHeight()/2-1,Height/3])
		//{
		//	rotate([90,0,0])
		//	{
		translate([SideWidth()*2-PlasticWidth()*1.5,PlasticWidth()+HiLoBoltHeadHeight()/2+1,Height/3])
		{
			rotate([-90,0,0])
			{
				#HiLoBolt(.4, PlasticWidth());
			}
		}
		//translate([SideWidth()*2-PlasticWidth()*1.5,-PlasticWidth()-HiLoBoltHeadHeight()/2-1,2*Height/3])
		//{
		//	rotate([90,0,0])
		//	{
		translate([SideWidth()*2-PlasticWidth()*1.5,PlasticWidth()+HiLoBoltHeadHeight()/2+1,2*Height/3])
		{
			rotate([-90,0,0])
			{
				#HiLoBolt(.4, PlasticWidth());
			}
		}		
	}
}

module bolts(Height = MotorBracketHeight())
{
	union()
	{
		sidebolts(Height);
		translate([0, ZrodSpacing(),0])
		{
			mirror([0,1,0])
			{
				sidebolts(Height);
			}
		}
	}
}
		


//This module calls the clips and makes the box between them. If true, it makes the bottom set, and if false it makes the top set (which is shorter)
module Clips(MotorHeight=true)
{

	//This part of the if statement makes the bottom clips
	if(MotorHeight==true){


	//This centers everything
		translate([-ClipWidth(),-ZrodSpacing()/2, 0])
		{
			difference()
			{
				union()
				{
		//this draws the clips themselves
					clip(MotorBracketHeight());
					translate([0,ZrodSpacing(),0])
					{
						clip(MotorBracketHeight());
					}
						translate([0,8mmRodDiameter(.6)/2, 0])
	//this draws the box between the clips
					{
						cube([ClipWidth(), ZrodSpacing()-8mmRodDiameter(.6),MotorBracketHeight()]);
					}
				}
				bolts(MotorBracketHeight());
			}
		}


	//this is same as above, except it makes the top clips	
	}else{
		translate([-ClipWidth(),-ZrodSpacing()/2, 0])
		{
			difference()
			{
				union()
				{
		//this draws the clips themselves
					clip(BearingBracketHeight());
					translate([0,ZrodSpacing(),0])
					{
						clip(BearingBracketHeight());
					}
						translate([0,8mmRodDiameter(.6)/2, 0])
	//this draws the box between the clips
					{
						cube([ClipWidth(), ZrodSpacing()-8mmRodDiameter(.6),BearingBracketHeight()]);
					}
				}
				bolts(BearingBracketHeight());
			}
		}		
	}
}



Clips(false);
