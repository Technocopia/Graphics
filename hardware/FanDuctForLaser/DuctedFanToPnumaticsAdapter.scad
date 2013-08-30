
function getFlangeLen() = 33;
function getThickness() = 5;
function getTubeDiameter() = 6;
function getFanDiameter()  =66.87;
function getductHeight()  = 100;

module fanDuctToPnumatics(){
	union(){
		//intake tube
		translate([0,0,getductHeight()]){
			difference(){
				cylinder(	getFlangeLen(),
							getTubeDiameter()+getThickness(),
							getTubeDiameter()+getThickness(),
							false);
				translate([0,0,-.5]){
					cylinder(	getFlangeLen()+1,
								getTubeDiameter(),
								getTubeDiameter(),
								false);
				}
			}
		}
		//Cone
		difference(){
			cylinder(	getductHeight(),
						getFanDiameter()+getThickness(),
						getTubeDiameter()+getThickness(),
						false);
			translate([0,0,-.5]){
				cylinder(	getductHeight()+1,
							getFanDiameter(),
							getTubeDiameter(),
							false);
			}
		}
		//Fan tube
		translate([0,0,-getFlangeLen()]){
			difference(){
				cylinder(	getFlangeLen(),
							getFanDiameter()+getThickness(),
							getFanDiameter()+getThickness(),
							false);
				translate([0,0,-.5]){
					cylinder(	getFlangeLen()+1,
								getFanDiameter(),
								getFanDiameter(),
								false);
				}
				translate([0,getFanDiameter()-1,-.5]){
					cube([getThickness()+1,getThickness()+1,getFlangeLen()]);
				}
			}
		}
	}
}

fanDuctToPnumatics();