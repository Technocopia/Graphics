function mm(i) = i*25.4; 
    thickness = mm(.25); 
    radius = mm(4); 
	 screwWidth = mm(.2);
	 plateWidth = mm(3);
	 inset = mm(.25);
    
    
module plate(thickness=mm(.25), radius=mm(4), screwWidth=mm(.2), plateWidth=mm(3)) 
 { 
     difference()
		{
			cube([radius-2*radius/3, plateWidth, thickness]);
			translate([inset,inset,-1])
				{
				cylinder(thickness+2, screwWidth/2, screwWidth/2,0);
				}
			translate([radius-2*radius/3-inset,inset,-1])
				{
				cylinder(thickness+2, screwWidth/2, screwWidth/2,0);
				}
			translate([inset,plateWidth-inset,-1])
				{
				cylinder(thickness+2, screwWidth/2, screwWidth/2,0);
				}
			translate([radius-2*radius/3-inset,plateWidth-inset,-1])
				{
				cylinder(thickness+2, screwWidth/2, screwWidth/2,0);
				}
 }
}   
    

plate();




