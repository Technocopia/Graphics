use <../../../hardware/Vitamins/Actuators/StandardServo/StandardServo_Vitamin.scad>
use <../../../hardware/Vitamins/Sensors/Camera/QuickCam_STX.scad>

//QuickCam();

//StandardServoMotor(true, 1, false, .4);

function getCamerabarThickness()=15;


module cameraTiltBar(3dPrinterTolerance=.4){
	union(){
		difference(){
			cylinder(	getCamerabarThickness(),				//
						getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness(), 	// 
				 		getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness(), 	// 
				 		false);
			translate([0,-getQuickCamRadius(3dPrinterTolerance),getCamerabarThickness()/2]){
				rotate([-90,0,0]){
					QuickCam();
				}
			}
			translate([-(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness()),0,-1]){
				rotate([0,0,0]){
					cube([	(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2,
							(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2,
							(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2]);
				}
			}
			
			translate([	-(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness()),
						-(((getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2)+ (getQuickCamRadius(3dPrinterTolerance)+(getCamerabarThickness()/2))),
						-1]){
				rotate([0,0,0]){
					cube([	(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2,
							(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2,
							(getQuickCamRadius(3dPrinterTolerance)+getCamerabarThickness())*2]);
				}
			}
		}
		
		
	}

}

cameraTiltBar();