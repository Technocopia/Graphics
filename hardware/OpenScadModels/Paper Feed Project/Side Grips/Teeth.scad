length=4;
radius=2;
toothHeight=.25;
toothAngle=30;
toothDist=.5;

function mm(i) = i*25.4;


module tooth()
{
	rotate([0,0,-90+toothAngle*2])
	{	
		translate([-mm(toothHeight)/2, -mm(radius)+1, mm(toothHeight)/2])
		{
			rotate([90,0,0])
			{
				cylinder(mm(toothHeight),mm(toothHeight)/2 ,0, 0);
			}
		}
	}
}


module teeth1()
{
	for ( j=[0:round((60/toothAngle))])
	{
		rotate( j * toothAngle, [0, 0, 1])
		{
			tooth();
		}
	}
}

//teeth1();

module teeth2()
{
	for (k=[0:round((40/toothAngle))])
	{
		rotate(toothAngle/2+k * toothAngle, [0, 0, 1])
		{
			tooth();
		}
	}
}

//teeth2();

module teeth()
{
	tmpValue = (mm(length)/mm(toothDist));
	echo(tmpValue );
	for(i=[0:tmpValue/2-1])
	{
		translate( [0, 0, mm((toothDist*2)*i)])
		{
			teeth1();
		}
		
		translate( [0, 0, mm((toothDist*2)*i)+mm(toothDist)])
		{
			teeth2();
		}
	}
}

teeth();





module gripper()
{
	difference()
	{
		cylinder(mm(length), mm(radius), mm(radius), 0);
		translate([-mm(radius)-1, -mm(radius)+mm(radius/4.5), -1])
		{
			cube([mm(radius)*2+2, mm(radius)*2, mm(length)+2]);
		}
	}
}

gripper();