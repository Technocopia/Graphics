function ZipTieWidth()=2.5;
function ZipTieHeight()=1;
function ZipTieLength()=100;

module ZipTie(3dPrinterTolerance=.4)
{
	cube([ZipTieHeight()+3dPrinterTolerance,ZipTieLength()+3dPrinterTolerance, ZipTieWidth()+3dPrinterTolerance]);
}

ZipTie();