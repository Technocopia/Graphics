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
		cylinder(BallBearingInnerDiam()/2,cupOD()/1.05,cupOD()/1.05); 
		translate([0,0,-BallBearingHeight()/2]){
			cylinder(BallBearingHeight()*2,(Bdiam/2),(Bdiam/2));
		}
//this squares off the edges of the recess:
		//translate([-cupOD()*2+BallBearingHeight(),-cupOD(),-2]){
			//cube([cupOD(),cupOD()*2,BallBearingInnerDiam()/2+4]);
		//}
		//translate([cupOD()-BallBearingHeight(),-cupOD(),-2]){
			//cube([cupOD(),cupOD()*2,BallBearingInnerDiam()/2+4]);
		//}
	}
}


module KnuckleShaft(){
	union(){	
		difference()	{	
			rotate([90,0,0]){
				cylinder(height*2,BallBearingInnerDiam()/2,BallBearingInnerDiam()/2);
			}
		
			translate([-height/2,-height*2-2,-height]){
				cube([height,height*2+4,height]);
			}
			translate	([0,-height/3,-Bdiam/4]){
				hole();
			}
			translate	([0,-height,-Bdiam/4]){
				hole();
			}
			translate([0,-height*2+BallBearingDiam(),-Bdiam/4]){
				#hole();
			}
		}
		translate([0,-height*2-BallBearingDiam()/2.9,0]){
			rotate([0,0,45]){
				cube([BallBearingInnerDiam()*1.25,BallBearingInnerDiam()*1.25,BallBearingInnerDiam()/2]);
			}	
		}
	}
}
//this is the assembly of the two modules

module Knuckle(){
	
	difference(){	
		union(){
			KnuckleShaft();
			translate([0,-height*2-cupOD()/1.05,0]){
				BearingRecess();
			}
		}
		translate([0,-height*2-cupOD()/1.05,BallBearingInnerDiam()/2+1]){
			CapTop(false);
		}		
	}
}
Knuckle();
