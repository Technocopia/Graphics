function mm(i) = i*25.4; 
    rolldiam = mm(8); //diameter of the roll of paper
    tubediam = mm(2); //diameter of the cardboard tube at the center
	 rollheight = mm(11); //height of paper roll
	 thickness= mm(.25); // thickness of material
	 boltwidth = mm(1/8); // desired diameter of bolt holes
	 

module paperdirector(thickness=mm(.25), rolldiam=mm(8), tubediam=mm(2)) 
    { 
			 difference() 
         { 
              	cube([rollheight+mm(2), (rolldiam/2-tubediam/2)+mm(.5), thickness]);
    
              translate([mm(.75), -1, -1]) 
              { 
                 cube([rollheight+mm(.5), (rolldiam/2-tubediam/2)+1,thickness+2]);
    			  }
		 translate([mm(.375)-mm(.375/2), mm(.25/2), -1]) 
             { 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             } 
		 translate([mm(.375)+mm(.375/2), mm(.25/2), -1]) 
             { 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             } 
		 translate([mm(.375)+mm(.375/2), mm(.5+.25/2), -1]) 
             { 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             } 
		 translate([mm(.375)-mm(.375/2), mm(.5+.25/2), -1]) 
             { 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             } 
			translate([rollheight+mm(1.25), 0, -1])
			{
				 translate([mm(.375)-mm(.375/2), mm(.25/2), -1]) 
             	{ 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
            	} 
				 translate([mm(.375)+mm(.375/2), mm(.25/2), -1]) 
             	{ 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             	} 
		 		translate([mm(.375)+mm(.375/2), mm(.5+.25/2), -1]) 
             	{ 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             	} 
		 		translate([mm(.375)-mm(.375/2), mm(.5+.25/2), -1]) 
             	{ 
                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
             	} 
		}		
	}
 }   
    


   
paperdirector();




