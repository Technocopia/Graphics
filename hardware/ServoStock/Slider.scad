use <Parameters.scad>
use <../Vitamins/Structural/LinearBearings/LM8UU_Linear_Bearing_Vitamin.scad>
use <../Vitamins/Fasteners/ScrewsAsBolts/High_Low_Screw_As_Bolt_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>

function BearingGripDiam()= LM8UULinearBearingDiam()+PlasticWidth()*2;
function SliderHeight()= LM8UULinearBearingHeight()+PlasticWidth()*2;
function GripWidth()= PlasticWidth();
function FlareLength()= (RodEndSpacing()-ZrodSpacing())/2; 
function FlareWidth()= BallBearingDiam()/2-PlasticWidth();

$fn=100;

//something's a little zany about the zip tie placement


module LinearBearingGrip()
{
	union()
	{
		difference()
		{
			cylinder(SliderHeight(), BearingGripDiam()/2, BearingGripDiam()/2);
			translate([0,0,PlasticWidth()])
			{
				#LM8UUBearing();
			}
			translate([0,0,-1])
			{
			cylinder(SliderHeight()+2, LM8UULinearBearingDiam()/2.2, LM8UULinearBearingDiam()/2.2);
			}
			translate([-BearingGripDiam()/2+LM8UULinearBearingDiam()/4,LM8UULinearBearingDiam()/3,-1])
			{
				cube([LM8UULinearBearingDiam(), LM8UULinearBearingDiam(), SliderHeight()+2]);
			}
		}
	difference()
	{
		union()
		{
			translate([LM8UULinearBearingDiam()/2.67,LM8UULinearBearingDiam()/3,0])
			{
				cube([PlasticWidth(), LM8UULinearBearingDiam()/1.2, SliderHeight()]);
			}
			translate([-LM8UULinearBearingDiam()/1.55,LM8UULinearBearingDiam()/3,0])
			{
				cube([PlasticWidth(), LM8UULinearBearingDiam()/1.2, SliderHeight()]);
			}
		}
		translate([LM8UULinearBearingDiam()-PlasticWidth()-HiLoBoltLength(), LM8UULinearBearingDiam()/2+PlasticWidth(),SliderHeight()/2])
		{
			rotate([0,-90,0])
			{
				#HiLoBolt();
			}
		}
	}
	}
}

module BeltClip()
{
	translate([LM8UULinearBearingDiam()/2.67+PlasticWidth()+GenericDriveBeltAvgHeight(),PlasticWidth()/2,0])
	{
		cube([PlasticWidth(), LM8UULinearBearingDiam(), SliderHeight()*2/3]);
	}
	translate([LM8UULinearBearingDiam()/2.67+PlasticWidth()+GenericDriveBeltAvgHeight(),PlasticWidth()/2,SliderHeight()*2/3+GenericDriveBeltGripHeight()])
	{
		cube([PlasticWidth(), LM8UULinearBearingDiam(), SliderHeight()*1/6-GenericDriveBeltGripHeight()]);
	}
		translate([LM8UULinearBearingDiam()/2.67+PlasticWidth()+GenericDriveBeltAvgHeight(),PlasticWidth()/2,SliderHeight()*5/6+GenericDriveBeltGripHeight()])
	{
		cube([PlasticWidth(), LM8UULinearBearingDiam(), SliderHeight()*1/6-GenericDriveBeltGripHeight()]);
	}
	translate([ZrodSpacing()/2-LM8UULinearBearingDiam()/2.67-PlasticWidth()*3.5,PlasticWidth()/2,0])
	{
		cube([PlasticWidth()*1.5, LM8UULinearBearingDiam()-GenericDriveBeltWidth(), SliderHeight()]);
	}
}





module SliderBase()
{
	union()
	{
		translate([LM8UULinearBearingDiam()/2,PlasticWidth()/2-GripWidth(),0])
		{
			cube([ZrodSpacing()-LM8UULinearBearingDiam(),GripWidth(),SliderHeight()]);
		}
		translate([0,PlasticWidth()/2,0])
		{
		LinearBearingGrip();				
		}
		translate([ZrodSpacing(),PlasticWidth()/2,0])
		{
			mirror([1,0,0])
			{
				LinearBearingGrip();
			}				
		}
	}
}

module Flare()
{
	translate([-LM8UULinearBearingDiam()/2-FlareLength()-PlasticWidth()/2,-GripWidth()*1.5,0])
	{
		cube([FlareLength()+PlasticWidth()/2,GripWidth()*2,SliderHeight()]);
	}
}




//%cube(size=[RodEndSpacing(), RodEndSpacing(), 20,], center=true);


module Slider()
{
	union()
	{
		SliderBase();			
		Flare();
		mirror([1,0,0])
		{
			translate([-ZrodSpacing(),0,0])
			{
				Flare();
			}
		}
		BeltClip();
	}
}

Slider();
