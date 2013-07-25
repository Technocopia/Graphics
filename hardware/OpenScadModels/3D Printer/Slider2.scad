use <Parameters.scad>
use <Vitamins/SubtractiveSlidingBearingCap2.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/LinearBearing.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/ZipTie.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/Pully.scad>
use <Vitamins/DriveBelt.scad>

function BearingGripDiam()= LinearBearingDiam()+PlasticWidth()*2;
function SliderHeight()= LinearBearingHeight()+PlasticWidth()*2;
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
				#LinearBearing();
			}
			translate([0,0,-1])
			{
			cylinder(SliderHeight()+2, LinearBearingDiam()/2.2, LinearBearingDiam()/2.2);
			}
			translate([-BearingGripDiam()/2+LinearBearingDiam()/4,LinearBearingDiam()/3,-1])
			{
				cube([LinearBearingDiam(), LinearBearingDiam(), SliderHeight()+2]);
			}
		}
	difference()
	{
		union()
		{
			translate([LinearBearingDiam()/2.67,LinearBearingDiam()/3,0])
			{
				cube([PlasticWidth(), LinearBearingDiam()/1.2, SliderHeight()]);
			}
			translate([-LinearBearingDiam()/1.55,LinearBearingDiam()/3,0])
			{
				cube([PlasticWidth(), LinearBearingDiam()/1.2, SliderHeight()]);
			}
		}
		translate([LinearBearingDiam()-PlasticWidth()-BoltLength(), LinearBearingDiam()/2+PlasticWidth(),SliderHeight()/2])
		{
			rotate([0,-90,0])
			{
				#SmallBolt();
			}
		}
	}
	}
}

module BeltClip()
{
	translate([LinearBearingDiam()/2.67+PlasticWidth()+DriveBeltAvgHeight(),PlasticWidth()/2,0])
	{
		cube([PlasticWidth(), LinearBearingDiam(), SliderHeight()*2/3]);
	}
	translate([LinearBearingDiam()/2.67+PlasticWidth()+DriveBeltAvgHeight(),PlasticWidth()/2,SliderHeight()*2/3+DriveBeltGripHeight()])
	{
		cube([PlasticWidth(), LinearBearingDiam(), SliderHeight()*1/6-DriveBeltGripHeight()]);
	}
		translate([LinearBearingDiam()/2.67+PlasticWidth()+DriveBeltAvgHeight(),PlasticWidth()/2,SliderHeight()*5/6+DriveBeltGripHeight()])
	{
		cube([PlasticWidth(), LinearBearingDiam(), SliderHeight()*1/6-DriveBeltGripHeight()]);
	}
	translate([ZrodSpacing()/2-LinearBearingDiam()/2.67-PlasticWidth()*3.5,PlasticWidth()/2,0])
	{
		cube([PlasticWidth()*1.5, LinearBearingDiam()-DriveBeltWidth(), SliderHeight()]);
	}
}





module SliderBase()
{
	union()
	{
		translate([LinearBearingDiam()/2,PlasticWidth()/2-GripWidth(),0])
		{
			cube([ZrodSpacing()-LinearBearingDiam(),GripWidth(),SliderHeight()]);
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
	translate([-LinearBearingDiam()/2-FlareLength()-PlasticWidth()/2,-GripWidth()*1.5,0])
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
