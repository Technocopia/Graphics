
//you can change the mm value to change the scale of hatguy (using the actual value, 25.4, makes him about 2.5 inches wide, using 2.54 makes it .25 inches wide, etc)

function mm(i) = i*2.54;

$fn=50;



module hatguy()
{
	union()
	{
		difference()
		{
			union()
			{
				difference()
				{
					cylinder(mm(.25), mm(1), mm(1), 0);
					translate([0, mm(3), -1])
					{
						cylinder(mm(.25)+2, mm(3.1), mm(3.1), 0);
					}
			
				}
			
				difference()
				{
					translate([0, mm(3.1), 0])
						{
							cylinder(mm(.25), mm(3.03), mm(3.03), 0);
						}
					translate([0, mm(3.1), -1])
						{
							cylinder(mm(.25)+2, mm(2.68), mm(2.68), 0);
						}
					translate([-mm(4),mm(.7),-1])
						{
							cube([mm(8), mm(8), mm(.25)+2]);	
						}
					translate([mm(1.17),mm(.355),-1])
						{
							cube([mm(.7), mm(.7), mm(.25)+2]);
						}
					translate([-mm(1.87),mm(.355),-1])
						{	
							cube([mm(.7), mm(.7), mm(.25)+2]);
						}
				}

				difference()
					{
					union()
					{
						translate([-mm(1),mm(.3),0])
							{
							cube([mm(2), mm(1), mm(.25)]);
							}
						translate([0,mm(.11),0])
							{
								difference()
								{
									cylinder(mm(.25), mm(1.5), mm(1.5));
									translate([-mm(2), -mm(3), -1])
									{
										cube([mm(4), mm(4), mm(.25)+2]);
									}
								}
							}
					}


					translate([-mm(3.4),mm(1),-1])
						{
							cylinder(mm(.25)+2, mm(2.5), mm(2.5), 0);
						}
					translate([mm(3.4),mm(1),-1])
						{
							cylinder(mm(.25)+2, mm(2.5), mm(2.5), 0);
						}
					}

			difference()
				{
			translate([mm(1.22),mm(.53),0])
						{
							cylinder(mm(.25), mm(.18), mm(.18), 0);
						}		
			translate([0, mm(3.1), -1])
						{
							cylinder(mm(.25)+2, mm(2.68), mm(2.68), 0);
						}
				}
		
		difference()
				{
			translate([-mm(1.22),mm(.53),0])
					{
						cylinder(mm(.25), mm(.18), mm(.18), 0);
					}	
			translate([0, mm(3.1), -1])
					{
						cylinder(mm(.25)+2, mm(2.68), mm(2.68), 0);
					}
			}
	}
}
	


			
	}
}

hatguy();