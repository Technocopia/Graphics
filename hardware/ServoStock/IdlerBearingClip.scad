use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>


function SideWidth()= (PulleyInnerDiam()-608BallBearingDiam(.08))/2;

function BearingClipDiam()= 608BallBearingDiam(.08)+ SideWidth()*2;

echo(BearingClipDiam());
echo(SideWidth());

$fn=100;

module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(h=GenericDriveBeltWidth(.8)+SideWidth(), r=BearingClipDiam()/2);
			cylinder(h=SideWidth(), r=PulleyInnerDiam()/2+SideWidth());
			translate([0,0,GenericDriveBeltWidth(.8)+SideWidth()])
			{
				cylinder(h=SideWidth(), r=PulleyInnerDiam()/2+SideWidth());
			}
		}
		union()
		{
			translate([0,0,SideWidth()])
			{
				cylinder(h=GenericDriveBeltWidth(.8)+SideWidth()+1, r=608BallBearingDiam(.08)/2);
			}
			translate([0,0,-1])
			{
				cylinder(h=GenericDriveBeltWidth(.8)+SideWidth()+2, r=608BallBearingDiam(.08)/2-SideWidth());		
			}		
		}
	}
}



IdlerBearingClip();