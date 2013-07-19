use <parameters.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/ServoMotor.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>
use <Vitamins/BallBearing.scad>


//These allow you to call the "top" or "bottom" bracket rather than true or false, so it's easier to remember.
function Top() = false;
function Bottom() = true;

function MotorBracketHeight()= MotorLength()+MotorTolerance()*4+PlasticWidth()*2;
function BearingBracketHeight()= BallBearingDiam()*1.5;
function SlotWidth()= PlasticWidth()/2;

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
						cylinder(Height,SideWidth()/2,SideWidth()/2);
					}
				}


	//This makes the holes for the structural rod
				translate([PlasticWidth()+ZrodDiameter()/4,SideWidth()/2,-1])
				{
					cylinder(Height+2, ZrodDiameter()/2, ZrodDiameter()/2);
				}


	//This makes the slot for the clip
				translate([ZrodDiameter()/2+ZrodDiameter()/4+1,SideWidth()/2-PlasticWidth()/4,-1])
				{
					cube([SideWidth()*2-SideWidth()/2+PlasticWidth(),SlotWidth(),Height+2]);
				}


	//This makes the screwholes for the bed mount
				translate([-PlasticWidth()/2,SideWidth()/2,-1])
				{
					cylinder(Height+2, ScrewDiameter()/2, ScrewDiameter()/2);
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
		//translate([SideWidth()*2-PlasticWidth()*1.5,-PlasticWidth()-BoltHeadHeight()/2-1,Height/3])
		//{
		//	rotate([90,0,0])
		//	{
		translate([SideWidth()*2-PlasticWidth()*1.5,PlasticWidth()+BoltHeadHeight()/2+1,Height/3])
		{
			rotate([-90,0,0])
			{
				#SmallBolt();
			}
		}
			//translate([SideWidth()*2-PlasticWidth()*1.5,-PlasticWidth()-BoltHeadHeight()/2-1,2*Height/3])
			//{
			//	rotate([90,0,0])
			//	{
		translate([SideWidth()*2-PlasticWidth()*1.5,PlasticWidth()+BoltHeadHeight()/2+1,2*Height/3])
		{
			rotate([-90,0,0])
			{
				#SmallBolt();
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
		translate([0,-ZrodSpacing()/2, 0])
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
						translate([0,ZrodDiameter()/2, 0])
	//this draws the box between the clips
					{
						cube([PlasticWidth(), ZrodSpacing()-ZrodDiameter(),MotorBracketHeight()]);
					}
				}
				bolts(MotorBracketHeight());
			}
		}


	//this is same as above, except it makes the top clips	
	}else{
		translate([0,-ZrodSpacing()/2, 0])
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
						translate([0,ZrodDiameter()/2, 0])
	//this draws the box between the clips
					{
						cube([PlasticWidth(), ZrodSpacing()-ZrodDiameter(),BearingBracketHeight()]);
					}
				}
				bolts(BearingBracketHeight());
			}
		}		
	}
}



Clips(Top());



