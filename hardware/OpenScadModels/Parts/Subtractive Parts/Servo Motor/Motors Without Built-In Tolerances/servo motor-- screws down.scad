
module motor()
{
	union()
		{
			import("../../../../../FreeCadModels/ServoWithHorns&Screws/STL/ServoWithHorns&Screws.stl");

//bolts
		
			translate([15.5,-4,31.5])
				{				rotate([180,0,0])
					{
						import("../Servo Motor/Motor Fittings/basic bolt.stl");
	
				}
				}
			translate([4.5,-4,31.5])
				{
				rotate([180,0,0])
					{
						import("../Servo Motor/Motor Fittings/basic bolt.stl");
					}
				}
			translate([15.5,45,31.5])
				{
				rotate([180,0,0])
					{
						import("../Servo Motor/Motor Fittings/basic bolt.stl");
					}
				}
			translate([4.5,45,31.5])
				{
					rotate([180,0,0])
					{
						import("../Servo Motor/Motor Fittings/basic bolt.stl");
					}
				}
//rubber fittings

		translate([15.5,-4,25.5])
				{
					import("../Servo Motor/Motor Fittings/rubberfitting.stl");
				}
			translate([4.5,-4,25.5])
				{
					import("../Servo Motor/Motor Fittings/rubberfitting.stl");
				}
			translate([15.5,45,25.5])
				{
					import("../Servo Motor/Motor Fittings/rubberfitting.stl");
				}
			translate([4.5,45,25.5])
				{
					import("../Servo Motor/Motor Fittings/rubberfitting.stl");
				}
//metal fittings

		translate([15.5,-4,30])
				{
					import("../Servo Motor/Motor Fittings/metalfitting.stl");
				}
			translate([4.5,-4,30])
				{
					import("../Servo Motor/Motor Fittings/metalfitting.stl");
				}
			translate([15.5,45,30])
				{
					import("../Servo Motor/Motor Fittings/metalfitting.stl");
				}
			translate([4.5,45,30])
				{
					import("../Servo Motor/Motor Fittings/metalfitting.stl");
				}

//hub for wires	
	translate([7,40,3])
		{
			import("../Servo Motor/Motor Fittings/wirehub.stl");
		}
	}
}

motor();
















