use <Vitamins/BallBearing.scad>
use <Vitamins/DriveBelt.scad>

//when you create a not bearing dependent equivalent to plasticwidth, might want to use it here

function BearingPlasticWidth()= BallBearingHeight()/2;


module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(DriveBeltWidth()+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth()/2, BallBearingDiam()/2+BearingPlasticWidth()/2);
			cylinder(BearingPlasticWidth()/2, BallBearingDiam()/2+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth());
			translate([0,0,DriveBeltWidth()+BearingPlasticWidth()])
			{
				cylinder(BearingPlasticWidth()/2, BallBearingDiam()/2+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth());
			}
		}
		union()
		{
			translate([0,0,BearingPlasticWidth()/2])
			{
				cylinder(DriveBeltWidth()+BearingPlasticWidth()+1, BallBearingPressFitDiam()/2, BallBearingPressFitDiam()/2);
			}
			translate([0,0,-1])
			{
				cylinder(DriveBeltWidth()+BearingPlasticWidth()+2, BallBearingPressFitDiam()/2-BearingPlasticWidth()/4, BallBearingPressFitDiam()/2-BearingPlasticWidth()/4);		
			}		
		}
	}
}



IdlerBearingClip();