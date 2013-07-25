use <../Tolerance.scad>

function DriveBeltWidth()= 6.1 + 3dPrinterTolerance(); //normally 6.1
function DriveBeltBaseHeight()= .8 + 3dPrinterTolerance();
function DriveBeltGripHeight()= 1.3 + 3dPrinterTolerance();
function DriveBeltAvgHeight()=(DriveBeltBaseHeight()+DriveBeltGripHeight()*2)/3;