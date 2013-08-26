use <../Parameters.scad>
use <../Slider.scad>
use <BallBearing.scad>
use <PlasticScrew.scad>

function BearingPlasticWidth()= BallBearingHeight()*.6;
//PlasticWidth();


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
					cube([BallBearingHeight()+BearingPlasticWidth(), BearingPlasticWidth(), SliderHeight()+BearingPlasticWidth()]);
				}
				translate([0,BearingPlasticWidth(),1])
				{
					cube([BallBearingHeight()+BearingPlasticWidth(), BearingPlasticWidth()*2,BearingPlasticWidth()]);
				}
				translate([0,-BallBearingHeight()/2,BearingPlasticWidth()*.25])
				{
					cube([BallBearingHeight()+BearingPlasticWidth(), BallBearingDiam()/4+BearingPlasticWidth()*2,BallBearingDiam()+BearingPlasticWidth()]);
				}
				translate([0,-BearingPlasticWidth(),BallBearingDiam()/2+BearingPlasticWidth()*1.25])
				{
					rotate([0,90,0])
					{
						cylinder(BallBearingHeight()+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth(), BallBearingDiam()/2+BearingPlasticWidth());
					}
				}
			}
			translate([-1,-BallBearingHeight()/2,BearingPlasticWidth()*1.25+1])
			{
				cube([BallBearingHeight()+BearingPlasticWidth()+2, BallBearingDiam()/2+BearingPlasticWidth(),BallBearingDiam()-BearingPlasticWidth()/4-1]);
			}
			translate([-1,-BallBearingHeight()/2+BearingPlasticWidth()*2-1,BallBearingDiam()])
			{
				cube([BallBearingHeight()+BearingPlasticWidth()+2, BallBearingDiam()/2+BearingPlasticWidth(),BallBearingDiam()-BearingPlasticWidth()/4-1]);
			}
			translate([-1,-BearingPlasticWidth(),SliderHeight()/2])
			{                                                                                                                                   
				rotate([0,90,0])
				{
					cylinder(BallBearingHeight()+BearingPlasticWidth()+2, BallBearingDiam()/2-BearingPlasticWidth()/6, BallBearingDiam()/2-BearingPlasticWidth()/6);
				}
			}
		}
		translate([0,BearingPlasticWidth()*2,BearingPlasticWidth()])
		{
			cube([BallBearingHeight()+BearingPlasticWidth(), BearingPlasticWidth(),BearingPlasticWidth()*2]);
		}
			
	}
}

module UnPositionedBearingCap()
{
	difference()
	{
		RawBearingCap();
		translate([BearingPlasticWidth()/2,-BallBearingDiam()/2+BearingPlasticWidth(),SliderHeight()/2])
		{
			rotate([0,90,0])
			{
				BallBearing();
			}
		}
		translate([BearingPlasticWidth()/2+ScrewHeadDiameter()/2,-1, SliderHeight()+BearingPlasticWidth()/4])
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
		translate([-BallBearingDiam()/2-BearingPlasticWidth(),0,BallBearingHeight()+BearingPlasticWidth()])
		{
			rotate([0,90,0])
				{
					UnPositionedBearingCap(true);
				}
		}
	}else{
			if(Foot==true)
			{
				translate([-BearingPlasticWidth()/2-BallBearingHeight()/2,-1-BearingPlasticWidth()*1.25-BallBearingDiam()/2,-BearingPlasticWidth()])
				{
					rotate([-90,0,0])
					{
						UnPositionedBearingCap(false);
					}
				}
			}else{
					translate([-BearingPlasticWidth()/2-BallBearingHeight()/2,-BearingPlasticWidth()/2,-BearingPlasticWidth()*1.25-1.5])
					{
						UnPositionedBearingCap(false);
					}
				}
			}
}

BearingCap(false, true);
