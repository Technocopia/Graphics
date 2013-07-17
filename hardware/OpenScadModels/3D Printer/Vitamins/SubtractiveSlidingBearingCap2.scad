//use <../Tolerance.scad>
use <../Parameters.scad>
use <../Slider.scad>
use <BallBearing.scad>
use <PlasticScrew.scad>

function BearingCapWidth() = BallBearingHeight()+PlasticWidth();
function BearingCapThickness() = PlasticWidth()*1.2;


module BearingCap()
{
	translate([-BallBearingHeight()/2-PlasticWidth()/2,-FlareWidth()-PlasticWidth()+BearingCapThickness()+1,-BearingCapThickness()-1])
	{

difference()
{
	
	union()
	{
		difference()
		{
			union()
			{
				cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*1.2, SliderHeight()+PlasticWidth()]);
				translate([0,PlasticWidth(),0])
				{
					cube([BearingCapWidth(), FlareWidth()*1.3,BearingCapThickness()]);
				}
				translate([0,-BallBearingHeight()/2,0])
				{
					cube([BearingCapWidth(), FlareWidth(),BearingCapThickness()]);
				}
				translate([0,-PlasticWidth(),BallBearingDiam()/2+PlasticWidth()])
				{
					rotate([0,90,0])
					{
						cylinder(BearingCapWidth(), BallBearingDiam()/2+BearingCapThickness(), BallBearingDiam()/2+BearingCapThickness());
					}
				}
			}
			translate([-1,-BallBearingHeight()/2,BearingCapThickness()+1])
				{
					cube([BearingCapWidth()+2,FlareWidth()+BallBearingDiam()/2,BallBearingDiam()-PlasticWidth()/3-1]);
				}
			translate([-1,-PlasticWidth(),SliderHeight()/2])
			{                                                                                                                                   
				rotate([0,90,0])
				{
					cylinder(BearingCapWidth()+2, BallBearingDiam()/2-PlasticWidth()/6, BallBearingDiam()/2-PlasticWidth()/6);
				}
			}
			
		}	
translate([0,FlareWidth()*.8,PlasticWidth()])
				{
					cube([BearingCapWidth(), BearingCapThickness()*1.5,BearingCapThickness()*2]);
				}
			translate([PlasticWidth()/2+ScrewHeadDiameter()/2,-1, SliderHeight()+PlasticWidth()/4])
			{
				rotate([90,0,0])
				{
					union()
					{
						%screw();
						cylinder(ScrewLength(), ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
					}
				}
			}
		translate([PlasticWidth()/2,-BallBearingDiam()/2+PlasticWidth(),SliderHeight()/2])
			{
				rotate([0,90,0])
				{
					BallBearing();
				}
			}
	}
translate([-1,FlareWidth()+PlasticWidth(),-1])
{
	cube([BearingCapWidth()+2,FlareWidth()+BallBearingDiam()/2,BallBearingDiam()-PlasticWidth()/3-1]);
}

translate([-1,FlareWidth()-PlasticWidth()*.8,BallBearingDiam()])
{
	cube([BearingCapWidth()+2,FlareWidth()+BallBearingDiam()/2,PlasticWidth()*2]);
}

}
}
}

BearingCap();