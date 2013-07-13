use <Parameters.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/PlasticScrew.scad>

$fn=100;

height=ZrodSpacing();
Bdiam=BallBearingDiam();

//function notchlength()=
function cupOD()= Bdiam/1.25+ScrewDiameter()/2;

//this creates the perpendicular bearing cup.
module BearingRecess(){

difference(){
	cylinder(BallBearingHeight()*2.5,cupOD(),cupOD());  
	translate([0,0,BallBearingHeight()/2]){
		cylinder(BallBearingHeight()*2+2,(Bdiam/2)+1,(Bdiam/2)+1);
	}


//Below creates the notch for the bearing cover. in the future change the dimensions to parameterize with the cover.
	translate([-cupOD(),-Bdiam/2,BallBearingHeight()*1.6]){
		rotate([45,0,0]){
			cube([cupOD()*2,BallBearingHeight()/2,BallBearingHeight()/2]);
		}	
	}
	translate([0,0,-BallBearingHeight()/2]){
		cylinder(BallBearingHeight()+10,BallBearingInnerDiam()+1,Bdiam/2+1);
	}
}
}

module hole(){

cylinder(ScrewLength()*2,ScrewDiameter()/2,ScrewDiameter()/2);
}

module KnuckleShaft(){
	
difference()	{	
	translate([0,height/2-2,0]){
		rotate([90,0,0]){
			cylinder(height,Bdiam/2,Bdiam/2);
		}
	}
	translate([-height/2,-height/2-4,-height]){
		cube([height,height+4,height]);
	}
	translate	([0,-height/4,-Bdiam/2+1]){
		hole();
	}
	translate([0,height/4,-Bdiam/2+1]){
		hole();
	}
}
}
//this is the assembly of the two modules
difference(){
	union(){
		KnuckleShaft();
		translate([0,-height/2-Bdiam/2-BallBearingInnerDiam()/2,0]){
			BearingRecess();
		}
	}
	translate([0,-height/2+ScrewDiameter()/6,-Bdiam/2+1]){
		hole();
	}
translate([-Bdiam,-height/2-Bdiam/2-BallBearingInnerDiam()/2-Bdiam/2,Bdiam/2]){
	cube([Bdiam*2,Bdiam+cupOD()/2,Bdiam]);
}
}

