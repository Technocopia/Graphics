use <../Tolerance.scad>
use <../Parameters.scad>
use <../Slider.scad>
use <BallBearing.scad>
use <PlasticScrew.scad>

module BearingCap()
{
	union()
	{
		difference()
		{
			union()
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance(), PlasticWidth()*2+3dPrinterTolerance(), SliderHeight()+PlasticWidth()+3dPrinterTolerance()]);
				translate([0,PlasticWidth()*2,0])
				{
					cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance(), PlasticWidth()*2+3dPrinterTolerance(),PlasticWidth()+3dPrinterTolerance()]);
				}
				translate([0,PlasticWidth()*2,PlasticWidth()])
				{
					cube([BallBearingHeight()+3dPrinterTolerance()+PlasticWidth(), PlasticWidth()*2+3dPrinterTolerance(),PlasticWidth()*2+3dPrinterTolerance()]);
				}
				translate([0,-BallBearingHeight()/2,PlasticWidth()*.25])
				{
					cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance(), BallBearingDiam()/4+PlasticWidth()*2+3dPrinterTolerance(),BallBearingDiam()+PlasticWidth()*2+3dPrinterTolerance()]);
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