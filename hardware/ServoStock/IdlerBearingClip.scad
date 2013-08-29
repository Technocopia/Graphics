use <../Vitamins/Structural/SealedBearings/SealedBearing608_Vitamin.scad>
use <../Vitamins/Kinematics/Belts/Generic_Drive_Belt_Vitamin.scad>
use <../Vitamins/Kinematics/Pulleys/Pulley_Vitamin.scad>


function BearingClipSideWidth()= (PulleyInnerDiam()-608BallBearingDiam(.3))/2;

function BearingClipDiam()= 608BallBearingDiam(.3)+ BearingClipSideWidth()*2;

echo(BearingClipDiam());
echo(BearingClipSideWidth());

$fn=100;

module IdlerBearingClip()
{
	difference()
	{
		union()
		{
			cylinder(h=GenericDriveBeltWidth(.8)+BearingClipSideWidth(), r=BearingClipDiam()/2);
			cylinder(h=BearingClipSideWidth(), r=PulleyInnerDiam()/2+BearingClipSideWidth());
			translate([0,0,GenericDriveBeltWidth(.8)+BearingClipSideWidth()])
			{
				cylinder(h=BearingClipSideWidth(), r=PulleyInnerDiam()/2+BearingClipSideWidth());
			}
		}
		union()
		{
			translate([0,0,BearingClipSideWidth()])
			{
				cylinder(h=GenericDriveBeltWidth(.8)+BearingClipSideWidth()+1, r=608BallBearingDiam(.3)/2);
			}
			translate([0,0,-1])
			{
				cylinder(h=GenericDriveBeltWidth(.8)+BearingClipSideWidth()+2, r=608BallBearingDiam(.3)/2-BearingClipSideWidth());		
			}		
		}
	}
}



IdlerBearingClip();