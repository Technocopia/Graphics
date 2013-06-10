	 tubediam = 38.12; //diameter of the spool hole in mm
	 thickness= 12.7; // thickness of plug in mm
	 boltwidth = 5+.04; // diameter of bolt holes in mm( plus an adjustment factor)
	 bearingdiam = 21.9+.04; //diameter of the bearing (plus an adjustment factor)
	 bearingheight = 7; //thickness of the bearing



module tubehold(tubediam=38.12,thickness=12.7, boltwidth=5+.04,bearingdiam=21.9+.04, bearingheight = 7)
    {
		topdiam=tubediam*4/3;
		union()
		{	
			difference()
			{	
			cylinder(thickness+2, (topdiam-(topdiam/(3.2)))/2, topdiam/2, 0);
				union()
					{				
					translate([-topdiam/5, -topdiam/5, -1])
						{
							cylinder(thickness+4, boltwidth/2, boltwidth/2, 0);
						}
					
					translate([topdiam/5, topdiam/5, -1])
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
