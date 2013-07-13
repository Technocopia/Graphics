use <parameters.scad>
use <StructuralFeet.scad>
use <Vitamins/PlasticScrew.scad>
use <Vitamins/BallBearing.scad>

module BearingCap()
{
	difference()
	{
		translate([PlasticWidth()/2,-EncoderMountWidth()/2,-(BallBearingHeight()+PlasticWidth())])
		{
			difference()
			{
				cube([EncoderShelfWidth()-PlasticWidth(),EncoderMountWidth(),BallBearingDiam()+PlasticWidth()/2]);
				translate([-1,-PlasticWidth(), -BallBearingDiam()/2])
				{
					cube([EncoderShelfWidth()-PlasticWidth()+2,EncoderMountWidth(),BallBearingDiam()]);
				}
				translate([-1,PlasticWidth()*2+1,PlasticWidth()/1.5])
				{
					cube([EncoderShelfWidth()-PlasticWidth()*2,EncoderMountWidth()-PlasticWidth()*2,PlasticWidth()]);
				}
	//screwhole
				translate([(EncoderShelfWidth()-PlasticWidth())/2, PlasticWidth(), BallBearingDiam()/2 +PlasticWidth()+2])
				{
					cylinder(BallBearingDiam()/2-PlasticWidth()+1, ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
				}
				translate([(EncoderShelfWidth()-PlasticWidth())/2,PlasticWidth(),BallBearingDiam()/2 +PlasticWidth()+3])
				{
					screw();
				}
			}
		}
		translate([PlasticWidth()/2, 0, 0])		
		{
			rotate([0,90,0])
			{
				union()
				{
					translate([0,0,EncoderShelfWidth()-PlasticWidth()*2+1])
					{
						rotate([0,90,0])
						{
						BearingCutout();
						}
					}
				}				
			}
		}
	}
}

BearingCap();