use <Parameters.scad>
use <../Vitamins/Structural/RodEnds/RodEnd_Vitamin.scad>

function RodEndClipWidth()=RodEndBallSwivelFlangeHeight()*2;

module RodEndClip()
{
	rotate([0,180,90])
	{
		difference()
		{
			cube([RodEndClipWidth(), RodEndTopWidth(),  RodEndTopWidth()], center=true);
			translate([RodEndRodInset()*1.1,0,0])
			{
				union()
				{
				#RodEnd();
				RodEndSlot();
				}
			}
		}
	}
}

//RodEndClip();

module RodEndClips()
{
	translate([-RodEndSpacing()/2,-RodEndClipWidth()/2,RodEndTopWidth()/2])
	{
		union()
		{
			RodEndClip();
			rotate([0,0,0])
			{
				translate([RodEndSpacing(),0,0])
				{
					RodEndClip();
					
				}
			}	
		}
	}
}

RodEndClips();