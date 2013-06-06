    function mm(i) = i*25.4; 
    thickness = mm(.25); 
    radius = mm(4); 
	 screwWidth = mm(.2);
	 screwDepth = mm(.6);
	 nutWidth = mm(.4);
	 nutDepth = mm(.2);
	 motorHole = mm(1/16);
    
    
module baseleg(thickness=mm(.25), radius=mm(4)) 
    { 
       union()
		{
			 difference() 
         { 
              cylinder(thickness, radius, radius, 0); 
    
              translate([0, 0, -1]) 
              { 
                   cylinder(thickness+2, radius*2/3, radius*2/3, 0); 
    
              } 
					translate([0, -radius, -1]) 
					{
						cube([radius, radius*2, thickness+2]);
         		}
					
					translate([-(radius/2), radius/4, -1]) 
					{
						rotate([0, 0, -20])
						{
							cube([radius, radius, thickness+2]);
						}
					}
         	}
		translate([0, -radius+(radius-radius*2/3)/2, 0]) 
		{			
			cylinder(thickness, radius*.2, radius*.2,0);
		}	

	}
 }   
    
module holes(screwWidth=mm(.2),screwDepth=mm(.6),nutWidth=mm(.4),nutDepth=mm(.2),motorHole=mm(1/16))
{
	translate([-radius/2,2*radius/3,-1])
		{
		rotate([0,0,-20])
			{
			union()
				{
					cube ([screwDepth, screwWidth, thickness+2]);
					translate([screwDepth/4, -(nutWidth-screwWidth)/2, 0])
						{
						cube ([nutDepth, nutWidth, thickness+2]); 
						}
				}
			}
		}
	translate([-radius/2+(radius-2*radius/3)/5,2*radius/3+(radius-2*radius/3)/2,-1])
		{
		rotate([0,0,-20])
			{
			union()
				{
					cube ([screwDepth, screwWidth, thickness+2]);
					translate([screwDepth/4, -(nutWidth-screwWidth)/2, 0])
						{
						cube ([nutDepth, nutWidth, thickness+2]); 
						}
				}
			}
		}
	translate([0,-radius+(radius-2*radius/3)/2,-1])
		{
			cylinder(thickness+2, motorHole, motorHole, 0);
		}
} 
    
    
module gripleg()
{
	difference()
		{
			baseleg();
			holes();
		}
}

   
gripleg();




