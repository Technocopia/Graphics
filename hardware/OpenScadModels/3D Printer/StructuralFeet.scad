use <parameters.scad>
use <Vitamins/ZAxisMotors.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>

PlasticWidth=ZrodDiameter()/2;
SideWidth = (ZrodDiameter()+PlasticWidth);


//this makes the clip that on either side of the device
module clip()
{
	difference()
	{
		translate([0,-SideWidth/2,0])
		{	
			difference()
			{


	//this makes the basic curved rectangle shape of the clip
				union()
				{
					cube([SideWidth*2,SideWidth,BoxWidth()]);
					translate([0,SideWidth/2,0])
					{
						cylinder(BoxWidth(),SideWidth/2,SideWidth/2);
					}
				}


	//This makes the holes for the structural rod
				translate([PlasticWidth+ZrodDiameter()/4,SideWidth/2,-1])
				{
					cylinder(BoxWidth()+2, ZrodDiameter()/2, ZrodDiameter()/2);
				}


	//This makes the slot for the clip
				translate([ZrodDiameter()/2+ZrodDiameter()/4+1,SideWidth/2-PlasticWidth/2,-1])
				{
					cube([SideWidth*2-SideWidth/2,PlasticWidth,BoxWidth()+2]);
				}


	//These make the boltholes for the clip
				translate([SideWidth*2-PlasticWidth*1.5,-1,BoxWidth()/3])
				{
					rotate([90,0,0])
					{
					#bolt();
					}
				}
				translate([SideWidth*2-PlasticWidth*1.5,-1,2*BoxWidth()/3])
				{
					rotate([90,0,0])
					{
					#bolt();
					}
				}


	//This makes the screwholes for the bed mount
				translate([-PlasticWidth/2,SideWidth/2,-1])
				{
					cylinder(BoxWidth()+2, ScrewDiameter()/2, ScrewDiameter()/2);
				}
			} 


	//This makes the wings for the bed mount
			translate([-SideWidth*2.5-PlasticWidth,SideWidth/2-PlasticWidth/2,0])
			{
				union()
				{	
					difference()
					{
						cube([SideWidth*2.5,PlasticWidth, BoxWidth()]);
						translate([BoxWidth()/5,-1,-BoxWidth()/2])
						{
							rotate([0,-45,0])
							{
								cube([SideWidth*2.5,PlasticWidth+2, BoxWidth()*2]);
							}
						}
					}
					translate([0,PlasticWidth/2,BoxWidth()-BoxWidth()/5-PlasticWidth])
					{
						cylinder(BoxWidth()/5+PlasticWidth, PlasticWidth, PlasticWidth);
					}
				}
			}
		}


	//This makes the screwholes on the wings of the bed mount
		translate([-SideWidth*2.5-PlasticWidth,0,BoxWidth()-BoxWidth()/5-PlasticWidth-1])
		{
			cylinder(BoxWidth()/5+PlasticWidth+2, ScrewDiameter()/2, ScrewDiameter()/2);
				
		}
	}	
}




//this is the actual module for the finished foot
module StructuralFeet()
{
	translate([-PlasticWidth/2,-ZrodSpacing()/2,0])
		{
		difference()
		{


	//This places the clips at the correct distance apart, adds the center strip, and cuts holes to accomodate the motor
			union()
			{
				clip();
				translate([0,ZrodSpacing(),0])
					{
						clip();
					}
				difference()
				{
					cube([PlasticWidth,ZrodSpacing(),BoxWidth()]);
					translate([-1,ZrodSpacing()/2,BoxWidth()/2])
					{
						%ZAxisMotor();
					}
				}
			}

		//re-cutting the structural rod holes from before, since there is some overlap
			translate([PlasticWidth+ZrodDiameter()/4,0,-1])
			{
				cylinder(BoxWidth()+2, ZrodDiameter()/2, ZrodDiameter()/2);
			}
			translate([PlasticWidth+ZrodDiameter()/4,ZrodSpacing(),-1])
			{
				cylinder(BoxWidth()+2, ZrodDiameter()/2, ZrodDiameter()/2);
			}

		}
	}
}



//rotating the module, as it would be rotated for printing

rotate([0,180,0])
{
	StructuralFeet();
}



