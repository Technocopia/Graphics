use <Parameters.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/PlasticScrew.scad>

$fn=100;

height=ZrodSpacing();
Bdiam=BallBearingDiam();


//this creates the bearing rest.
module BearingRecess(){

difference(){
	cylinder(BallBearingHeight()*2.5,Bdiam/1.25,Bdiam/1.25);  
	translate([0,0,BallBearingHeight()/2]){
		cylinder(BallBearingHeight()*2.5,(Bdiam/2)+1,(Bdiam/2)+1);
	}
	translate([-BallBearingHeight()*4,-Bdiam/2,Bdiam/2]){
		cube([BallBearingHeight()*8,BallBearingHeight()*6,Bdiam]);
	}


//Below creates the notch for the bearing cover. in the future change the dimensions to parameterize with the cover.
	translate([-BallBearingHeight()*2,-Bdiam/2,BallBearingHeight()*1.6]){
		rotate([45,0,0]){
			cube([BallBearingHeight()*4,BallBearingHeight()/2,BallBearingHeight()/2]);
		}	
	}
	translate([0,0,-BallBearingHeight()/2]){
		cylinder(BallBearingHeight()+10,BallBearingInnerDiam()+1,BallBearingInnerDiam()+1);
	}
}
}

module hole(){

cylinder(ScrewLength(),ScrewDiameter()/2,ScrewDiameter()/2);
}

module KnuckleShaft(){
	
difference()	{	
	rotate([90,0,0]){
		cylinder(height,Bdiam/2,Bdiam/2);
	}
	translate([-height/2,-height-2,-height]){
		#cube([height,height+4,height]);
		}
	translate	([0,height*.4,-Bdiam/12]){
		#hole();
	}
	translate([0,-height*.1,-Bdiam/12]){
		#hole();
	}
}
}
//this is the assembly of the two modules
difference(){
	union(){
		KnuckleShaft();
		translate([0,-height-Bdiam/1.8,0]){
			BearingRecess();
		}
	}
	translate([0,0,-2]){
		#hole();
	}
}

