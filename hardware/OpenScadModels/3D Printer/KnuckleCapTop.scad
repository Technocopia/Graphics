use <Knuckle2.scad>
use <Parameters.scad>
use <Tolerance.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/PlasticScrew.scad>

$fn=100;

function cupOD()=BallBearingDiam()/1.25+ScrewDiameter()/2;

holeinset1=[0,-BallBearingDiam()/1.5,-ScrewLength()+4];
holeinset2=[0,BallBearingDiam()/1.5,-ScrewLength()+4];

module Base(){
	
	difference(){
		cylinder(BallBearingInnerDiam()/4,cupOD()/1.05,cupOD()/1.05);
		translate([0,0,-BallBearingInnerDiam()/4]){
			cylinder(BallBearingInnerDiam()/4+4,(BallBearingInnerDiam()+BallBearingDiam())/3.5,(BallBearingInnerDiam()+BallBearingDiam())/3.5);
		}
	}
}

module CapTop(print=true){
	
	if(print==true){
		difference(){
			Base();

			translate(holeinset1){
				hole();
			}
	
			translate(holeinset2){
				hole();
			}
		}
	}else{
		union(){
			Base();
			translate(holeinset1){
				hole();
			}
			translate(holeinset2){
				hole();
			}
		}
	}
}
CapTop(true);