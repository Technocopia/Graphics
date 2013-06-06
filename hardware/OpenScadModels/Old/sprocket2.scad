function mm(i) = i*25.4 ;
thickness = mm(.5);
width = mm(1.5);




module base()
{
	union()
	{
		cylinder(mm(.105),mm(1.875)/2, mm(1.875)/2, 0);
		cylinder(thickness,width/2,width/2,0);
		
	}
		
}


module centerHole()
{
	cylinder(mm(thickness+mm(1)),mm(.5)/2, mm(.5)/2, 0);
}


module sideHole()
{
		{rotate([90, 0, 0]) {
		cylinder(mm(.75),mm(.22)/2,mm(.22)/2,0);
		}
	}
}


module tooth() {

rotate([90, 45, 0]) {

	translate([-1,mm(.105)/2,mm(1.875)/2]) {

		polyhedron(
			points = [
				[3, 0, 0],
				[0, 3, 0],
				[-3, 0, 0],
				[0, -3, 0],
				[0, 0, 3]
			],
			triangles = [
				[0, 1, 2, 3],
				[4, 1, 0],
				[4, 2, 1],
				[4, 3, 2],
				[4, 0, 3]
	]
);
		}
	}
}

module sprocket()
{
	difference(){
		base();
		translate([0,0,mm(-.5)]) {
			centerHole();
			}
		translate([0,0,(thickness/2+mm(.105)/2)]) {
			sideHole();
			}
		{rotate([0, 0, 60]) {
		translate([0,0,(thickness/2+mm(.105)/2)]) {
			sideHole();
				}
			}
		}		
	}
}


sprocket();

tooth();

