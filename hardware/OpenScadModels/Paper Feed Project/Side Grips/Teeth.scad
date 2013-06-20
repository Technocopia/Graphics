length=4; // desired length of gripper
width=2; //desired width of gripper
toothHeight=.25; // length of teeth
toothDist=.5; // distance between teeth
screwwidth= .2;
screwdepth= .2;
inset = .25;

function mm(i) = i*25.4;


//relation obtained via WolframAlpha, resulting from solving the equation chord length = 2 sqrt(r^2-d^2) for radius, where d=distance from center (in this case radius-radius/4.5)

//The distance radius-radius/4.5 is pretty arbitrary, it was just chosen because it seemed like it left a decent amount of curve for the teeth, if you want it  more curved, lower 4.5 (to 3 or 2 or whatever else), and if you want it less curved, raise it. Then solve for a new decimal, I guess.

radius = 0.795495*width;


//height of the gripper, just used to offset it in z.
height = radius/4.5;


//attempting to make the teeth stay the same distance apart even as you change the width

arc=2*asin((width/(2*radius))*(3.1415/180));
echo(arc);
toothAngle = (toothDist/(2*(3.1415)*radius))*360;


module tooth()
{

//this coefficent is pretty much a magic number, if you need to change toothdist for any reason and it makes the teeth all offset, just change 2.1 to different values till it works.
	rotate([0,0,-mm(toothDist)*2.1])
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
	for (k=[0:round((60/toothAngle))])
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
	tmpValue = round((mm(length)/mm(toothDist)));
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

module holes()
{
	union()
	{
		translate([mm(width/2)-mm(inset),mm(inset),-1])
			{
			cylinder(mm(screwdepth)+1, mm(screwwidth)/2, mm(screwwidth)/2,0);
			}
		translate([-mm(width/2)+mm(inset),mm(inset),-1])
			{	
			cylinder(mm(screwdepth)+1, mm(screwwidth)/2, mm(screwwidth)/2,0);
			}
		translate([mm(width/2)-mm(inset),mm(length)-mm(inset),-1])
			{
			cylinder(mm(screwdepth)+1, mm(screwwidth)/2, mm(screwwidth)/2,0);
			}
		translate([-mm(width/2)+mm(inset),mm(length)-mm(inset),-1])
			{	
			cylinder(mm(screwdepth)+1, mm(screwwidth)/2, mm(screwwidth)/2,0);
			}
	}
}




module gripper()
{
	difference()
	{
		translate([0, 0, -mm(radius)+mm(height)])
		{
			rotate([-90,0,0])
			{
				union()
				{	
					difference()
					{
						cylinder(mm(length), mm(radius), mm(radius), 0);
						translate([-mm(radius)-1, -mm(radius)+mm(radius/4.5), -1])
						{
							cube([mm(radius)*2+2, mm(radius)*2, mm(length)+2]);
						}

								
					}
					teeth();
				}
			}
		}
		holes();
	}
}

gripper();