use <parameters.scad>
use <Vitamins/Zrod.scad>
use <Vitamins/LinearBearing.scad>
use <Vitamins/BallBearing.scad>
use <Vitamins/ZipTie.scad>

module Flare()
{
	translate([-LinearBearingDiam()/2-FlareLength()-PlasticWidth()/2,PlasticWidth()/2-GripWidth(),-SliderHeight()/4])
		{
			difference()
			{
				cube([FlareLength(),GripWidth()*2,SliderHeight()*1.5]);
				translate([PlasticWidth()*1.5,-BallBearingDiam()/2+PlasticWidth(),SliderHeight()*3/4])
				{
					rotate([0,90,0])
					{
						#BallBearing();
						}
					}
				}
		}
}
Flare();