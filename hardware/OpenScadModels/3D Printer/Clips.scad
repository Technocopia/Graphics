use <parameters.scad>
use <Vitamins/ZAxisMotors.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>
use <Vitamins/BallBearing.scad>


//These allow you to call the "top" or "bottom" bracket rather than true or false, so it's easier to remember.
function Top() = false;
function Bottom() = true;



//This makes a single clip
module clip(Height = BoxWidth())
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
					cube([SideWidth()*2-SideWidth()/2+PlasticWidth(),PlasticWidth()/2,Height+2]);
				}


	//These make the boltholes for the clip
				translate([SideWidth()*2-PlasticWidth()*1.5,-1,Height/3])
				{
					rotate([90,0,0])
					{
					#SmallBolt();
					}
				}
				translate([SideWidth()*2-PlasticWidth()*1.5,-1,2*Height/3])
				{
					rotate([90,0,0])
					{
					#SmallBolt();
					}
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


//This module calls the clips and makes the box between them. If true, it makes the bottom set, and if false it makes the top set (which is shorter)
module Clips(MotorHeight=true)
{

	//This part of the if statement makes the bottom clips
	if(MotorHeight==true){


	//This centers everything
		translate([0,-ZrodSpacing()/2, 0])
		{
			union()
			{
	//this draws the clips themselves
				clip(BoxWidth());
				translate([0,ZrodSpacing(),0])
				{
					clip(BoxWidth());
				}
				translate([0,ZrodDiameter()/2, 0])
	//this draws the box between the clips
				{
					cube([PlasticWidth(), ZrodSpacing()-ZrodDiameter(),BoxWidth()]);
				}
			}
		}


	//this is same as above, except it makes the top clips	
	}else{
		translate([0,-ZrodSpacing()/2, 0])
		{
			union()
			{
				clip(BallBearingDiam()*2);
				translate([0,ZrodSpacing(),0])
				{
					clip(BallBearingDiam()*2);
				}
				translate([0,ZrodDiameter()/2, 0])
				{
					cube([PlasticWidth(), ZrodSpacing()-ZrodDiameter(),BallBearingDiam()*2]);
				}
			}
		}
	}
}



Clips(Top());



