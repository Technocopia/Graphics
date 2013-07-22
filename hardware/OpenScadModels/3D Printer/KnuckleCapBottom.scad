use<Parameters.scad>
use<Tolerance.scad>
use<Knuckle2.scad>
use<Vitamins/BallBearing.scad>
use<Vitamins/PlasticScrew.scad>
use<KnuckleCapTop.scad>

$fn=100;

//Delete the comments so you can see how it all fits together:
translate([0,0,BallBearingInnerDiam()+1]){
	//CapTop(false);
}
translate([0,0,BallBearingInnerDiam()/2+1]){
	//BearingRecess();
}

module CapBottom(){

	difference(){
		cylinder(BallBearingHeight()/2+1,cupOD()/1.05,cupOD()/1.05);
		
		translate([0,0,BallBearingHeight()/2+1-(BallBearingHeight()-BallBearingInnerDiam()/2)]){
			cylinder(BallBearingHeight(),BallBearingDiam()/2,BallBearingDiam()/2);
		}	
		translate([0,0,-BallBearingInnerDiam()/8]){
			cylinder(BallBearingInnerDiam()/4+4,(BallBearingInnerDiam()+BallBearingDiam())/3.5,(BallBearingInnerDiam()+BallBearingDiam())/3.5);
		}
		translate([0,0,BallBearingHeight()/2+1.2]){
			CapTop(false);
		}
	}
}

CapBottom();