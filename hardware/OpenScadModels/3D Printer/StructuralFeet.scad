use <parameters.scad>
use <Vitamins/ZAxisMotors.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>
use <Clips.scad>




module wing()
{
	difference()
	{		


	//This makes the wings for the bed mount
			translate([-SideWidth()*2.5-PlasticWidth(),-ZrodSpacing()/2-PlasticWidth()/2,0])
			{
				union()
				{	
					difference()
					{
						cube([SideWidth()*2.5,PlasticWidth(), BoxWidth()]);
						translate([BoxWidth()/4.5,-1,-BoxWidth()/2])
						{
							rotate([0,-45,0])
							{
								cube([SideWidth()*2.5,PlasticWidth()+2, BoxWidth()*2]);
							}
						}
					}
					translate([0,PlasticWidth()/2,BoxWidth()-BoxWidth()/5-PlasticWidth()])
					{
						cylinder(BoxWidth()/5+PlasticWidth(), PlasticWidth(), PlasticWidth());
					}
				}
			}
		


	//This makes the screwholes on the wings of the bed mount
		translate([-SideWidth()*2.5-PlasticWidth(),-ZrodSpacing()/2,BoxWidth()-BoxWidth()/5-PlasticWidth()-1])
		{
			cylinder(BoxWidth()/5+PlasticWidth()+2, ScrewDiameter()/2, ScrewDiameter()/2);
				
		}
	}	
}



//This just duplicates the wing into two wings
module wings()
{
	union()
	{
	wing();
	translate([0, ZrodSpacing(), 0])
		{
		wing();
		}
	}
}


//this is the actual module for the finished foot, it pulls down the clips and adds the wings to make a bed mount, and cuts holes to accomodate the motor
module StructuralFeet()
{

	union()
	{
		difference()
		{
			Clips(Bottom());
			translate([-1,0,BoxWidth()/2])
				{
					%ZAxisMotor();
				}
		}
		wings();
	}
}






//rotating the module, as it would be rotated for printing
rotate([0,180,0])
{
	StructuralFeet();
}







