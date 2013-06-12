bodydiam=2.96;
holediam=2.38;
topdiam=4.91;
topheight=0.4;
wholeheight=4.87;

module metalfitting (bodydiam=2.96, holediam=2.38, topdiam=4.91, topheight=0.4, wholeheight=4.87)
	{
	rotate([180,0,0])
		{
		difference()
			{
				union()
					{
						cylinder(topheight, topdiam/2, topdiam/2, 0);
						cylinder(wholeheight, bodydiam/2, bodydiam/2, 0);
					}
				translate([0,0,-1])
						{
							cylinder(wholeheight+2, holediam/2, holediam/2, 0);
						}
			}
	}
}	

metalfitting();			


