use <Parameters.scad>
use <../Vitamins/Structural/RodEnds/RodEnd_Vitamin.scad>

function RodEndClipWidth()=RodEndBallSwivelFlangeHeight()*1.5;

module RodEndClip()
{
	rotate([0,180,90])
	{
		difference()
		{
			cube([RodEndClipWidth(), RodEndTopWidth(),  RodEndTopWidth()], center=true);
			translate([RodEndRodInset()/2,0,0])
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
			
			translate([RodEndSpacing(),0,0])
			{
				mirror([1,0,0])
				{
					RodEndClip();	
				}				
			}	
		}
	}
}

RodEndClips();