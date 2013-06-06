function mm(i) = i*25.4 ;
thickness = mm(.5);
width = mm(1.5);
toothAngle = 15.65;



module base()
{
	union()
	{
		cylinder(mm(.105),mm(2)/2, mm(2)/2, 0);
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


module triangle()
	difference(){
			translate([mm(7.4/8),0,0]) {
			rotate([0,0,90]){
				polyhedron( 
      	   	points = [ 
             	[-3, -2, 4], 
              	[3, -2, 4], 
              	[0, 3, 4], 
              	[-3, -2, -1], 
              	[3, -2, -1], 
              	[0, 3, -1]
        		 ],
        		 triangles = [
             	 [0, 1, 2],
             	 [3, 4, 5],
              	[0, 1, 4, 3],
              	[0, 2, 5, 3],
              	[1, 2, 5, 4]
        	 ]
   	 );
		}					
	}
		translate([mm(.62),mm(-.25/2),-mm(.1)]) {
  				cube([mm(.25),mm(.25),mm(.105+.2)]);
		}
}	


module toothgap()

{
union(){
	translate([mm(7/8),0,0])	{
		cylinder(mm(.2),mm(1/8)/2,mm(1/8)/2,0);
		}	
	triangle();
	
	}
}

module teeth()
{
	union(){
		toothgap();
		rotate([0, 0, toothAngle]) {
			toothgap();
		}
		rotate([0, 0, toothAngle*2]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*3]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*4]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*5]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*6]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*7]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*8]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*9]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*10]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*11]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*12]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*13]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*14]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*15]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*16]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*17]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*18]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*19]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*20]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*21]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*22]) {
			toothgap();
		}
	rotate([0, 0, toothAngle*23]) {
			toothgap();
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
		teeth();


	}
}


sprocket();

