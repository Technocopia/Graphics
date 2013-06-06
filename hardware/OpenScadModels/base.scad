function mm(i) = i*25.4; 
    rolldiam = mm(8); //diameter of the roll of paper
	 rollheight = mm(11); //height of a roll of paper
	 thickness= mm(.25); // thickness of material
	 boltwidth = mm(1/8); // desired diameter of bolt holes


module base(thickness = mm(.25), rolldiam=mm(8), boltwidth=mm(1/8))
	{
		difference()
			{
				cube([rolldiam+mm(1), rollheight+mm(1.1), thickness]);
				translate([0,0,0])
				{
					union()
						{	
					translate([mm(1)+mm(1/2),mm(.5),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam/2+mm(1/2),mm(.5),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([mm(1)+mm(1/2),mm(.5)+mm(.375),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam/2+mm(1/2),mm(.5)+mm(.375),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam-mm(1)+mm(1/2),mm(.5),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam-mm(1)+mm(1/2),mm(.5)+mm(.375),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([mm(1)+mm(1/2),rollheight+mm(1)-mm(.5),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam/2+mm(1/2),rollheight+mm(1)-mm(.5),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([mm(1)+mm(1/2),rollheight+mm(1)-mm(.5)-mm(.375),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam/2+mm(1/2),rollheight+mm(1)-mm(.5)-mm(.375),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam-mm(1)+mm(1/2),rollheight+mm(1)-mm(.5),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
					translate([rolldiam-mm(1)+mm(1/2),rollheight+mm(1)-mm(.5)-mm(.375),-1])
					{
						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
					}
				}
			}
	}
}

base();