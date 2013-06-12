

module bolt(top = 5, topheight = 1.4, body = 1.73, wholeheight = 13)
	union()
	{
		cylinder(topheight, top/2, top/2, 0);
		cylinder(wholeheight, body/2, body/2, 0);
	}

bolt();