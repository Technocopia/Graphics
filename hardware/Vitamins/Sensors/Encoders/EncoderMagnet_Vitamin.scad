$fn=100;

function MagnetDiam(3dPrinterTolerance=.4) = 4.4+3dPrinterTolerance;
function MagnetLength(3dPrinterTolerance=.4) = 9.6+3dPrinterTolerance;

module EncoderMagnet(Cylinder=true,3dPrinterTolerance=.4){

	if(Cylinder==true){
		cylinder(MagnetLength(3dPrinterTolerance),MagnetDiam(3dPrinterTolerance)/2,MagnetDiam(3dPrinterTolerance)/2);
	}else{
	translate([-(MagnetDiam(3dPrinterTolerance))/2,-(MagnetDiam(3dPrinterTolerance))/2,0]){
		cube([MagnetDiam(3dPrinterTolerance),MagnetDiam(3dPrinterTolerance),MagnetLength(3dPrinterTolerance)]);
		}
	}
}

EncoderMagnet(true,.4);