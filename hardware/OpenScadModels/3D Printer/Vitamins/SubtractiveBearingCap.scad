use <../parameters.scad>
use <../StructuralFeet.scad>
use <PlasticScrew.scad>
use <BallBearing.scad>

module SubtractiveBearingCap()
{
	rotate([0,180,0])
	{
		difference()
		{
			translate([0,-EncoderMountWidth()/2,-(BallBearingHeight()+PlasticWidth())])
			{
				union()
				{
					difference()
					{	
						cube([EncoderShelfWidth()-PlasticWidth()+1,EncoderMountWidth()+1,BallBearingDiam()+PlasticWidth()/2]);
						translate([-1,-PlasticWidth(), -BallBearingDiam()/2])
						{
							cube([EncoderShelfWidth()-PlasticWidth()+2,EncoderMountWidth(),BallBearingDiam()]);
						}
						translate([-1,PlasticWidth()*2+1,PlasticWidth()])	
						{
							cube([EncoderShelfWidth()-PlasticWidth()*2,EncoderMountWidth()-PlasticWidth()*2,BallBearingDiam()/2-PlasticWidth()*2]);
						}
	//screwhole
						translate([(EncoderShelfWidth()-PlasticWidth())/2, PlasticWidth(), BallBearingDiam()/2 +PlasticWidth()+2])
						{
							cylinder(BallBearingDiam()/2-PlasticWidth()+1, ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
						}
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
}

SubtractiveBearingCap();