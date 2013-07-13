use <parameters.scad>
use <Vitamins/ZAxisMotors.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>

function PlasticWidth()=ZrodDiameter()/2;
function SideWidth() = (ZrodDiameter()+PlasticWidth());


module clip()
{
	difference()
	{
		translate([0,-SideWidth()/2,0])
		{	
			difference()
			{


	//this makes the basic curved rectangle shape of the clip
				union()
				{
					cube([SideWidth()*2,SideWidth(),BoxWidth()]);
					translate([0,SideWidth()/2,0])
					{
						cylinder(BoxWidth(),SideWidth()/2,SideWidth()/2);
					}
				}


	//This makes the holes for the structural rod
				translate([PlasticWidth()+ZrodDiameter()/4,SideWidth()/2,-1])
				{
					cylinder(BoxWidth()+2, ZrodDiameter()/2, ZrodDiameter()/2);
				}


	//This makes the slot for the clip
				translate([ZrodDiameter()/2+ZrodDiameter()/4+1,SideWidth()/2-PlasticWidth()/2,-1])
				{
					cube([SideWidth()*2-SideWidth()/2,PlasticWidth(),BoxWidth()+2]);
				}


	//These make the boltholes for the clip
				translate([SideWidth()*2-PlasticWidth()*1.5,-1,BoxWidth()/3])
				{
					rotate([90,0,0])
					{
					#bolt();
					}
				}
				translate([SideWidth()*2-PlasticWidth()*1.5,-1,2*BoxWidth()/3])
				{
					rotate([90,0,0])
					{
					#bolt();
					}
				}


	//This makes the screwholes for the bed mount
				translate([-PlasticWidth()/2,SideWidth()/2,-1])
				{
					cylinder(BoxWidth()+2, ScrewDiameter()/2, ScrewDiameter()/2);
				}
			} 	
		}	
	}	
}



module clips()
{
	translate([0,-ZrodSpacing()/2, 0])
	{
		union()
		{
			clip();
			translate([0,ZrodSpacing(),0])
			{
				clip();
			}
		}
	}
}

clips();




