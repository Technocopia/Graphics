use <parameters.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/LargeBolts.scad>
use <Vitamins/ServoMotor.scad>
use <Clips.scad>


//note to self, this is how this part is oriented in rostock mini, but to me it makes more sense to flip the bolt round the other way so that the clips are facing inward (so they'd face out on the bottom and in on the top), I think this would make accessing the belt a lot easier, but maybe there's a reason it's like this so I'm leaving it as-is for now.

//if anyone ever wants to change it back just swap the cylinder from 90 to -90, remove the plasticwidth() from its translate, change the bolt round to -90, and make its translate just -boltheadheight()/2-BallBearingHeight()-Plasticwidth() for the first term.


//This makes the structual bearing mount, in its entirety
module StructuralBearingMount()
{
	difference()
	{
		union()
		{
			Clips(Top());

	//This adds the cylindrical peice, which itself maintains friction against the inside of the bearing allowing the outside to spin
			translate([PlasticWidth(),0,BearingBracketHeight()/2])
			{
				rotate([0,90,0])
				{
					cylinder(MotorOutcrop(), BearingBracketHeight()/2, (BallBearingDiam()-BallBearingInnerDiam())/2);
				}
			}
			
		}	
	//this cuts the bolthole out of the mount
		translate([BoltHeadHeight()/2+BallBearingHeight()+PlasticWidth()+ MotorOutcrop(),0,BearingBracketHeight()/2])
		{
			rotate([0,90,0])
			{
				LargeBolt();
			}
		}
	}
}


StructuralBearingMount();