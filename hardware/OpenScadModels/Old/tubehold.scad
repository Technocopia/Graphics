function mm(i) = i*25.4; 
    tubediam = mm(2); //diameter of the cardboard tube at the center
	 thickness= mm(.75); // thickness of material
	 boltwidth = mm(1/8); // desired diameter of bolt holes
//Adding a few comments
//And again

module tubehold(tubediam=mm(2),thickness=mm(.75), boltwidth=mm(1/8),) 
    {
		difference()
			{	
			cylinder(thickness+2, (tubediam-mm(1/2))/2, tubediam/2, 0);
			translate([-tubediam/8,-tubediam/8,0])
				{
				union()
					{				
					translate([0, 0, -1])
						{
						cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					translate([0, mm(.5), -1])
						{
							cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					translate([mm(.5), 0, -1])
						{
							cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					translate([mm(.5), mm(.5), -1])
						{
							cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					}
				}
				
		}
	 }

tubehold();
