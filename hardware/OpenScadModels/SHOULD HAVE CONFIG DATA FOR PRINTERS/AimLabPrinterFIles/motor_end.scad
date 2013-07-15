include <configuration.scad>
use <bracket.scad>

eta1 = 0.01;
eta2 = 0.02;



h = 60; // Total height.
m = 29; // Motor mounting screws distance (center to center)

bearing_distance = 25;

servo_casing_height = 40.3;
servo_casing_width = 21;
servo_hole_dia = 4.5;
servor=servo_hole_dia/2;
servo_hole_width = 5;
servo_hole_height = 30-3.5-servo_casing_height/2;
servo_hole_heightneg = 30+3.5+servo_casing_height/2;

encoder_height = 30;
encored_width = 36;
encoder_slot_height = 30;
encoder_slot_width = 20;
   


 difference(){
	translate([0, 0, h/2]) 
    difference() {
    union() {
//Encoder Mounting
	difference()
	{
	translate([-72/2,-35,-h/2]) cube([72,31,8]);
	translate([-48/2,-20,-h/2-eta1]) cube([48,30-eta1,8+eta2]);
	}
	difference(){
	translate([-20,-35,-h/2]) cube([40,15,42.5]);
	union(){
		translate([0,50,-10]) rotate([90,0,0]) cylinder(r=3,h=100);
		translate([0,-20+eta1,-10]) rotate([90,0,0]) cylinder(r=11,h=7+eta1);
		translate([0,50,-10]) rotate([90,0,0]) cylinder(r=6,h=100);

//Encoder Mounting Holes
		translate([13.5,50,-12]) rotate([90,0,0]) cylinder(r=1.6,h=100);
		translate([-13.5,50,-12]) rotate([90,0,0]) cylinder(r=1.6,h=100);
		translate([13.5,50,6]) rotate([90,0,0]) cylinder(r=1.6,h=100);
		translate([-13.5,50,6]) rotate([90,0,0]) cylinder(r=1.6,h=100);
//Encoder Slot
		translate([0,-30,-2]) cube([36,3,30], center = true);
		translate([0,-33,-2]) cube([20,5,30], center = true);
		}
	}

      bracket(h);
      for (x = [-30, 30]) {
        // Diagonal fins.
        translate([x, 29.5, 0]) intersection() {
          cube([5, 30, h], center=true);
          rotate([45, 0, 0]) translate([0, -50, 0])
            cube([20, 100, 100], center=true);
        }
        // Extra mounting screw holes.
        translate([x, 47, 4-h/2]) difference() {
          cylinder(r=5, h=8, center=true, $fn=24);
          translate([0, 1, 0]) cylinder(r=1.9, h=9, center=true, $fn=12);
        }
      }
    }
	//Clamping Holes
    for (z = [10, 25, 40]) {
      translate([0, 0, z-20]) screws();
    }
	//Clearance for Servo
	translate([-10.5,20,(-servo_casing_height/2)])rotate([90,0,0])cube([21,servo_casing_height,25]);    
  }
// Motor mounting holes
	translate([-servo_hole_width,20, servo_hole_height]) rotate([90,0,0]) cylinder(r=servor,h=30);
	translate([-servo_hole_width,20, servo_hole_heightneg]) rotate([90,0,0]) cylinder(r=servor,h=30);
	translate([servo_hole_width,20, servo_hole_heightneg]) rotate([90,0,0]) cylinder(r=servor,h=30);
	translate([servo_hole_width,20, servo_hole_height]) rotate([90,0,0]) cylinder(r=servor,h=30);
}




motor_end();
