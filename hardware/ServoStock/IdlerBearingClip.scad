use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>

//when using the 608 ball bearing, outside 

function BearingPlasticWidth()= (PulleyInnerDiam()-608BallBearingDiam(.04))/2;

function BearingClipDiam()= 608BallBearingDiam(.04)+ BearingPlasticWidth()*2;

echo(BearingClipDiam());
echo(BearingPlasticWidth());


module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(h=GenericDriveBeltWidth()+BearingPlasticWidth(), r=608BallBearingDiam()/2);
			cylinder(h=BearingPlasticWidth(), r=PulleyInnerDiam()/2+BearingPlasticWidth());
			translate([0,0,GenericDriveBeltWidth()+BearingPlasticWidth()])
			{
				cylinder(h=BearingPlasticWidth(), r=PulleyInnerDiam()/2+BearingPlasticWidth());
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
				cylinder(h=GenericDriveBeltWidth()+BearingPlasticWidth()+2, r=608BallBearingDiam(.04)/2-BearingPlasticWidth());		
			}		
		}
	}
}



IdlerBearingClip();