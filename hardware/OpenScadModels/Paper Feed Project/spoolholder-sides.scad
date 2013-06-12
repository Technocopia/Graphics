function mm(i) = i*25.4; 
    rolldiam = mm(8); //diameter of the roll of paper
    tubediam = mm(2); //diameter of the cardboard tube at the center
	 thickness= mm(.25); // thickness of material
	 boltwidth = mm(1/8); // desired diameter of bolt holes
	 boltdepth = mm(.5); // desired depth of bolts
	 nutwidth = mm(1/4); //desired width of nuts
	 nutheight = mm(1/8); //desired height of nuts
	 roddiam = mm(1/4); // diameter of the rod the spool is hung on

module bolthole(thickness=mm(.25), rolldiam=mm(8), tubediam=mm(2))
	{
	union()
		{
			cube ([boltwidth, boltdepth+1, thickness+2]);
			translate([-(nutwidth/2-boltwidth/2), boltdepth/3, 0])
				{
					cube([nutwidth, nutheight, thickness+2]);
				}
		}
	}

	 

module side(thickness=mm(.25), rolldiam=mm(8), tubediam=mm(2),roddiam = mm(1/4)) 
    { 
			 difference() 
         { 
         		union()
				{
			cube([rolldiam, rolldiam/2-tubediam/2+mm(2), thickness]);
			
			translate([rolldiam/2, -thickness+2, 0])
						{
						cube ([mm(.5), thickness, thickness]);	
						}
			translate([rolldiam/2+rolldiam/4, -thickness+2, 0])
						{
						cube ([mm(.5), thickness, thickness]);	
						}
				translate([rolldiam/4, -thickness+2, 0])
						{
						cube ([mm(.5), thickness, thickness]);	
						}
				}
				translate([rolldiam, 0, -1])
					{
					rotate([0, 0, 30])
						{
						cube([rolldiam, rolldiam, thickness+2]);
						}
					}
				rotate([0,0,180])
					{
					translate([-rolldiam/2, -rolldiam+mm(1), -1])
						{
						rotate([0, 0, -30])
							{
							cube([rolldiam, rolldiam, thickness+2]);
							}
						}
					}
				translate([3*(rolldiam/2-tubediam/2)/2, (rolldiam/2-tubediam/2), -1])
				{
					cube ([rolldiam/2-tubediam/2, rolldiam/2-tubediam/2, thickness+2]);
				}
				translate([3*(rolldiam/2-tubediam/2)/2+mm(.25/2), (rolldiam/2-tubediam/2)-boltdepth+1, -1])
				{
					bolthole();
				}
				translate([3*(rolldiam/2-tubediam/2)/2+mm(.25/2+.5), (rolldiam/2-tubediam/2)-boltdepth+1, -1])
				bolthole();

				translate([rolldiam -mm(1), boltdepth, -1])
					rotate([0,0,180])
						{
							bolthole();
						}
				translate([mm(1), boltdepth, -1])
					rotate([0,0,180])
						{
							bolthole();
						}
										
				translate([rolldiam/2, rolldiam/2, -1])
						{
						cylinder(thickness+2, roddiam/2, roddiam/2, 0);
						}


//				translate([rolldiam/2-tubediam/2+mm(1), rolldiam/2, -1])
//					{
//						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
//					}
//				translate([rolldiam/2-tubediam/2+mm(.5), rolldiam/2, -1])
//					{
//						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
//					}
//				translate([rolldiam/2-tubediam/2+mm(.5), rolldiam/2-mm(.5), -1])
//					{
//						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
//					}
//				translate([rolldiam/2-tubediam/2+mm(1), rolldiam/2-mm(.5), -1])
//					{
//						cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
//					}

	 }
}



side();

module tubehold(tubediam=mm(2),thickness=mm(.25), rolldiam=mm(8),) 
    {
		translate([rolldiam/2-mm(.25), rolldiam/2-tubediam/2+mm(1)-mm(.25), 0])
			{
			cylinder(thickness+2, tubediam/2, tubediam/2, 0);
			}
	 }

//#tubehold();



//	cube([rollheight+mm(2), (rolldiam/2-tubediam/2)+mm(.5), thickness])//;
    
//              translate([mm(.75), -1, -1]) 
//              { 
  //               cube([rollheight+mm(.5), (rolldiam/2-tubediam/2)+1,thickness+2]);
 //   			  }
//		 translate([mm(.375)-mm(.375/2), mm(.25/2), -1]) 
//             { 
 //                cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
 //            } 
//		 translate([mm(.375)+mm(.375/2), mm(.25/2), -1]) 
 //            { 
 //                cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
  //           } 
	//	 translate([mm(.375)+mm(.375/2), mm(.25+.25/2), -1]) 
   //          { 
    //             cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
  //           } 
	//	 translate([mm(.375)-mm(.375/2), mm(.25+.25/2), -1]) 
  //           { 
  //               cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
  //           } 
//			translate([rollheight+mm(1.25), 0, -1])
//			{
//				 translate([mm(.375)-mm(.375/2), mm(.25/2), -1]) 
 //            	{ 
 //                cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
 //           	} 
//				 translate([mm(.375)+mm(.375/2), mm(.25/2), -1]) 
 //            	{ 
  //               cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
//             	} 
//		 		translate([mm(.375)+mm(.375/2), mm(.25+.25/2), -1]) 
//             	{ 
//                 cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
//             	} 
//
  //
    //             cylinder(thickness+2, boltwidth/2, boltwidth/2, 0);
    //         	} 
		//}		
	//}
// }   
    


   





