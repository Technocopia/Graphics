//When calling this module, use toleranceMotor(boolean,boolean,boolean, number); The first boolean determines the bolt direction(true is up, false is down) and the second determines where the module is centered (true centers at the hub, false centers at the motor mount), the third boolean determines whether to use the large cylindrical hub or the small metal nub. The number indicated the tolerance of the motor (default is .4 mm)

//THIS IS FOR IF YOU USE OTHER KINDS OF MOTORS, MOTOROUTCROP IS THE DISTANCE FROM THE MOUNTING PLATE TO THE BUISNESS END OF YOUR MOTOR, IF YOU EVER NEED TO SWITCH TO ANOTHER JUST CHANGE THIS VALUE TO THE ACTUAL VALUE

function StandardServoOutcrop()= StandardServoCylinderHeight()+(StandardServoHeight()-(StandardServoWingsHeight()+StandardServoWingsDist()))-StandardServoTolerance();


//for use when the motor is incorporated into parts
	//this is distance, the short way, from the edge of the motor to the center of the hub
function StandardServoCenterDist()=(StandardServoCylinderDiam()/2) + ((StandardServoLength()-StandardServoBaseLength())/2-StandardServoTolerance()*2); 

//basic motor shape
function StandardServoHeight()=38;
function StandardServoBaseLength()=42;
function StandardServoThickness()=21;

//wings for mounting
function StandardServoWingsHeight()=5.5;
function StandardServoLength()=55;
function StandardServoWingsDist()=26.5;
function StandardServoBoltHeadHeight()=1.4;

//cylinder on top of motor
function StandardServoCylinderHeight()=(46-38);
function StandardServoCylinderDiam()=21;
function StandardServoCylinderDist()=31;

//nub on top of motor
function StandardServoNubHeight()=5.85;
function StandardServoNubDiam()=6;

//all bolts
function StandardServoBoltHeight()=13.5;
function StandardServoBoltDiam()=2;

//body bolts
function StandardServoBoltDist()=4.35;

//cylinder bolts
function StandardServoCylBoltDist()=7.12;

//hub for wires
function StandardServoHubHeight()=3.7;
function StandardServoHubWidth()=6;
function StandardServoHubLength()=3;
function StandardServoHubDist()=3;

//tolerance for servo
function StandardServoTolerance()=.4;

//When calling this module, use StandardServoMotor(boolean,boolean); The first boolean determines the bolt direction(true is up, false is down) and the second determines where the module is centered (true centers at the hub, false centers at the motor mount)

//defining a bolt
module StandardServoBolt(ServoTolerance=StandardServoTolerance())
{
	cylinder(StandardServoBoltHeight()+ServoTolerance, (StandardServoBoltDiam()+ServoTolerance)/2, (StandardServoBoltDiam()+ServoTolerance)/2, 0);
}

module bodyBolts(boltPlacementZ,ServoTolerance=StandardServoTolerance() ){
		translate([StandardServoBoltDist(),-StandardServoBoltDist(),boltPlacementZ])
		{
			StandardServoBolt(ServoTolerance);
		}
		
		translate([(StandardServoThickness()-StandardServoBoltDist()),-StandardServoBoltDist(),boltPlacementZ])
		{
			StandardServoBolt(ServoTolerance);
		}

		translate([StandardServoBoltDist(),(StandardServoBaseLength()+StandardServoBoltDist()),boltPlacementZ])
		{
			StandardServoBolt(ServoTolerance);
		}
		
		translate([(StandardServoThickness()-StandardServoBoltDist()),(StandardServoBaseLength()+StandardServoBoltDist()),boltPlacementZ])
		{
			StandardServoBolt(ServoTolerance);
		}
}

module StandardServoBlock(boltsUp=true, Cylinder=true, ServoTolerance=StandardServoTolerance()){
	union()
	{
//basic motor shape
		translate([-ServoTolerance, -ServoTolerance, -ServoTolerance])
		{
			cube([StandardServoThickness()+ServoTolerance*2, StandardServoBaseLength()+ServoTolerance*2, StandardServoHeight()+ServoTolerance*2]);
		}

//wings for mounting
		translate([-ServoTolerance, (-ServoTolerance+((StandardServoBaseLength()-StandardServoLength())/2)), StandardServoWingsDist()-ServoTolerance])
		{
			cube([StandardServoThickness()+ServoTolerance*2, StandardServoLength()+ServoTolerance*2, StandardServoWingsHeight()+ServoTolerance*2+StandardServoBoltHeadHeight()]);
		}

//determines if you should make the cylinder or a nub
if(Cylinder==true){
//cylinder on top of motor
		translate([StandardServoCylinderDiam()/2,StandardServoCylinderDist(),StandardServoHeight()])
		{
			cylinder(StandardServoCylinderHeight()+ServoTolerance*2, StandardServoCylinderDiam()/2+ServoTolerance, StandardServoCylinderDiam()/2+ServoTolerance, 0);

		}

//cylinder bolts
		translate([StandardServoThickness()/2,StandardServoCylinderDist()-StandardServoCylBoltDist(),(StandardServoHeight()+StandardServoCylinderHeight())])
		{
			StandardServoBolt(ServoTolerance);
		}

		translate([StandardServoThickness()/2,StandardServoCylinderDist()+StandardServoCylBoltDist(),(StandardServoHeight()+StandardServoCylinderHeight())])
		{
			StandardServoBolt(ServoTolerance);
		}

		translate([StandardServoThickness()/2+StandardServoCylBoltDist(),StandardServoCylinderDist(),(StandardServoHeight()+StandardServoCylinderHeight())])
		{
			StandardServoBolt(ServoTolerance);
		}

		translate([StandardServoThickness()/2-StandardServoCylBoltDist(),StandardServoCylinderDist(),(StandardServoHeight()+StandardServoCylinderHeight())])
		{
			StandardServoBolt(ServoTolerance);
		}
}else{
//nub on top of motor
		translate([StandardServoCylinderDiam()/2,StandardServoCylinderDist(),StandardServoHeight()])
		{
			cylinder(StandardServoNubHeight()+ServoTolerance*2, StandardServoNubDiam()/2+ServoTolerance, StandardServoNubDiam()/2+ServoTolerance, 0);

		}	
}

		if(boltsUp==true){
			bodyBolts(StandardServoWingsDist()+StandardServoWingsHeight(),ServoTolerance);
		}else{
			bodyBolts(StandardServoWingsDist()-StandardServoBoltHeight(),ServoTolerance);
		}
		
//hub for wires
		translate([(StandardServoThickness()-(StandardServoHubWidth()+ServoTolerance))/2,(StandardServoBaseLength()+ServoTolerance),StandardServoHubDist()])
		{
			cube([StandardServoHubWidth()+ServoTolerance,StandardServoHubLength()+ServoTolerance,StandardServoHubHeight()+ServoTolerance]);
		}
	}
}



//making the motor
module StandardServoMotor(boltsUp=true, Cylinder=true, hornCentered=false, ServoTolerance=StandardServoTolerance())
{
	if(hornCentered==true){
		if(Cylinder==true){
			translate([-StandardServoThickness()/2,-StandardServoCylinderDist(),-(StandardServoHeight()+StandardServoCylinderHeight())-ServoTolerance*2])
			{
				StandardServoBlock(boltsUp,Cylinder,ServoTolerance);
			}
		}else{
			translate([-StandardServoThickness()/2,-StandardServoCylinderDist(),-(StandardServoHeight()+StandardServoNubHeight())-ServoTolerance*2])
			{
				StandardServoBlock(boltsUp,Cylinder,ServoTolerance);
			}
			}
	}else{
		if(boltsUp == true){
			translate([ServoTolerance,(StandardServoLength()-StandardServoBaseLength())/2+ServoTolerance,(-StandardServoHeight()+(StandardServoHeight()-StandardServoWingsDist())-StandardServoWingsHeight()-ServoTolerance*4)])
			{	
				StandardServoBlock(boltsUp,Cylinder,ServoTolerance);
			}
		}else{
			translate([ServoTolerance,(StandardServoLength()-StandardServoBaseLength())/2+ServoTolerance,(-StandardServoHeight()+(StandardServoHeight()-StandardServoWingsDist())-StandardServoWingsHeight()-ServoTolerance*4)])
			{	
				StandardServoBlock(boltsUp,Cylinder,ServoTolerance);
			}
		}
	}

}



// StandardServoMotor (boolean,boolean,boolean, number); The first boolean determines the bolt direction(true is up, false is down, default=true), the second boolean determines whether to use the large cylindrical hub (true) or the small metal nub (false)(default=true), and the third determines where the module is centered (true centers at the hub, false centers at the motor mount, default=false). The number indicated the tolerance of the motor (default is .4 mm)

StandardServoMotor(false,true,false,.4);





