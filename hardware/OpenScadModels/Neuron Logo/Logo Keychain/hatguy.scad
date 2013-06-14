function mm(i) = i*14.7;

$fn=100;



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
					translate([0, mm(2.95), -1])
					{
						cylinder(mm(.25)+2, mm(3), mm(3), 0);
					}
			
				}
			
				difference()
				{
					translate([0, mm(3.1), 0])
						{
							cylinder(mm(.25), mm(3.02), mm(3.02), 0);
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

	translate([0,mm(.8),-1])
		{
			cylinder(mm(.25)+2, mm(.325), mm(.325), 0);
		
			translate([-mm(.15/2), mm(.38), -2])
			{
				cube([mm(.2), mm(.2), mm(.25)+4]);
			}
		
			rotate([0, 0, 90])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}
	
		rotate([0, 0, 180])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}
		
		rotate([0, 0, 270])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}

		rotate([0, 0, 45])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}

		rotate([0, 0, 135])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}	

		rotate([0, 0, 225])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}
		
		rotate([0, 0, 315])
			{	
				translate([-mm(.15/2), mm(.38), -2])
				{
					cube([mm(.2), mm(.2), mm(.25)+4]);
				}
			}
		}
	}

cylinder(mm(.1), mm(1.1), mm(1.1), 0);



difference()
				{
					translate([0, mm(3.525), 0])
						{
							cylinder(mm(.1), mm(3.52), mm(3.52), 0);
						}
					translate([0, mm(3.2), -1])
						{
							cylinder(mm(.25)+2, mm(2.68), mm(2.68), 0);
						}
					translate([-mm(4),mm(.9),-1])
						{
							cube([mm(8), mm(8), mm(.25)+2]);	
						}
					translate([mm(1.17),mm(.3),-1])
						{
							cube([mm(1.5), mm(1.5), mm(.25)+2]);
						}
					translate([-mm(2.67),mm(.3),-1])
						{	
							cube([mm(1.5), mm(1.5), mm(.25)+2]);
						}
				}


difference()
					{
					union()
					{
						translate([-mm(1),mm(.3),0])
							{
							cube([mm(2), mm(1), mm(.1)]);
							}
						translate([0,mm(.11),0])
							{
								difference()
								{
									cylinder(mm(.1), mm(1.6), mm(1.6));
									translate([-mm(2), -mm(3), -1])
									{
										cube([mm(4), mm(4.1), mm(.1)+2]);
									}
									translate([-mm(5), 0, -1])
									{
										cube([mm(4), mm(4.1), mm(.1)+2]);
									}
									translate([mm(1), 0, -1])
									{
										cube([mm(4), mm(4.1), mm(.1)+2]);
									}
								}
							}
					}
}


difference()
		{
			translate([-mm(1.22),mm(.53),0])
					{
						cylinder(mm(.1), mm(.3), mm(.3), 0);
					}	
			translate([0, mm(3.11), -1])
					{
						cylinder(mm(.1)+2, mm(2.6), mm(2.6), 0);
					}
		}

difference()
		{
			translate([mm(1.22),mm(.53),0])
					{
						cylinder(mm(.1), mm(.3), mm(.3), 0);
					}	
			translate([0, mm(3.11), -1])
					{
						cylinder(mm(.1)+2, mm(2.6), mm(2.6), 0);
					}
		}

translate([mm(1),mm(1.4),0])
{
	difference()
			{
				cylinder(mm(.1), mm(.3), mm(.3), 0);
				translate([0,0,-1])
				{
					cylinder(mm(.1)+2, mm(.2), mm(.2), 0);	
				}					
			}
}


			
	}
}

hatguy();