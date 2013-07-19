use <Vitamins/BallBearing.scad>

//when you create a not bearing dependent equivalent to plasticwidth, might want to use it here



function BearingPlasticWidth()=BallBearingHeight()/2;

module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(BallBearingHeight()+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth()/2, BallBearingDiam()/2+BearingPlasticWidth()/2);
			cylinder(BearingPlasticWidth()/2, BallBearingDiam()/2+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth());
			translate([0,0,BallBearingHeight()+BearingPlasticWidth()/2])
			{
				cylinder(BearingPlasticWidth()/2, BallBearingDiam()/2+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth());
			}
		}
	translate([0,0,-1])
	{
		cylinder(BallBearingHeight()+BearingPlasticWidth()*2+2, BallBearingDiam()/2, BallBearingDiam()/2);
	}
		
	}
}


IdlerBearingClip();