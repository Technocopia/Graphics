bodydiam=4.3;
holediam=2.8;
topdiam=6.3;
topheight=1.3;
wholeheight=4.3;

module metalfitting (bodydiam=4.3, holediam=2.8, topdiam=6.3, topheight=1.3, wholeheight=4.3)
	{
		difference()
			{
				union()
					{
						cylinder(topheight, topdiam/2, topdiam/2, 0);
						cylinder(wholeheight, bodydiam/2, bodydiam/2, 0);
						translate([0,0,wholeheight-topheight])
							{
								cylinder(topheight, topdiam/2, topdiam/2, 0);
							}
					}
				translate([0,0,-1])
						{
							cylinder(wholeheight+2, holediam/2, holediam/2, 0);
						}
			}
	}
	

metalfitting();			


