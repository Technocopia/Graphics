function mm(i) = i*25.4 ;
thickness = mm(.75);
width = mm(1.71);
module baseBlock()
{
	union(){
		cube([width,mm(1.5),thickness]);
		translate([width/2,0,0]) {
  			cylinder(thickness,width/2,width/2,0);
		}
	}
}

module slot(){
	union(){
		translate([0,0,-.1]) {
  			cube([mm(.26),mm(.33),thickness+.2]);
		}
		translate([mm(.26)/2,0,-.1]) {
  			cylinder(thickness+.2,mm(.26)/2,mm(.26)/2,0);
		}
		translate([mm(.26)/2,mm(.33),-.1]) {
  			cylinder(thickness+.2,mm(.26)/2,mm(.26)/2,0);
		}
	}
}
module bigslot(){
	length=0.58;
	var= length+.1;
	
	rotate([0, 0, 90]) {

	union(){
			translate([0,0,-.1]) {
  				cube([mm(length),mm(length),thickness+.2]);
			}
			translate([1,mm(length)/2,-.1]) {
  				cylinder(thickness+.2,mm(length)/2,mm(length)/2,0);
			}
			translate([mm(length-.06),mm(length)/2,-.1]) {
  				cylinder(thickness+.2,mm(length)/2,mm(length)/2,0);
			}
			translate([mm(var),mm(length-.4375)/2,-.1]) {
  				cube([mm(.3),mm(.4375),thickness+.2]);
			}
			translate([mm(var+.26),mm(length/2),-.1]) {
  				cylinder(thickness+.2,mm(.4375)/2,mm(.4375)/2,0);
			}
		}
	}
}

module hole()
{
	translate([width/2,mm(1.75),thickness/2]) 
		{rotate([90, 0, 0]) {
			cylinder(mm(1),mm(.25)/2,mm(.25)/2,0);
		}
	}
}


module shape()
{
	difference(){
		baseBlock();
		translate([mm(.16),mm(.25)/2,0]) {
			slot();
		}
		translate([mm(1.3),mm(.25)/2,0]) {
			slot();
		}

		translate([mm(1.15),mm(0)/2,0]) {
			bigslot();
		}
		hole();
	}

}
// linear_extrude(convexity = 10, center = true)
shape();







