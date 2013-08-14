use <Parameters.scad>

use <../Vitamins/Sensors/Encoders/Encoder_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>

use <StructuralFeet.scad>	




module BearingCapFlare(SubtractiveBearingCapTolerance=0)
{
	translate([-EncoderShelfWidth()+PlasticWidth()*3-SubtractiveBearingCapTolerance/2,-EncoderMountWidth()/2-SubtractiveBearingCapTolerance/2,-PlasticWidth()*2-SubtractiveBearingCapTolerance/2])
		{
			cube([EncoderShelfWidth()-PlasticWidth()*3+SubtractiveBearingCapTolerance, PlasticWidth()+SubtractiveBearingCapTolerance, PlasticWidth()*2+SubtractiveBearingCapTolerance]);
		}
}




module BearingCap()
{
	difference()
	{
		union()
		{
			translate([-EncoderShelfWidth()+PlasticWidth()*3,-EncoderMountWidth()/2,0])
			{
				cube([EncoderShelfWidth()-PlasticWidth()*3, EncoderMountWidth(), EncoderHeight()+PlasticWidth()*2-EncoderMountHeight()]);
			}
		BearingCapFlare();
		mirror([0,1,0])
		{
			BearingCapFlare();
		}
		}
		union()
		{
			translate([-(EncoderShelfWidth())/2,0,0])
				{
					rotate([0,-90,0])
					{
						rotate([0,0,90])
						{
							Encoder_Keepaway();
						}
					}
				}
			translate([-PulleyHubHeight(),0,-.01])
			{
				rotate([0,0,180])
				{
					BearingCutout();
				}
			}
		}
	}
}



rotate([0,90,0])
{
	//BearingCap();
}

module SubtractiveBearingCap(SubtractiveBearingCapTolerance=2)
{
	union()
	{
		translate([-EncoderShelfWidth()+PlasticWidth()*3,-EncoderMountWidth()/2,0])
		{
			cube([EncoderShelfWidth()-PlasticWidth()*3, EncoderMountWidth(), EncoderHeight()+PlasticWidth()*2-EncoderMountHeight()]);
		}
	translate([SubtractiveBearingCapTolerance/2,SubtractiveBearingCapTolerance/2,-SubtractiveBearingCapTolerance/2])
		{
			BearingCapFlare(SubtractiveBearingCapTolerance);
		}
	translate([SubtractiveBearingCapTolerance/2,EncoderMountWidth()-PlasticWidth()-SubtractiveBearingCapTolerance/2,-SubtractiveBearingCapTolerance/2])
		{
			BearingCapFlare(SubtractiveBearingCapTolerance);
		}
		
	}	
}



SubtractiveBearingCap();