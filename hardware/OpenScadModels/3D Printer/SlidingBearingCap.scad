use <Parameters.scad>
use <Slider.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/PlasticScrew.scad>

module BearingCap()
{
	difference()
	{
		union()
		{
			cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2, SliderHeight()+PlasticWidth()]);
			translate([0,PlasticWidth()*2,0])
			{
				cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2,PlasticWidth()]);
			}
			translate([0,PlasticWidth()*2,PlasticWidth()])
			{
				cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2,PlasticWidth()*2]);
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
		translate([-1,-BallBearingHeight()/2,PlasticWidth()*1.25])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/4+PlasticWidth()*2+1,BallBearingDiam()]);
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
}

BearingCap();