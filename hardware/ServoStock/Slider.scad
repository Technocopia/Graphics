use <Parameters.scad>
use <../Vitamins/Structural/LinearBearings/LM8UU_Linear_Bearing_Vitamin.scad>
use <../Vitamins/Fasteners/ScrewsAsBolts/High_Low_Screw_As_Bolt_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/OneFifthinXLTimingBelt.scad>
use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>
use <../Vitamins/Structural/RodEnds/RodEnd_Vitamin.scad>

use <RodEndClips.scad>
use <Pulley.scad>

function BearingGripDiam()= LM8UULinearBearingDiam()+PlasticWidth()*2;
function SliderHeight()= LM8UULinearBearingHeight()-.01;
function GripWidth()= PlasticWidth();
function FlareLength()= (RodEndSpacing()-ZrodSpacing())/2-(LM8UULinearBearingDiam())/2-PlasticWidth()+RodEndClipWidth()/2-3dPrinterTolerance()/2;

function BeltClipLength()=StandardServoCylinderHeight()+PulleyBeltOffset()+2XLBeltWidth();

$fn=100;

module TaperedCylinder()
{
	cylinder(LM8UULinearBearingRidgeOffset()+2, LM8UULinearBearingDiam()/2.2, LM8UULinearBearingDiam()/1.9);	
}

//MINOR ADJUSTMENT THAT I DON'T HAVE TIME TO MAKE.
	//DO YOU SEE THE HILO BOLTS GOING INTO THE BEARING GRIPS? SEE THE ONE ON THE SIDE WITH THE BELT GRIP? IT NEEDS A SMALL HOLE TO ACCOMODATE IT IN THE BELT GRIP BECAUSE AS OF RIGHT NOW IT ONLY CUTS THROUGH THE BEARING PART, AND AS YOU CAN SEE ON THE OTHER SIDE THEY STICK OUT A LITTLE BIT BEYOND THAT, SO THERE NEEDS TO BE A HOLE IN THE SIDE OF THE BELT GRIP TOO

module LinearBearingGrip(Style=2)
{
	union()
	{
		difference()
		{
			cylinder(SliderHeight(), BearingGripDiam()/2, BearingGripDiam()/2);
			translate([0,0,LM8UULinearBearingRidgeOffset()])
			{
				cylinder(h=LM8UULinearBearingHeight()-LM8UULinearBearingRidgeOffset()*2+1, r=LM8UULinearBearingDiam()/2);
			}
			translate([0,0,LM8UULinearBearingHeight()-LM8UULinearBearingRidgeOffset()])
			{
				TaperedCylinder();
			}
			translate([0,0,LM8UULinearBearingRidgeOffset()+1])
			{
				mirror([0,0,1])
				{
					TaperedCylinder();
				}
			}
			if(Style==3)
			{
					translate([-BearingGripDiam()/2+LM8UULinearBearingDiam()/4+PlasticWidth()*1.25,LM8UULinearBearingDiam()/3,-1])
				{
					cube([LM8UULinearBearingDiam()-PlasticWidth()*2.5, LM8UULinearBearingDiam(), SliderHeight()+2]);
				}
					
			}else{
					translate([-BearingGripDiam()/2+LM8UULinearBearingDiam()/4+PlasticWidth()/2,LM8UULinearBearingDiam()/3,-1])
				{
					cube([LM8UULinearBearingDiam()-PlasticWidth(), LM8UULinearBearingDiam(), SliderHeight()+2]);
				}
			
			}
		}
	if(Style==1)
	{
		difference()
		{
			union()
			{
				translate([LM8UULinearBearingDiam()/2.7-3dPrinterTolerance()/2,LM8UULinearBearingDiam()/3,0])
				{
					cube([PlasticWidth(), LM8UULinearBearingDiam()/2, SliderHeight()]);
				}
				translate([LM8UULinearBearingDiam()/2.7-3dPrinterTolerance()/2-PlasticWidth(),LM8UULinearBearingDiam()/3+LM8UULinearBearingDiam()/4,0])
				{
					cube([PlasticWidth(), LM8UULinearBearingDiam()/1.2, SliderHeight()]);
				}
				translate([-LM8UULinearBearingDiam()/2.7-PlasticWidth(),LM8UULinearBearingDiam()/3,0])
				{
					cube([PlasticWidth(), LM8UULinearBearingDiam()/2, SliderHeight()]);
				}
				translate([-LM8UULinearBearingDiam()/2.7,LM8UULinearBearingDiam()/3+LM8UULinearBearingDiam()/4,0])
				{
					cube([PlasticWidth(), LM8UULinearBearingDiam()/1.2, SliderHeight()]);
				}
			}
			translate([LM8UULinearBearingDiam()-HiLoBoltLength(), LM8UULinearBearingDiam()/1.2+PlasticWidth(),SliderHeight()/2])
			{
				rotate([0,-90,0])
				{
					HiLoBolt(.3);
				}
			}
		}
		}else{}
	
}
}

//THIS GOT A LITTLE WEIRD AND KLUDGY

module BeltClip(HiLo=false, Style=2)
{
	translate([-PulleyInnerDiam()/2-2XLBeltGripHeight()/2,BeltClipLength()/2,SliderHeight()/2])
	{
		union()
		{
			difference()
			{	
				if(HiLo==true)
				{
					translate([0,BeltClipLength()*.15,0])
					{
						cube([2XLBeltGripHeight()*3.5, BeltClipLength()*1.3, SliderHeight()], center=true);
					}
				}else{
					{
						cube([2XLBeltGripHeight()*3.5, BeltClipLength(), SliderHeight()], center=true);
					}
				}
				if(Style==1)
				{
					translate([-HiLoBoltLength()-1,LM8UULinearBearingDiam()/2.4,0])
					{
						rotate([0,-90,0])
						{
							HiLoBolt(.4, HiLoBoltLength());
						}
					}
				}else{}
				translate([0,BeltClipLength()/2-2XLBeltSlotWidth()+.12,SliderHeight()+1])
				{
					rotate([0,90,0])
					{
						2XLTimingBeltSlot();
					}
				}
				if(HiLo==true)
				{
					translate([-2XLBeltGripHeight()*2,BeltClipLength()*.65,0])
					{
						rotate([0,-90,0])
						{
							HiLoBolt();
						}
					}
				}else{}
			}
		}
	}
}





module SliderBase(Style=2)
{
	union()
	{
		translate([LM8UULinearBearingDiam()/2+1,PlasticWidth()/2-GripWidth(),0])
		{
			cube([ZrodSpacing()-LM8UULinearBearingDiam()-2,GripWidth(),SliderHeight()]);
		}
		translate([0,PlasticWidth()/2,0])
		{
		LinearBearingGrip(Style);				
		}
		translate([ZrodSpacing(),PlasticWidth()/2,0])
		{
			mirror([1,0,0])
			{
				LinearBearingGrip(Style);
			}				
		}
	}
}

module Flare()
{
	translate([-LM8UULinearBearingDiam()/2-FlareLength()-PlasticWidth()/2-1,-PlasticWidth()/2,0])
	{
		cube([FlareLength()+PlasticWidth()/2,PlasticWidth()*1.5,RodEndTopWidth()]);
	}
}




//%cube(size=[RodEndSpacing(), RodEndSpacing(), 20,], center=true);


module Slider(HiLo=false, Style=2)
{
	union()
	{
		translate([-ZrodSpacing()/2,-PlasticWidth()/2,0])
		{
			SliderBase(Style);			
			Flare();
			mirror([1,0,0])
			{
				translate([-ZrodSpacing(),0,0])
				{
					Flare();
				}
			}
		}
	BeltClip(HiLo, Style);
	translate([0,-PlasticWidth(),0])
	{
		RodEndClips();
	}
	}
}

Slider(false, 1);

//to check if pulley lines up
//use <../Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>
//translate([0,StandardServoCylinderHeight(),0])
//	rotate([-90,0,0])
//		{
//		servo_pulley(true);
//		}
