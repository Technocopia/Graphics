use <Parameters.scad>
use <Vitamins/SubtractiveSlidingBearingCap2.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/LinearBearing.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/ZipTie.scad>

function BearingGripDiam()= LinearBearingDiam()+PlasticWidth()*2;
function SliderHeight()= LinearBearingHeight()+PlasticWidth()*2;
function GripWidth()= PlasticWidth();
function FlareLength()= (ZBearingSpacing()-ZrodSpacing())/2; 
function FlareWidth()= BallBearingDiam()/2-PlasticWidth();

$fn=100;

module LinearBearingGrip()
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
	translate([-LinearBearingDiam()/2-FlareLength()-PlasticWidth()/2,-GripWidth()*1.5,0])
		{
			difference()
			{
				cube([FlareLength()+PlasticWidth()/2,GripWidth()*2,SliderHeight()]);
				translate([FlareLength()/2-PlasticWidth()/2,0,0])
				{
					//BearingCap();
					SlidingBearingCapSlot();
				}
			}
		}
}

//module BearingCap()
//{
//	translate([-(PlasticWidth()+BallBearingHeight())/2-ZBearingSpacing()/2,-PlasticWidth()*2, -PlasticWidth()])
//	{
//		difference()
//		{
//			union()
//			{
//				cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2, SliderHeight()+PlasticWidth()]);
//				translate([0,PlasticWidth()*2,0])
//				{
//					cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2,PlasticWidth()]);
//				}
//				translate([0,PlasticWidth()*2,PlasticWidth()])
//				{
//					cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2,PlasticWidth()*2]);
//				}
//				translate([0,-BallBearingHeight()/2,PlasticWidth()*.75])
//				{
//					cube([BallBearingHeight()+PlasticWidth(), BallBearingDiam()/4+PlasticWidth()*2,BallBearingDiam()+PlasticWidth()]);
//				}
//				translate([0,-PlasticWidth(),BallBearingDiam()/2+PlasticWidth()*1.25])
//				{
//					rotate([0,90,0])
//					{
//						cylinder(BallBearingHeight()+PlasticWidth(), BallBearingDiam()/2+PlasticWidth()/2, BallBearingDiam()/2+PlasticWidth()/2);
//					}
//				}
//			}
//			translate([-1,-BallBearingHeight()/2,PlasticWidth()*1.25])
//				{
//					cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/4+PlasticWidth()*2,BallBearingDiam()]);
//				}
//			translate([-1,-PlasticWidth(),SliderHeight()/2])
//			{                                                                                                                                   
//				rotate([0,90,0])
//				{
//					#cylinder(BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2-PlasticWidth()/6, BallBearingDiam()/2-PlasticWidth()/6);
//				}
//			}
//		}
//	}
//}

//BearingCap();

module ZipTieHoles()
{
	union()
	{
		translate([LinearBearingDiam()-PlasticWidth()/4,-GripWidth()*2-1,PlasticWidth()+LinearBearingRidgeOffset()-ZipTieHeight()])
		{
			ZipTie();
		}
		translate([LinearBearingDiam()-PlasticWidth()/4,-GripWidth()*2-1,SliderHeight()-(PlasticWidth()+LinearBearingRidgeOffset())-ZipTieHeight()])
		{
			ZipTie();
		}
		translate([-LinearBearingDiam()+PlasticWidth()/4,-GripWidth()*2-1,PlasticWidth()+LinearBearingRidgeOffset()-ZipTieHeight()])
		{
			ZipTie();
		}
		translate([-LinearBearingDiam()+PlasticWidth()/4,-GripWidth()*2-1,SliderHeight()-(PlasticWidth()+LinearBearingRidgeOffset())-ZipTieHeight()])
		{
			ZipTie();
		}
	}
}




//%cube(size=[ZBearingSpacing(), ZBearingSpacing(), 20,], center=true);


module Slider()
{
	difference()
	{
		union()
		{
			SliderBase();
			ZipTieHoles();			
			Flare();
			mirror([1,0,0])
			{
				translate([-ZrodSpacing(),0,0])
				{
					Flare();
				}
			}
		}
	ZipTieHoles();
	translate([ZrodSpacing()-ZipTieWidth()/2,0,0])
	{
		ZipTieHoles();
	}
	
	

	}
	
}

translate([-ZrodSpacing()/2,0,0])
Slider();
