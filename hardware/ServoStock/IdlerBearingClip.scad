use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>

//when using the 608 ball bearing, outside 

function BearingPlasticWidth()= 608BallBearingHeight(.04)/2 -.5;

echo(608BallBearingDiam(.04)+BearingPlasticWidth());


module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(h=GenericDriveBeltWidth()+BearingPlasticWidth(), r=PulleyInnerDiam()/2);
			cylinder(h=BearingPlasticWidth()/2, r=PulleyInnerDiam()/2+BearingPlasticWidth()/2);
			translate([0,0,GenericDriveBeltWidth()+BearingPlasticWidth()])
			{
				cylinder(h=BearingPlasticWidth()/2, r=PulleyInnerDiam()/2+BearingPlasticWidth()/2);
			}
		}
		union()
		{
			translate([0,0,BearingPlasticWidth()/2])
			{
				cylinder(h=GenericDriveBeltWidth()+BearingPlasticWidth()+1, r=608BallBearingDiam(.04)/2);
			}
			translate([0,0,-1])
			{
				cylinder(h=GenericDriveBeltWidth()+BearingPlasticWidth()+2, r=608BallBearingDiam(.04)/2-BearingPlasticWidth()/2);		
			}		
		}
	}
}



IdlerBearingClip();