use <../Tolerance.scad>

function DriveBeltWidth(3dPrinterTolerance=.4)= 6.1 + 3dPrinterTolerance; //normally 6.1
function DriveBeltBaseHeight(3dPrinterTolerance=.4)= .8 + 3dPrinterTolerance;
function DriveBeltGripHeight(3dPrinterTolerance=.4)= 1.3 + 3dPrinterTolerance;
function DriveBeltAvgHeight(3dPrinterTolerance=.4)=(DriveBeltBaseHeight()+DriveBeltGripHeight()*2)/3;