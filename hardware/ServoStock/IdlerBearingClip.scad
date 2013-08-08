use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>


function SideWidth()= (PulleyInnerDiam()-608BallBearingDiam(.04))/2;

function BearingClipDiam()= 608BallBearingDiam(.04)+ SideWidth()*2;

echo(BearingClipDiam());
echo(SideWidth());


module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(h=GenericDriveBeltWidth()+SideWidth(), r=608BallBearingDiam()/2);
			cylinder(h=SideWidth(), r=PulleyInnerDiam()/2+SideWidth());
			translate([0,0,GenericDriveBeltWidth()+SideWidth()])
			{
				cylinder(h=BearingPlasticWidth(), r=PulleyInnerDiam()/2+SideWidth());
			}
		}
		union()
		{
			translate([0,0,SideWidth()/2])
			{
				cylinder(h=GenericDriveBeltWidth()+SideWidth()+1, r=608BallBearingDiam(.04)/2);
			}
			translate([0,0,-1])
			{
				cylinder(h=GenericDriveBeltWidth()+SideWidth()+2, r=608BallBearingDiam(.04)/2-SideWidth());		
			}		
		}
	}
}



IdlerBearingClip();