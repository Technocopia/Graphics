use <Parameters.scad>
use <Slider.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/PlasticScrew.scad>

module BearingCap()
{
	union()
	{
	difference()
	{
		union()
		{
			translate([0,0,1])
			{
				cube([BallBearingHeight()+PlasticWidth(), PlasticWidth(), SliderHeight()+PlasticWidth()]);
			}
			translate([0,PlasticWidth(),1])
			{
				cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2,PlasticWidth()]);
			}
			translate([0,-BallBearingHeight()/2,PlasticWidth()*.25])
			{
				cube([BallBearingHeight()+PlasticWidth(), BallBearingDiam()/4+PlasticWidth()*2,BallBearingDiam()+PlasticWidth()]);
			}
			translate([0,-PlasticWidth(),BallBearingDiam()/2+PlasticWidth()*1.25])
			{
				rotate([0,90,0])
				{
					cylinder(BallBearingHeight()+PlasticWidth(), BallBearingDiam()/2+PlasticWidth(), BallBearingDiam()/2+PlasticWidth());
				}
			}
		}
		translate([-1,-BallBearingHeight()/2,PlasticWidth()*1.25+1])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth(),BallBearingDiam()]);
			}
		translate([-1,-PlasticWidth(),SliderHeight()/2])
		{                                                                                                                                   
			rotate([0,90,0])
			{
				cylinder(BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2-PlasticWidth()/6, BallBearingDiam()/2-PlasticWidth()/6);
			}
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
				#screw();
			}
		}
	}
	translate([0,PlasticWidth()*2,PlasticWidth()])
			{
				#cube([BallBearingHeight()+PlasticWidth(), PlasticWidth(),PlasticWidth()*2]);
			}
}
}

BearingCap();