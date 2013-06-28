function PullyBodyWidth() = 22;
function PullyDiam() = 30;

module Pully()
{
	cylinder(PullyBodyWidth(), PullyDiam()/2, PullyDiam()/2);
}

Pully();