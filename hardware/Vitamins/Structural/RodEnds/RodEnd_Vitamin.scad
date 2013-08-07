function RodEndTopWidth(3dPrinterTolerance=.4) = 10+3dPrinterTolerance;
function RodEndLength(3dPrinterTolerance=.4) = 2.4+RodEndTopWidth(3dPrinterTolerance)/2+RodEndTopWidth(3dPrinterTolerance)/2+3dPrinterTolerance;
function RodDiam(3dPrinterTolerance=.4)=6.2+3dPrinterTolerance;
function RodLength(3dPrinterTolerance=.4)=10+3dPrinterTolerance;

function RodEndHoleDiam(3dPrinterTolerance=.4) = 3.6+3dPrinterTolerance;
function RodEndThickness(3dPrinterTolerance=.4) = 3+3dPrinterTolerance;
function BallSwivelFlangeDiam(3dPrinterTolerance=.4)= 5.5+3dPrinterTolerance;
function BallSwivelFlangeHeight(3dPrinterTolerance=.4)= 7+3dPrinterTolerance;


module RodEnd(3dPrinterTolerance=.4)
{	
	translate([0,-RodEndThickness(3dPrinterTolerance)/2,0])
	rotate([0,-90,0])
	rotate([0,90,90])
	{
		difference()
		{
			union()
			{
				cylinder(RodEndThickness(3dPrinterTolerance), RodEndTopWidth(3dPrinterTolerance)/2, RodEndTopWidth(3dPrinterTolerance)/2);
				translate([0,-RodEndTopWidth(3dPrinterTolerance)/2,0])	
				{	
					cube([RodEndLength(3dPrinterTolerance)-RodEndTopWidth(3dPrinterTolerance)/2,RodEndTopWidth(3dPrinterTolerance), RodEndThickness(3dPrinterTolerance)]);
				}
				translate([0,0,(RodEndThickness(3dPrinterTolerance)-BallSwivelFlangeHeight(3dPrinterTolerance))/2])
				{
					cylinder(BallSwivelFlangeHeight(3dPrinterTolerance), BallSwivelFlangeDiam(3dPrinterTolerance)/2, BallSwivelFlangeDiam(3dPrinterTolerance)/2);
				}
				translate([RodEndLength(3dPrinterTolerance)-RodEndTopWidth(3dPrinterTolerance)/2-RodLength()/4,0,RodEndThickness(3dPrinterTolerance)/2])
				rotate([0,90,0])
				{
					cylinder(RodLength(3dPrinterTolerance)*1.25,RodDiam(3dPrinterTolerance)/2,RodDiam(3dPrinterTolerance)/2);
				
				}			
			}	
		translate([0,0,-RodEndThickness(3dPrinterTolerance)/2-1])
				{
					cylinder(BallSwivelFlangeHeight(3dPrinterTolerance)+2, RodEndHoleDiam(3dPrinterTolerance)/2, RodEndHoleDiam(3dPrinterTolerance)/2);
				}
		}
	}
}


//RodEnd();


module RodEndSlot(3dPrinterTolerance=.4)
{
 union()
	{
		RodEnd();
		rotate([90,0,0])
		{
			translate([0,0,-BallSwivelFlangeHeight(3dPrinterTolerance)/2])
			{
				cylinder(BallSwivelFlangeHeight(3dPrinterTolerance), BallSwivelFlangeDiam(3dPrinterTolerance)/2, BallSwivelFlangeDiam(3dPrinterTolerance)/2);
		translate
			}
		}
	}
}

RodEndSlot();



