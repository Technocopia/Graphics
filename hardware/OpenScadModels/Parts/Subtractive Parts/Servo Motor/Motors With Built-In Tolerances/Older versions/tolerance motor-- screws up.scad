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


//THIS IS THE TOLERANCE, THIS IS PROBABLY THE ONLY THING YOU WILL NEED TO ADJUST, IF THE HOLES ARE TOO SMALL, RAISE TOLERANCE, IF THEY ARE TOO BIG, LOWER TOLERANCE. IF THE HOLES DON'T LINE UP, THEN START CHANGING OTHER DIMENSIONS.
tolerance=.75;




//defining a bolt
module bolt()
{
	cylinder(boltheight+tolerance, (boltdiam+tolerance)/2, (boltdiam+tolerance)/2, 0);
}



//making the motor
module toleranceMotor()
{
	union()
	{

//basic motor shape
		translate([-tolerance, -tolerance, -tolerance])
		{
			cube([thickness+tolerance*2, length+tolerance*2, height+tolerance*2]);
		}

//wings for mounting
		translate([-tolerance, (-tolerance+((length-wingslength)/2)), (wingsdist-tolerance-boltheadheight)])
		{
			cube([thickness+tolerance*2, wingslength+tolerance*2, wingsheight+tolerance*2+boltheadheight]);
		}

//cylinder on top of motor
		translate([cylinderdiam/2,cylinderdist,height])
		{
			cylinder(cylinderheight+tolerance*2, cylinderdiam/2+tolerance, cylinderdiam/2+tolerance, 0);

		}

//body bolts
		translate([boltdist,-boltdist,(wingsdist+wingsheight)])
		{
			bolt();
		}
		
		translate([(thickness-boltdist),-boltdist,(wingsdist+wingsheight)])
		{
			bolt();
		}

		translate([boltdist,(length+boltdist),(wingsdist+wingsheight)])
		{
			bolt();
		}
		
		translate([(thickness-boltdist),(length+boltdist),(wingsdist+wingsheight)])
		{
			bolt();
		}


//cylinder bolts
		translate([thickness/2,cylinderdist-cylboltdist,(height+cylinderheight)])
		{
			bolt();
		}

		translate([thickness/2,cylinderdist+cylboltdist,(height+cylinderheight)])
		{
			bolt();
		}

		translate([thickness/2+cylboltdist,cylinderdist,(height+cylinderheight)])
		{
			bolt();
		}

		translate([thickness/2-cylboltdist,cylinderdist,(height+cylinderheight)])
		{
			bolt();
		}

//hub for wires
		translate([(thickness-(hubwidth+tolerance))/2,(length+tolerance),hubdist])
		{
			cube([hubwidth+tolerance,hublength+tolerance,hubheight+tolerance]);
		}


	}
}


toleranceMotor();





