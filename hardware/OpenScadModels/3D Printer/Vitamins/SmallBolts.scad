use <../Parameters.scad>

function BoltDiameter()= 6 + 3dPrinterTolerance();
function BoltLength()= 40 + 3dPrinterTolerance();
function BoltHeadDiameter()= 12 + 3dPrinterTolerance();
function BoltHeadHeight()= 5 + 3dPrinterTolerance();

//err on the side of larger tolerances for bolts

module bolt()
{
	union()
	{
		translate([0,0,-BoltLength()])
		{
			cylinder(BoltLength(), BoltDiameter()/2,BoltDiameter()/2);
		}
		cylinder(BoltHeadHeight(), BoltHeadDiameter()/2,BoltHeadDiameter()/2);
	}
}

bolt();