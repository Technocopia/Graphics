$fn=100;

function MagnetDiam() = 3.1;
function MagnetLength() = 6.35;

module EncoderMagnet(Cylinder=true,3dPrinterTolerance=.4){

	if(Cylinder==true){
		cylinder(MagnetLength()+3dPrinterTolerance,MagnetDiam()/2+3dPrinterTolerance,MagnetDiam()/2+3dPrinterTolerance);
	}else{
	translate([-(MagnetDiam()+3dPrinterTolerance)/2,-(MagnetDiam()+3dPrinterTolerance)/2,0]){
		cube([MagnetDiam()+3dPrinterTolerance,MagnetDiam()+3dPrinterTolerance,MagnetLength()+3dPrinterTolerance]);
		}
	}
}

EncoderMagnet(true,.4);