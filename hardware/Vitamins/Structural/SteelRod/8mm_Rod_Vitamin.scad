function 8mmRodLength(3dPrinterTolerance=.4)=1000+3dPrinterTolerance;
function 8mmRodDiameter(3dPrinterTolerance=.4)=8+3dPrinterTolerance;  //base case: 8
function 8mmRodRadius(3dPrinterTolerance=.4)=8mmRodDiameter()/2;

module 8mmRod(3dPrinterTolerance=.4)
{
color("Silver")
cylinder(8mmRodLength(3dPrinterTolerance), 8mmRodRadius(3dPrinterTolerance), 8mmRodRadius(3dPrinterTolerance));
}

8mmRod(.4);
