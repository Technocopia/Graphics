use <../Tolerance.scad>

function BoltDiameter()= 7 + 3dPrinterTolerance();
function BoltLength()= 38 + 3dPrinterTolerance();
function BoltHeadDiameter()= 13 + 3dPrinterTolerance();
function BoltHeadHeight()= 8 + 3dPrinterTolerance();

//err on the side of larger tolerances for bolts

module LargeBolt()
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

LargeBolt();
