use <parameters.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/LinearBearing.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/ZipTie.scad>

function BearingGripDiam()= LinearBearingDiam()+PlasticWidth()*2;
function SliderHeight()= LinearBearingHeight()+PlasticWidth();
function GripWidth()= PlasticWidth();
function FlareLength()= (ZBearingSpacing()-ZrodSpacing())/2;
module LinearBearingGrip()
{
	difference()
	{
		cylinder(SliderHeight(), BearingGripDiam()/2, BearingGripDiam()/2);
		translate([0,0,PlasticWidth()+1])
		{
			LinearBearing();
		}
		translate([0,0,-1])
		{
			cylinder(SliderHeight()+1, LinearBearingDiam()/2.2, LinearBearingDiam()/2.2);
		}
		translate([-BearingGripDiam()/2,LinearBearingDiam()/6,-1])
		{
			cube([SliderHeight()+2, SliderHeight()+2, SliderHeight()+2]);
		}
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
		LinearBearingGrip();				
		}
	}
}

module Flare()
{
	translate([-LinearBearingDiam()/2-FlareLength()-PlasticWidth()/2,PlasticWidth()/2-GripWidth(),-SliderHeight()/4])
		{
			difference()
			{
				cube([FlareLength(),GripWidth()*2,SliderHeight()*1.5]);
				translate([PlasticWidth()*1.5,-BallBearingDiam()/2+PlasticWidth(),SliderHeight()*3/4])
				{
					rotate([0,90,0])
					{
						#BallBearing();
						}
					}
				}
		}
}



%cube(size=[ZBearingSpacing(), ZBearingSpacing(), 20,], center=true);


module Slider()
{
	union()
	{
		difference()
		{
			SliderBase();
			translate([LinearBearingDiam(),-GripWidth()-1,SliderHeight()/4])
			{
				ZipTie();
			}
			translate([LinearBearingDiam(),-GripWidth()-1,SliderHeight()*3/4])
			{
				ZipTie();
			}
			translate([ZrodSpacing()-LinearBearingDiam(),-GripWidth()-1,SliderHeight()/4])
			{
				ZipTie();
			}
			translate([ZrodSpacing()-LinearBearingDiam(),-GripWidth()-1,SliderHeight()*3/4])
			{
				ZipTie();
			}
		}
		Flare();
	}
}

translate([-ZrodSpacing()/2,0,0])
Slider();
