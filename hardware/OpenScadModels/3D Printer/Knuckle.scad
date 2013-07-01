use <Parameters.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/PlasticScrew.scad>

$fn=50;

height=ZrodSpacing();
Bdiam=BallBearingDiam();

module BearingRecess()
difference(){
	cylinder(BallBearingHeight()*3,Bdiam,Bdiam);  
	translate([0,0,BallBearingHeight()]){
		cylinder(BallBearingHeight()+1,(Bdiam/2)+1+3dPrinterTolerance(),(Bdiam/2)+1+3dPrinterTolerance());
	}
	translate([-BallBearingHeight()*4,-BallBearingHeight()*2,BallBearingHeight()*2]){
		cube([BallBearingHeight()*8,BallBearingHeight()*6,BallBearingHeight()+1]);
	}
}
module hole()

cylinder(ScrewLength(),ScrewDiameter()/2,ScrewDiameter()/2);

module Knuckle()
	
difference()	{	
	rotate([90,0,0]){
		translate([0,0,-height+Bdiam]){
			cylinder(height,Bdiam,Bdiam);
		}
	}
	rotate([90,0,0]){
		translate([-height/2,-height,-height/2-Bdiam-2]){
			cube([height,height,height+2*Bdiam]);
		}
	}
	translate	([0,height*.4,-Bdiam/12]){
		hole();
	}
	translate([0,-height*.25,-Bdiam/12]){
		hole();
	}
}

//Knuckle();
//translate([0,-height,0]){
BearingRecess();
//}

translate([0,0,20]){
