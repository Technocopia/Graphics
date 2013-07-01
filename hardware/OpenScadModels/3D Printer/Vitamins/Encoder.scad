//add tolerances

function EncoderWidth()=35;
function EncoderHeight()=25;
function EncoderThickness()=2;

function EncoderBoltWidth()=3;
function EncoderBoltLength()=20;
function EncoderBoltInset()=2.2;

function EncoderLongBoxWidth()=9;

function EncoderShortBoxWidth()=10;
function EncoderShortBoxLength()=13.5;
function EncoderShortBoxInset()=7;

function EncoderBoxHeight()=9+EncoderThickness();

function EncoderChipSide()=4.25;
function EncoderChipHeight()= 1;
function EncoderChipOffset()=4;



module Encoder()
{
	//centers the encoder on the chip, which is the important part
	translate([-EncoderWidth()/2,-EncoderChipOffset()-EncoderChipSide()/2,0])
	{
		union()
		{
	//base
			cube([EncoderWidth(), EncoderHeight(), EncoderThickness()]);
	//chip
			translate([EncoderWidth()/2-EncoderChipSide()/2, EncoderChipOffset(), -EncoderChipHeight()])
			{
			cube([EncoderChipSide(), EncoderChipSide(),EncoderChipHeight()]);
			}
	//boxes
			translate([EncoderShortBoxInset()+EncoderShortBoxWidth(),0,0])
			{
				cube([EncoderLongBoxWidth(), EncoderHeight(), EncoderBoxHeight()]);
			}
			translate([EncoderShortBoxInset(),EncoderHeight()-EncoderShortBoxLength(),0])
			{	
				cube([EncoderShortBoxWidth(), EncoderShortBoxLength(), EncoderBoxHeight()]);
			}
	//screws
			translate([EncoderBoltInset(),EncoderBoltInset(),-EncoderBoltLength()/2])
			{
				cylinder(EncoderBoltLength(), EncoderBoltWidth()/2, EncoderBoltWidth()/2);
			}
			translate([EncoderWidth()-EncoderBoltInset(),EncoderBoltInset(),-EncoderBoltLength()/2])
			{
				cylinder(EncoderBoltLength(), EncoderBoltWidth()/2, EncoderBoltWidth()/2);
			}
			translate([EncoderBoltInset(),EncoderHeight()-EncoderBoltInset(),-EncoderBoltLength()/2])
			{
				cylinder(EncoderBoltLength(), EncoderBoltWidth()/2, EncoderBoltWidth()/2);
			}
			translate([EncoderWidth()-EncoderBoltInset(),EncoderHeight()-EncoderBoltInset(),-EncoderBoltLength()/2])
			{
				cylinder(EncoderBoltLength(), EncoderBoltWidth()/2, EncoderBoltWidth()/2);
			}
		}
	}
}

Encoder();

