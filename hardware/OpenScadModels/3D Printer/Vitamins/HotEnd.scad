
$fn=50;
function HotEndDiam() = 16;
function HotEndRecessDiam() = 7;
function HotEndRecessHeight() = 2;
function HotEndRecessDepth() = 1.95;
function HotEndRecessOffset() = 2.6;
function HotEndLength() = 58;

module HotEnd(ScrewChannel=false){
	if(ScrewChannel==false){	
		cylinder(HotEndLength(), HotEndDiam()/2,HotEndDiam()/2);
	}else{
		difference(){
			cylinder(HotEndLength(), HotEndDiam()/2,HotEndDiam()/2);
			translate([0,0,HotEndLength()-HotEndRecessOffset()]){
				difference(){
					cylinder(HotEndRecessHeight(),HotEndDiam()/2+1,HotEndDiam()/2+1);
					cylinder(HotEndRecessHeight(),(HotEndDiam()-HotEndRecessDepth())/2+.4,(HotEndDiam()-HotEndRecessDepth())/2+.4);
				}
			}
		}
	}
}

HotEnd(false);		