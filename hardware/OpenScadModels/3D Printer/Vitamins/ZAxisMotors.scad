use <../Tolerance.scad>

function BoxWidth()=100 + 3dPrinterTolerance();
function BoxHeight()=150 + 3dPrinterTolerance();
function HubDiameter()=70 + 3dPrinterTolerance();
function HubHeight()=180 + 3dPrinterTolerance();
function ShaftDiameter()=20 + 3dPrinterTolerance();
function ShaftHeight()=220 + 3dPrinterTolerance();

module ZAxisMotor()
{
color("Gray")
rotate([0,90,0])
{
	translate([0,0,-BoxHeight()])
		{
		union()
			{
			cylinder(ShaftHeight(), ShaftDiameter()/2, ShaftDiameter()/2);
			cylinder(HubHeight(), HubDiameter()/2, HubDiameter()/2);
			translate([-BoxWidth()/2,-BoxWidth()/2,0])
				{
				cube([BoxWidth(), BoxWidth(), BoxHeight()]);
				}
			}
		}
	}
}

ZAxisMotor();
