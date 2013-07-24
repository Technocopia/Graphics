
//When calling this module, use toleranceMotor(boolean,boolean); The first boolean determines the bolt direction(true is up, false is down) and the second determines where the module is centered (true centers at the hub, false centers at the motor mount)

//THIS IS FOR IF YOU USE OTHER KINDS OF MOTORS, MOTOROUTCROP IS THE DISTANCE FROM THE MOUNTING PLATE TO THE BUISNESS END OF YOUR MOTOR, IF YOU EVER NEED TO SWITCH TO ANOTHER JUST CHANGE THIS VALUE TO THE ACTUAL VALUE

function MotorOutcrop()= MotorCylinderHeight()+(MotorHeight()-(MotorWingsHeight()+MotorWingsDist()))-MotorTolerance();


//for use when the motor is incorporated into parts
	//this is distance, the short way, from the edge of the motor to the center of the hub
function MotorCenterDist()=(MotorCylinderDiam()/2) + ((MotorLength()-MotorBaseLength())/2-MotorTolerance()*2); 

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

//THIS IS THE TOLERANCE, THIS IS PROBABLY THE ONLY THING YOU WILL NEED TO ADJUST, IF THE HOLES ARE TOO SMALL, RAISE MOTORTOLERANCE(), IF THEY ARE TOO BIG, LOWER MOTORTOLERANCE(). IF THE HOLES DON'T LINE UP, THEN START CHANGING OTHER DIMENSIONS.
function MotorTolerance()=.4;



//defining a bolt
module MotorBolt()
{
	cylinder(MotorBoltHeight()+MotorTolerance(), (MotorBoltDiam()+MotorTolerance())/2, (MotorBoltDiam()+MotorTolerance())/2, 0);
}

module MotorBodyBolts(boltPlacementZ){
		translate([MotorBoltDist(),-MotorBoltDist(),boltPlacementZ])
		{
			MotorBolt();
		}
		
		translate([(MotorThickness()-MotorBoltDist()),-MotorBoltDist(),boltPlacementZ])
		{
			MotorBolt();
		}

		translate([MotorBoltDist(),(MotorBaseLength()+MotorBoltDist()),boltPlacementZ])
		{
			MotorBolt();
		}
		
		translate([(MotorThickness()-MotorBoltDist()),(MotorBaseLength()+MotorBoltDist()),boltPlacementZ])
		{
			MotorBolt();
		}
}

module MotorBlock(boltsUp=true, Cylinder=true){
	union()
	{
//basic motor shape
		translate([-MotorTolerance(), -MotorTolerance(), -MotorTolerance()])
		{
			cube([MotorThickness()+MotorTolerance()*2, MotorBaseLength()+MotorTolerance()*2, MotorHeight()+MotorTolerance()*2]);
		}

//wings for mounting
		translate([-MotorTolerance(), (-MotorTolerance()+((MotorBaseLength()-MotorLength())/2)), MotorWingsDist()-MotorTolerance()])
		{
			cube([MotorThickness()+MotorTolerance()*2, MotorLength()+MotorTolerance()*2, MotorWingsHeight()+MotorTolerance()*2+MotorBoltHeadHeight()]);
		}
//determines if you should make the cylinder or a nub
if(Cylinder==true){
//cylinder on top of motor
		translate([MotorCylinderDiam()/2,MotorCylinderDist(),MotorHeight()])
		{
			cylinder(MotorCylinderHeight()+MotorTolerance()*2, MotorCylinderDiam()/2+MotorTolerance(), MotorCylinderDiam()/2+MotorTolerance(), 0);

		}

//cylinder bolts
		translate([MotorThickness()/2,MotorCylinderDist()-MotorCylBoltDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt();
		}

		translate([MotorThickness()/2,MotorCylinderDist()+MotorCylBoltDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt();
		}

		translate([MotorThickness()/2+MotorCylBoltDist(),MotorCylinderDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt();
		}

		translate([MotorThickness()/2-MotorCylBoltDist(),MotorCylinderDist(),(MotorHeight()+MotorCylinderHeight())])
		{
			MotorBolt();
		}
}else{
//nub on top of motor
		translate([MotorCylinderDiam()/2,MotorCylinderDist(),MotorHeight()])
		{
			cylinder(MotorNubHeight()+MotorTolerance()*2, MotorNubDiam()/2+MotorTolerance(), MotorNubDiam()/2+MotorTolerance(), 0);

		}	
}

//body bolts

		if(boltsUp==true){
			MotorBodyBolts(MotorWingsDist()+MotorWingsHeight());
		}else{
			MotorBodyBolts(MotorWingsDist()-MotorBoltHeight());
		}


//hub for wires
		translate([(MotorThickness()-(MotorHubWidth()+MotorTolerance()))/2,(MotorBaseLength()+MotorTolerance()),MotorHubDist()])
		{
			cube([MotorHubWidth()+MotorTolerance(),MotorHubLength()+MotorTolerance(),MotorHubHeight()+MotorTolerance()]);
		}
	}
}



//making the motor
module ServoMotor(boltsUp=true,hornCentered=false, Cylinder=true)
{
	if(hornCentered==true){
		translate([-MotorThickness()/2,-MotorCylinderDist(),-(MotorHeight()+MotorCylinderHeight())-MotorTolerance()*2])
		{
			MotorBlock(boltsUp, Cylinder);
		}
	}else{
		if(boltsUp == true){
			translate([MotorTolerance(),(MotorLength()-MotorBaseLength())/2+MotorTolerance(),(-MotorHeight()+(MotorHeight()-MotorWingsDist()-MotorWingsHeight()-MotorTolerance()*3))])
			{	
				MotorBlock(boltsUp, Cylinder);
			}
		}else{
			translate([MotorTolerance(),(MotorLength()-MotorBaseLength())/2+MotorTolerance(),(-MotorHeight()+(MotorHeight()-MotorWingsDist())+MotorTolerance())])
			{	
				MotorBlock(boltsUp, Cylinder);
			}
		}
	}

}


ServoMotor(true,false,false);











