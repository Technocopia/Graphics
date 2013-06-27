use <../Parameters.scad>

function BoltDiameter()= 20 + 3dPrinterTolerance();
function BoltLength()= 150 + 3dPrinterTolerance();
function BoltHeadDiameter()= 40 + 3dPrinterTolerance();
function BoltHeadHeight()= 17 + 3dPrinterTolerance();

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
