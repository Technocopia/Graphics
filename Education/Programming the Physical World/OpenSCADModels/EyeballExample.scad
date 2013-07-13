
module eye(size=100,eyeOrentationX=0,eyeOrentationY=0){
	cynandarSize = (size/2);
	innerCynandarSize =  (cynandarSize*.50);
	rotate([eyeOrentationX,0,eyeOrentationY]){
		difference(){
			sphere(size);
			translate([size*.95,0,0]){
				rotate([0,90,0]){
					difference(){
						cylinder(size/10,cynandarSize,cynandarSize,true);
						cylinder(size/10,innerCynandarSize,innerCynandarSize,true);
					}
				}
			}	
		}
	}
}

module eyeBrow(size=100,innerCorner=0,outerCorner=0){

}


module eyeLid(size=100,upper=true,angle=0){

}

module cartoonEye(size=100,innerEyeBrowCorner=0,outerEyeBrowCorner=0,
upperEyeLidAngle=0,lowerEyeLidAngle=0, eyeOrentationX=0,eyeOrentationY=0){
	eye(size,eyeOrentationX,eyeOrentationY);
	eyeBrow(size,innerEyeBrowCorner,outerEyeBrowCorner);
	eyeLid(size,upper=true,upperAngle);
	eyeLid(size,upper=false,lowerAngle);
}

cartoonEye(100,10,10,20,20,45,45);
