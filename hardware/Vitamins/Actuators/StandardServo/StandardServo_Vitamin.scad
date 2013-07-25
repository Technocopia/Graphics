//When calling this module, use toleranceMotor(boolean,boolean,boolean, number); The first boolean determines the bolt direction(true is up, false is down) and the second determines where the module is centered (true centers at the hub, false centers at the motor mount), the third boolean determines whether to use the large cylindrical hub or the small metal nub. The number indicated the tolerance of the motor (default is .4 mm)

//THIS IS FOR IF YOU USE OTHER KINDS OF MOTORS, MOTOROUTCROP IS THE DISTANCE FROM THE MOUNTING PLATE TO THE BUISNESS END OF YOUR MOTOR, IF YOU EVER NEED TO SWITCH TO ANOTHER JUST CHANGE THIS VALUE TO THE ACTUAL VALUE

function MotorOutcrop()= MotorCylinderHeight()+(MotorHeight()-(MotorWingsHeight()+MotorWingsDist()))-MotorTolerance();


//for use when the motor is incorporated into parts
	//this is distance, the short way, from the edge of the motor to the center of the hub
function MotorCenterDist()=(MotorCylinderDiam()/2) + ((MotorBaseLength()-MotorBaseLength())/2-MotorTolerance()*2); 

//basic motor shape
function MotorHeight()=38;
function MotorBaseLength()=42;
function MotorThickness()=21;

//wings for mounting
function MotorWingsHeight()=5.5;
function MotorLength()=55;
function MotorWingsDist()=26.5;
function MotorBoltHeadHeight()=1.4;

//cylinder on top of motor
function MotorCylinderHeight()=(46-38);
function MotorCylinderDiam()=21;
function MotorCylinderDist()=31;

//nub on top of motor
function MotorNubHeight()=5.85;
function MotorNubDiam()=6;

//all bolts
function MotorBoltHeight()=13.5;
function MotorBoltDiam()=2;

//body bolts
function MotorBoltDist()=4.35;

//cylinder bolts
function MotorCylBoltDist()=7.12;

//hub for wires
function MotorHubHeight()=3.7;
function MotorHubWidth()=6;
function MotorHubLength()=3;
function MotorHubDist()=3;

//When calling this module, use ServoMotor(boolean,boolean); The first boolean determines the bolt direction(true is up, false is down) and the second determines where the module is centered (true centers at the hub, false centers at the motor mount)

//defining a bolt
module MotorBolt(ServoTolerance=.4)
{
	cylinder(MotorBoltHeight()+ServoTolerance, (MotorBoltDiam()+ServoTolerance)/2, (MotorBoltDiam()+ServoTolerance)/2, 0);
}

module bodyBolts(boltPlacementZ,ServoTolerance=.4 ){
		translate([MotorBoltDist(),-MotorBoltDist(),boltPlacementZ])
		{
			MotorBolt(ServoTolerance);
		}
		
		translate([(MotorThickness()-MotorBoltDist()),-MotorBoltDist(),boltPlacementZ])
		{
			MotorBolt(ServoTolerance);
		}

		translate([MotorBoltDist(),(MotorBaseLength()+MotorBoltDist()),boltPlacementZ])
		{
			MotorBolt(ServoTolerance);
		}
		
		translate([(MotorThickness()-MotorBoltDist()),(MotorBaseLength()+MotorBoltDist()),boltPlacementZ])
		{
			MotorBolt(ServoTolerance);
		}
}

module motorBlock(boltsUp=true, Cylinder=true, ServoTolerance=.4){
	union()
	{
//basic motor shape
		translate([-ServoTolerance, -ServoTolerance, -ServoTolerance])
		{
			cube([MotorThickness()+ServoTolerance*2, MotorBaseLength()+ServoTolerance*2, MotorHeight()+ServoTolerance*2]);
		}

//wings for mounting
		translate([-ServoTolerance, (-ServoTolerance+((MotorBaseLength()-MotorLength())/2)), MotorWingsDist()-ServoTolerance])
		{
			cube([MotorThickness()+ServoTolerance*2, MotorLength()+ServoTolerance*2, MotorWingsHeight()+ServoTolerance*2+MotorBoltHeadHeight()]);
		}

//determines if you should make the cylinder or a nub
if(Cylinder==true){
//cylinder on top of motor
		translate([MotorCylinderDiam()/2,MotorCylinderDist(),MotorHeight()])
		{
			cylinder(MotorCylinderHeight()+ServoTolerance*2, MotorCylinderDiam()/2+ServoTolerance, MotorCylinderDiam()/2+ServoTolerance, 0);

		}

//cylinder bolts
		translate([MotorThickness()/2,MotorCylinderDist()-MotorCylBoltDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt(ServoTolerance);
		}

		translate([MotorThickness()/2,MotorCylinderDist()+MotorCylBoltDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt(ServoTolerance);
		}

		translate([MotorThickness()/2+MotorCylBoltDist(),MotorCylinderDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt(ServoTolerance);
		}

		translate([MotorThickness()/2-MotorCylBoltDist(),MotorCylinderDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt(ServoTolerance);
		}
}else{
//nub on top of motor
		translate([MotorCylinderDiam()/2,MotorCylinderDist(),MotorHeight()])
		{
			cylinder(MotorNubHeight()+ServoTolerance*2, MotorNubDiam()/2+ServoTolerance, MotorNubDiam()/2+ServoTolerance, 0);

		}	
}

		if(boltsUp==true){
			bodyBolts(MotorWingsDist()+MotorWingsHeight(),ServoTolerance);
		}else{
			bodyBolts(MotorWingsDist()-MotorBoltHeight(),ServoTolerance);
		}
		
//hub for wires
		translate([(MotorThickness()-(MotorHubWidth()+ServoTolerance))/2,(MotorBaseLength()+ServoTolerance),MotorHubDist()])
		{
			cube([MotorHubWidth()+ServoTolerance,MotorHubLength()+ServoTolerance,MotorHubHeight()+ServoTolerance]);
		}
	}
}



//making the motor
module ServoMotor(boltsUp=true, Cylinder=true, hornCentered=false, ServoTolerance=.4)
{
	if(hornCentered==true){
		if(Cylinder==true){
			translate([-MotorThickness()/2,-MotorCylinderDist(),-(MotorHeight()+MotorCylinderHeight())-ServoTolerance*2])
			{
				motorBlock(boltsUp,Cylinder,ServoTolerance);
			}
		}else{
			translate([-MotorThickness()/2,-MotorCylinderDist(),-(MotorHeight()+MotorNubHeight())-ServoTolerance*2])
			{
				motorBlock(boltsUp,Cylinder,ServoTolerance);
			}
			}
	}else{
		if(boltsUp == true){
			translate([ServoTolerance,-MotorBaseLength()-ServoTolerance,(-MotorHeight()+(MotorHeight()-MotorWingsDist()-MotorWingsHeight()-ServoTolerance*3))])
			{	
				motorBlock(boltsUp,Cylinder,ServoTolerance);
			}
		}else{
			translate([ServoTolerance,-MotorBaseLength()-ServoTolerance,(-MotorHeight()+(MotorHeight()-MotorWingsDist())+ServoTolerance)])
			{	
				motorBlock(boltsUp,Cylinder,ServoTolerance);
			}
		}
	}

}

//toleranceMotor(boolean,boolean,boolean, number); The first boolean determines the bolt direction(true is up, false is down, default=true), the second boolean determines whether to use the large cylindrical hub (true) or the small metal nub (false)(default=true), and the third determines where the module is centered (true centers at the hub, false centers at the motor mount, default=false). The number indicated the tolerance of the motor (default is .4 mm)

ServoMotor(false,true,true,.4);







