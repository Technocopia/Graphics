use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Fasteners/ScrewsAsBolts/High_Low_Screw_As_Bolt_Vitamin.scad>

function IdlerBearingPlugPlasticWidth()= 608BallBearingHeight()/4;


module IdlerBearingPlugBolt()
{
	HiLoBolt(.4,608BallBearingHeight()/3+IdlerBearingPlugPlasticWidth());
}


module IdlerBearingPlug()
{
	difference()
	{
		union()
		{
			cylinder(h=IdlerBearingPlugPlasticWidth(), r=608BallBearingAvgDiam()/2, $fn=30);
			cylinder(h=608BallBearingHeight()/2+IdlerBearingPlugPlasticWidth(), r=608BallBearingInnerDiam()/2, $fn=30);
		}
		translate([0,0,-1])
		{
			rotate([180,0,0])
			{
				IdlerBearingPlugBolt();
			}
		}
	}
}

IdlerBearingPlug();
