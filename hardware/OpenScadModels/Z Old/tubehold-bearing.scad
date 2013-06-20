function mm(i) = i*25.4; 
    tubediam = mm(1.5); //diameter of the cardboard tube at the center
	 thickness= mm(.75); // thickness of material
	 boltwidth = mm(.1631); // desired diameter of bolt holes
	 bearingdiam = mm(.8125);
	 bearingheight = mm(.275);



module tubehold(tubediam=mm(2),thickness=mm(.75), boltwidth=mm(.1631),bearingdiam=mm(.8125), bearingheight = mm(.275))
    {
		union()
		{	
			difference()
			{	
			cylinder(thickness+2, (tubediam-(tubediam/(3.5)))/2, tubediam/2, 0);
				union()
					{				
					translate([-tubediam/5, -tubediam/5, -1])
						{
							cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					
					translate([tubediam/5, tubediam/5, -1])
						{
							cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					translate([0, 0, -1])
						{
							cylinder(thickness+4, bearingdiam/2, bearingdiam/2, 0);
						}
					}
				}
			difference()
				{	
					cylinder(thickness-bearingheight, bearingdiam/2, bearingdiam/2, 0);	
				translate([0, 0, -1])
					{
						cylinder(thickness-bearingheight+4, bearingdiam/2.5, bearingdiam/2.5, 0);
					}	
			}
		}
	 }

tubehold();
