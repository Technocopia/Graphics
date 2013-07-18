use <Parameters.scad>
use <Tolerance.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/PlasticScrew.scad>
use <KnuckleCapTop.scad>

$fn=100;

height=ZrodSpacing()+BallBearingDiam()/2;
Bdiam=BallBearingDiam();

function cupOD()= Bdiam/1.25+ScrewDiameter()/2;

module hole(){

cylinder(ScrewLength(),ScrewDiameter()/2,ScrewDiameter()/2);
}

module BearingRecess(){

difference(){
	cylinder(BallBearingInnerDiam()/2,cupOD(),cupOD());  
	translate([0,0,-BallBearingHeight()/2]){
		cylinder(BallBearingHeight()*4,(Bdiam/2),(Bdiam/2));
	}
	translate([0,0,-BallBearingHeight()/2]){
		cylinder(BallBearingHeight()+10,BallBearingInnerDiam(),BallBearingInnerDiam());
	}
}
}


module KnuckleShaft(){
	
difference()	{	
	translate([0,height/2-2,0]){
		rotate([90,0,0]){
			cylinder(height,BallBearingInnerDiam()/2-.1,BallBearingInnerDiam()/2-.1);
		}
	}
	translate([-height/2,-height/2-4,-height]){
		cube([height,height+4,height]);
	}
	translate	([0,-height/4,-Bdiam/4]){
		hole();
	}
	translate([0,height/4,-Bdiam/4]){
		hole();
	}
}
}
//this is the assembly of the two modules
module Knuckle(){
	difference(){	
		union(){
			KnuckleShaft();
			translate([0,-height/2-Bdiam/2-BallBearingInnerDiam()/2,0]){
				BearingRecess();
			}
		}
		translate([0,-height/2-Bdiam/2-BallBearingInnerDiam()/2,BallBearingInnerDiam()/2+1]){
			CapTop(false);
		}		
	}
}
Knuckle();
