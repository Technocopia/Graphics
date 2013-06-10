
 function mm(i) = i*25.4; 
    tubediam = mm(1.5); //diameter of the spool hole
	 thickness= mm(.5); // thickness of plug
	 boltwidth = mm(.165+.04); // diameter of bolt holes ( plus an adjustment factor)
	 bearingdiam = mm(.8868+.04); //diameter of the bearing (plus an adjustment factor)
	 bearingheight = mm(.275); //thickness of the bearing



module tubehold(tubediam=mm(1.5),thickness=mm(.5), boltwidth=mm(.1631),bearingdiam=mm(.8125), bearingheight = mm(.275))
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
