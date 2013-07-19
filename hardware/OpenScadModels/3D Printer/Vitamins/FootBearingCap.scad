use <../Parameters.scad>
use <../Slider.scad>
use <BallBearing.scad>
use <PlasticScrew.scad>


///this is identical to subtractive sliding bearing cap except that it's centered differently, make this into a boolean at some point

module RawBearingCap()
{
	union()
	{
		difference()
		{
			union()
			{
				translate([0,0,1])
				{
					cube([BallBearingHeight()+PlasticWidth(), PlasticWidth(), SliderHeight()+PlasticWidth()]);
				}
				translate([0,PlasticWidth(),1])
				{
					cube([BallBearingHeight()+PlasticWidth(), PlasticWidth()*2,PlasticWidth()]);
				}
				translate([0,-BallBearingHeight()/2,PlasticWidth()*.25])
				{
					cube([BallBearingHeight()+PlasticWidth(), BallBearingDiam()/4+PlasticWidth()*2,BallBearingDiam()+PlasticWidth()]);
				}
				translate([0,-PlasticWidth(),BallBearingDiam()/2+PlasticWidth()*1.25])
				{
					rotate([0,90,0])
					{
						cylinder(BallBearingHeight()+PlasticWidth(), BallBearingDiam()/2+PlasticWidth(), BallBearingDiam()/2+PlasticWidth());
					}
				}
			}
			translate([-1,-BallBearingHeight()/2,PlasticWidth()*1.25+1])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth(),BallBearingDiam()-PlasticWidth()/4-1]);
			}
			translate([-1,-BallBearingHeight()/2+PlasticWidth()*2-1,BallBearingDiam()])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth(),BallBearingDiam()-PlasticWidth()/4-1]);
			}
			translate([-1,-PlasticWidth(),SliderHeight()/2])
			{                                                                                                                                   
				rotate([0,90,0])
				{
					cylinder(BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2-PlasticWidth()/6, BallBearingDiam()/2-PlasticWidth()/6);
				}
			}
		}
		translate([0,PlasticWidth()*2,PlasticWidth()])
		{
			cube([BallBearingHeight()+PlasticWidth(), PlasticWidth(),PlasticWidth()*2]);
		}
			
	}
}

module UnPositionedBearingCap()
{
	difference()
	{
		RawBearingCap();
		translate([PlasticWidth()/2,-BallBearingDiam()/2+PlasticWidth(),SliderHeight()/2])
		{
			rotate([0,90,0])
			{
				BallBearing();
			}
		}
		translate([PlasticWidth()/2+ScrewHeadDiameter()/2,-1, SliderHeight()+PlasticWidth()/4])
		{
			rotate([90,0,0])
			{
				union()
				{
					screw();
					cylinder(BallBearingDiam()/2, ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
				}
			}
		}
	}
}



//rotate([0,90,0])
//%BallBearing();

module BearingCap(Print=true,Foot=true)
{
	if(Print==true)
	{
		translate([-BallBearingDiam()/2-PlasticWidth(),0,BallBearingHeight()+PlasticWidth()])
		{
			rotate([0,90,0])
				{
					UnPositionedBearingCap(true);
				}
		}
	}else{
			if(Foot==true)
			{
				translate([-PlasticWidth()/2-BallBearingHeight()/2,-1-PlasticWidth()*1.25-BallBearingDiam()/2,-PlasticWidth()])
				{
					rotate([-90,0,0])
					{
						UnPositionedBearingCap(false);
					}
				}
			}else{
					translate([-PlasticWidth()/2-BallBearingHeight()/2,-PlasticWidth()/2,-PlasticWidth()*1.25-1.5])
					{
						UnPositionedBearingCap(false);
					}
				}
			}
}

BearingCap(false, true);
