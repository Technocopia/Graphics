use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>

//when you create a not bearing dependent equivalent to plasticwidth, might want to use it here

function BearingPlasticWidth()= 608BallBearingHeight()/2;


module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(GenericDriveBeltWidth()+BearingPlasticWidth(), 608BallBearingDiam()/2+BearingPlasticWidth()/2, 608BallBearingDiam()/2+BearingPlasticWidth()/2);
			cylinder(BearingPlasticWidth()/2, 608BallBearingDiam()/2+BearingPlasticWidth(), 608BallBearingDiam()/2+BearingPlasticWidth());
			translate([0,0,GenericDriveBeltWidth()+BearingPlasticWidth()])
			{
				cylinder(BearingPlasticWidth()/2, 608BallBearingDiam()/2+BearingPlasticWidth(), 608BallBearingDiam()/2+BearingPlasticWidth());
			}
		}
		union()
		{
			translate([0,0,BearingPlasticWidth()/2])
			{
				cylinder(GenericDriveBeltWidth()+BearingPlasticWidth()+1, 608BallBearingDiam()/2, 608BallBearingDiam()/2);
			}
			translate([0,0,-1])
			{
				cylinder(GenericDriveBeltWidth()+BearingPlasticWidth()+2, 608BallBearingDiam()/2-BearingPlasticWidth()/4, 608BallBearingDiam()/2-BearingPlasticWidth()/4);		
			}		
		}
	}
}



IdlerBearingClip();