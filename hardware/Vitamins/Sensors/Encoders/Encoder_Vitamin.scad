use <../../Desired_Tolerance/Tolerance.scad>

function EncoderWidth()=35 + 3dPrinterTolerance();
function EncoderHeight()=25 + 3dPrinterTolerance();
function EncoderThickness()=3 + 3dPrinterTolerance();

function EncoderBoltWidth()=3 + 3dPrinterTolerance();
function EncoderBoltLength()=20 + 3dPrinterTolerance();
function EncoderBoltInset()=2.2 + 3dPrinterTolerance()/2;

function EncoderLongBoxWidth()=9 + 3dPrinterTolerance();

function EncoderShortBoxWidth()=10 + 3dPrinterTolerance();
function EncoderShortBoxLength()=13.5 + 3dPrinterTolerance();
function EncoderShortBoxInset()=7 + 3dPrinterTolerance()/2;

function EncoderBoxHeight()=9+EncoderThickness() + 3dPrinterTolerance();

function EncoderChipSide()=4.25 + 3dPrinterTolerance();
function EncoderChipHeight()= 1 + 3dPrinterTolerance();
function EncoderChipOffset()=4 + 3dPrinterTolerance()/2;



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

