function mm(i) = i*25.4; 
    rolldiam = mm(8); //diameter of the roll of paper
	 rollheight = mm(11); //height of a roll of paper
	 thickness= mm(.25); // thickness of material
	 boltwidth = mm(1/8); // desired diameter of bolt holes
	 dist = mm(.375); // distance the supports are seperated



module boltholes(thickness=mm(.25),boltwidth=mm(1/8), dist=mm(.375))
	{
	translate([0,0,-1])
				{
					cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
				}
	translate([0,dist,-1])
				{
					cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
				}
	}

module slotholes(thickness=mm(.25), dist=mm(.375))
	{
	translate([-mm(.51)/2, mm(.5)/2+thickness/2,-1])
	{
	cube ([mm(.51), thickness, thickness+2]);
	}
	translate([-mm(.51)/2, mm(.5)+thickness,-1])
	{
	cube ([mm(.51), thickness, thickness+2]);
	}
	}

module base(thickness = mm(.25), rolldiam=mm(8), boltwidth=mm(1/8),dist = mm(.375))
	{
		difference()
			{
				cube([rolldiam+mm(1), rollheight+mm(1.5)+dist, thickness]);
				translate([0,0,0])
				{
					union()
						{	
					translate([mm(1.5),mm(.5),0])
					{
						boltholes();
					}
					translate([rolldiam/2+mm(1/2),0,0])
					{
						slotholes();
					}
					translate([rolldiam/2+rolldiam/4+mm(1/2),0,0])
					{
						slotholes();
					}
					translate([rolldiam/4+mm(1/2),0,0])
					{
						slotholes();
					}					
					translate([rolldiam-mm(.5),mm(.5),0])
					{
						boltholes();
					}
					translate([mm(1.5),rollheight+mm(1),0])
					{
						boltholes();
					}
					translate([rolldiam/2+mm(1/2),rollheight+mm(.5),0])
					{
						slotholes();
					}
					translate([rolldiam/2+rolldiam/4+mm(1/2),rollheight+mm(.5),0])
					{
						slotholes();
					}
					translate([rolldiam/4+mm(1/2),rollheight+mm(.5),0])
					{
						slotholes();
					}
					translate([rolldiam-mm(.5),rollheight+mm(1),0])
					{
						boltholes();
					}
					
				}
			}
	}
}

base();