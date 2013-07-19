use <../Tolerance.scad>
use <../Parameters.scad>
use <../Slider.scad>
use <../StructuralFeet2.scad>
use <BallBearing.scad>
use <PlasticScrew.scad>

//CHANGE PLASTICWIDTH TO BE A FUNCTION OF THE BEARING, NO REASON FOR IT TO BE RELATED TO THE RODS HERP







///this is identical to subtractive sliding bearing cap except that it's centered differently, make this into a boolean at some point

$fn=100;


module BearingCap()
{

//////////////////////////////THE ONLY DIFFERENCE IS HERE
translate([-PlasticWidth()/2-BallBearingHeight()/2,-1-PlasticWidth()*1.25-BallBearingDiam()/2,-PlasticWidth()])
{
	rotate([-90,0,0])
	{



union()
	{
	difference()
	{
		union()
		{
			translate([-3dPrinterTolerance()*2,0,1-3dPrinterTolerance()*2])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*4, PlasticWidth()+3dPrinterTolerance()*4, SliderHeight()+PlasticWidth()+3dPrinterTolerance()*4]);
			}
			translate([-3dPrinterTolerance()*2,PlasticWidth()+3dPrinterTolerance(),3dPrinterTolerance()])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*4, PlasticWidth()*2+3dPrinterTolerance(),PlasticWidth()+3dPrinterTolerance()*4+PlasticWidth()]);
			}
			translate([-3dPrinterTolerance()*2,-BallBearingHeight()/2,PlasticWidth()*.25-3dPrinterTolerance()*2])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*4, BallBearingDiam()/4+PlasticWidth()*2,BallBearingDiam()+PlasticWidth()]);
			}
			translate([-3dPrinterTolerance()*2,-PlasticWidth(),BallBearingDiam()/2+PlasticWidth()*1.25])
			{
				rotate([0,90,0])
				{
					cylinder(BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*4, BallBearingDiam()/2+PlasticWidth()+3dPrinterTolerance()*2, BallBearingDiam()/2+PlasticWidth()+3dPrinterTolerance()*2);
				}
			}
		}
		translate([-1,-BallBearingHeight()/2,PlasticWidth()*1.25+1+3dPrinterTolerance()])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth()*2,BallBearingDiam()-PlasticWidth()/4-3dPrinterTolerance()-1]);
			}
	translate([-1,-BallBearingHeight()/2+PlasticWidth()*2-1+3dPrinterTolerance()*3,BallBearingDiam()])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth(),BallBearingDiam()-PlasticWidth()/4-1]);
			}
		translate([-1,-BallBearingDiam()/2,-PlasticWidth()+3dPrinterTolerance()])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()+PlasticWidth(),PlasticWidth()]);
			}
		translate([-1,-PlasticWidth(),SliderHeight()/2])
		{                                                                                                                                   
			rotate([0,90,0])
			{
				cylinder(BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2-PlasticWidth()/6, BallBearingDiam()/2-PlasticWidth()/6);
			}
		}
	}
	translate([-3dPrinterTolerance()*2,PlasticWidth()*2-3dPrinterTolerance()*2,PlasticWidth()-3dPrinterTolerance()])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*4, PlasticWidth()+3dPrinterTolerance()*4,PlasticWidth()*2+3dPrinterTolerance()*4]);
			}
			translate([PlasticWidth()/2,-BallBearingDiam()/2+PlasticWidth(),SliderHeight()/2])
		{
			rotate([0,90,0])
			{
				BallBearing();
			}
		}
translate([PlasticWidth()/2+ScrewHeadDiameter()/2,-1, SliderHeight()+PlasticWidth()/4])
		{
			rotate([90,0,0])
			{
				union()
				{
					screw();
					cylinder(BallBearingDiam()/2, ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
				}
			}
		}

}
}
}
}

//rotate([0,90,0])
//%BallBearing();

BearingCap();


module FootBearingSlot()
{
	union()
	{
		#BearingCap();
		translate([-EncoderShelfDistance()+3dPrinterTolerance()*2,BallBearingDiam()/2-3dPrinterTolerance()*2,-BallBearingDiam()/2+PlasticWidth()/2])
		{
//if you start changing plasticwidth to another constant, DON'T change this one!
			cube([BallBearingHeight()/2+PlasticWidth()/2+EncoderShelfDistance(),BallBearingDiam()/2, PlasticWidth()+3dPrinterTolerance()*4]);
		}
		translate([-EncoderShelfDistance(),-BallBearingDiam()/2-PlasticWidth()/2,-PlasticWidth()])
		{
//if you start changing plasticwidth to another constant, DON'T change this one!
			cube([EncoderShelfDistance(),BallBearingDiam()+PlasticWidth(),BallBearingDiam()]);
		}
///	THIS IS SO STUPID KLUDGED FIX IT ASAP
		translate([-.2,BallBearingDiam()-5.9,-5])
		#cylinder(BallBearingDiam()/2, ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
				
	}
}

FootBearingSlot();

























		