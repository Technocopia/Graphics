height=21;
radius=50.5;

module hole()
{
	cylinder((height+2),(15.6),(15.6));
}

module counterbore()
{
		cylinder((9),(20),(20));
}

difference()
{
	cylinder((height),(radius),(radius*.75), 0);
	hole();
	translate([0,0,-1])
	{
	counterbore();
	}
}


