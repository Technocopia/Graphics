

//When calling this module, use servoToleranceValueMotor(boolean,boolean); The first boolean determines the bolt direction(true is up, false is down) and the second determines where the module is centered (true centers at the hub, false centers at the motor mount)



//basic motor shape
height=38;
length=42;
thickness=21;

//wings for mounting
wingsheight=5.5;
wingslength=55;
wingsdist=26.5;
boltheadheight=1.4;

//cylinder on top of motor
cylinderheight=(46-38);
cylinderdiam=21;
cylinderdist=31;

//all bolts
boltheight=13.5;
boltdiam=2.1;

//body bolts
boltdist=4.35;

//cylinder bolts
cylboltdist2=3.5;
cylboltdist=7.12;

//hub for wires
hubheight=3.7;
hubwidth=6;
hublength=3;
hubdist=3;

//THIS IS THE servoToleranceValue, THIS IS PROBABLY THE ONLY THING YOU WILL NEED TO ADJUST, IF THE HOLES ARE TOO SMALL, RAISE servoToleranceValue, IF THEY ARE TOO BIG, LOWER servoToleranceValue. IF THE HOLES DON'T LINE UP, THEN START CHANGING OTHER DIMENSIONS.
//servoToleranceValue=2;





//defining a bolt
module bolt(servoToleranceValue=.75)
{
	cylinder(boltheight+servoToleranceValue, (boltdiam+servoToleranceValue)/2, (boltdiam+servoToleranceValue)/2, 0);
}

module bodyBolts(boltPlacementZ,servoToleranceValue=.75 ){
		translate([boltdist,-boltdist,boltPlacementZ])
		{
			bolt(servoToleranceValue);
		}
		
		translate([(thickness-boltdist),-boltdist,boltPlacementZ])
		{
			bolt(servoToleranceValue);
		}

		translate([boltdist,(length+boltdist),boltPlacementZ])
		{
			bolt(servoToleranceValue);
		}
		
		translate([(thickness-boltdist),(length+boltdist),boltPlacementZ])
		{
			bolt(servoToleranceValue);
		}
}

module motorBlock(boltsUp=true,servoToleranceValue=.75){
	union()
	{
//basic motor shape
		translate([-servoToleranceValue, -servoToleranceValue, -servoToleranceValue])
		{
			cube([thickness+servoToleranceValue*2, length+servoToleranceValue*2, height+servoToleranceValue*2]);
		}

//wings for mounting
		translate([-servoToleranceValue, (-servoToleranceValue+((length-wingslength)/2)), wingsdist-servoToleranceValue])
		{
			cube([thickness+servoToleranceValue*2, wingslength+servoToleranceValue*2, wingsheight+servoToleranceValue*2+boltheadheight]);
		}

//cylinder on top of motor
		translate([cylinderdiam/2,cylinderdist,height])
		{
			cylinder(cylinderheight+servoToleranceValue*2, cylinderdiam/2+servoToleranceValue, cylinderdiam/2+servoToleranceValue, 0);

		}

//body bolts

		if(boltsUp==true){
			bodyBolts(wingsdist+wingsheight,servoToleranceValue);
		}else{
			bodyBolts(wingsdist-boltheight,servoToleranceValue);
		}
		
//cylinder bolts
		translate([thickness/2,cylinderdist-cylboltdist,(height+cylinderheight)])
		{
			bolt(servoToleranceValue);
		}

		translate([thickness/2,cylinderdist+cylboltdist,(height+cylinderheight)])
		{
			bolt(servoToleranceValue);
		}

		translate([thickness/2+cylboltdist,cylinderdist,(height+cylinderheight)])
		{
			bolt(servoToleranceValue);
		}

		translate([thickness/2-cylboltdist,cylinderdist,(height+cylinderheight)])
		{
			bolt(servoToleranceValue);
		}

//hub for wires
		translate([(thickness-(hubwidth+servoToleranceValue))/2,(length+servoToleranceValue),hubdist])
		{
			cube([hubwidth+servoToleranceValue,hublength+servoToleranceValue,hubheight+servoToleranceValue]);
		}
	}
}



//making the motor
module servoToleranceValueMotor(boltsUp=true,hornCentered=false,servoToleranceValue=.75)
{
	if(hornCentered==true){
		translate([-thickness/2,-cylinderdist,-(height+cylinderheight)-servoToleranceValue*2])
		{
			motorBlock(boltsUp,servoToleranceValue);
		}
	}else{
		if(boltsUp == true){
			translate([servoToleranceValue,-length-servoToleranceValue,(-height+(height-wingsdist-wingsheight-servoToleranceValue*3))])
			{	
				motorBlock(boltsUp,servoToleranceValue);
			}
		}else{
			translate([servoToleranceValue,-length-servoToleranceValue,(-height+(height-wingsdist)+servoToleranceValue)])
			{	
				motorBlock(boltsUp,servoToleranceValue);
			}
		}
	}

}


servoToleranceValueMotor(false,false);







