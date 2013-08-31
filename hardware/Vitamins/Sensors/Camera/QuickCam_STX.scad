$fn = 60;

function getNubRadius() =1.3;
function getPinHeight() = 9;
function getFlangeWidth(tolerance)= 2.3 + tolerance;
function getFlangeLength(tolerance)= 6.64 + tolerance;
function getQuickCamRadius(tolerance)= 55.93 +tolerance;
function getLandingPadThickness() = 5;

module CameraMount( 3dPrinterTolerance=.4)
{
	union(){
		//central pin	
		cylinder(getPinHeight(),							// length of the pin
				 (4.5-3dPrinterTolerance)/2, 	// radius of the pin
				 (4.5-3dPrinterTolerance)/2, 	// radius of the pin
				 false);						//non centered
		//nubs			 
		translate([0,getNubRadius(),getPinHeight()-getNubRadius()]){
			rotate([0,90,0]){		 
				cylinder(getFlangeWidth(3dPrinterTolerance),	// length of the pin
					 getNubRadius(), 	// radius of the pin
					 getNubRadius(), 	// radius of the pin
					 true);						//non centered
			 }
		}
		//nubs			 
		translate([0,-getNubRadius(),getPinHeight()-getNubRadius()]){
			rotate([0,90,0]){		 
				cylinder(getFlangeWidth(3dPrinterTolerance),	// length of the pin
					 getNubRadius(), 	// radius of the pin
					 getNubRadius(), 	// radius of the pin
					 true);						//non centered
			 }
		}
		//Flange		 
		translate([getFlangeWidth(3dPrinterTolerance)/-2,getFlangeLength(3dPrinterTolerance)/-2,0]){		 
			cube([	getFlangeWidth(3dPrinterTolerance), 
					getFlangeLength(3dPrinterTolerance), 
					getPinHeight()-getFlangeWidth(3dPrinterTolerance)-1
				]);
		}		 
		// Landing pad			 
		translate([0,0,-getLandingPadThickness()]){		 
			cylinder(getLandingPadThickness(),	// length of the landing pad
					 15, 						// radius of the landing pad
					 15, 						// radius of the landing pad
					 false);
		}		 
	}		 
	
}

module cameraViewingCone(){

}

module QuickCam(3dPrinterTolerance=.4){
	union(){
		difference(){
			translate([0,0,getQuickCamRadius(3dPrinterTolerance)]){		 
				sphere(getQuickCamRadius(3dPrinterTolerance));
			}	
			
			CameraMount( 3dPrinterTolerance);
			
		}
		
	}
}

//QuickCam();
translate([0,0,getLandingPadThickness()]){
	CameraMount();
}