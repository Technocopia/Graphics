use <parameters.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/ServoMotor.scad>
use <Vitamins/SmallBolts.scad>
use <Vitamins/PlasticScrew.scad>
use <Vitamins/Sprocket.scad>
use <Clips.scad>





module wing()
{
	difference()
	{		


	//This makes the wings for the bed mount
			translate([-SideWidth()*3-PlasticWidth(),-ZrodSpacing()/2-PlasticWidth()/2,0])
			{
				union()
				{	
//					difference()
//					{
						cube([SideWidth()*3,PlasticWidth(), MotorBracketHeight()]);

							//these wings made it hard to figure out scalability
//						translate([SideWidth()+PlasticWidth()*5,-1,-MotorBracketHeight()/1.5])
//						{
//							rotate([0,-45,0])
//							{
//								cube([SideWidth()*3+PlasticWidth()*2,PlasticWidth()+2, MotorBracketHeight()*1.5]);
//							}
//						}
//					}
					translate([0,PlasticWidth()/2,MotorBracketHeight()-ScrewLength()-PlasticWidth()])
					{
						cylinder(ScrewLength()+PlasticWidth(), PlasticWidth(), PlasticWidth());
					}
				}
			}
		


	//This makes the screwholes on the wings of the bed mount
		translate([-SideWidth()*3-PlasticWidth(),-ZrodSpacing()/2,MotorBracketHeight()-ScrewLength()-PlasticWidth()+2])
		{
			cylinder(ScrewLength()+PlasticWidth(), ScrewDiameter()/2, ScrewDiameter()/2);
				
		}
	}	
}


module EncoderMount()
{
	union()
	{
	//outcrop
		translate([SideWidth()*2.5,-ZrodSpacing()/2,MotorBracketHeight()-PlasticWidth()-MotorCenterDist()-MotorTolerance()*4-MotorBoltDiam()/2])
		{
			cube([SideWidth()*1.5,ZrodSpacing(),MotorCenterDist()+MotorTolerance()*4+MotorBoltDiam()/2]);
		}
	//crosspeice
		translate([SideWidth()*2.5,-ZrodSpacing()/2,MotorBracketHeight()-PlasticWidth()])
		{
			cube([SideWidth()*1.5,ZrodSpacing(), PlasticWidth()]);
		}
	//arms
		translate([PlasticWidth(),ZrodSpacing()/2-SideWidth()-SlotWidth()/2-PlasticWidth(),MotorBracketHeight()-PlasticWidth()])
		{
			#cube([MotorCylinderHeight()+SprocketWidth(),SideWidth(), PlasticWidth()]);
		}
	translate([PlasticWidth(),-ZrodSpacing()/2+PlasticWidth(_),MotorBracketHeight()-PlasticWidth()])
		{
			#cube([SideWidth()*2,SideWidth(), PlasticWidth()]);
		}
	}
}
			
EncoderMount();

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
				translate([0,-MotorThickness()/2,MotorLength()])
				rotate([0,0,90])
				{
					rotate([90,0,0])
					
				{
					%ServoMotor(true,false);
				}
}
				
		}
		wings();
	}
}






//rotating the module, as it would be rotated for printing
rotate([0,180,0])
{
//	StructuralFeet();
}



StructuralFeet();



