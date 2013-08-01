function 2XLBeltBaseHeight(3dPrinterTolerance=.4)= 1.4 + 3dPrinterTolerance;
function 2XLBeltGripHeight(3dPrinterTolerance=.4)= 2.6 + 3dPrinterTolerance;
function 2XLBeltToothWidth(3dPrinterTolerance=.4)= 2.5 + 3dPrinterTolerance;
function 2XLBeltSpaceWidth(3dPrinterTolerance=.4)= 3.1 + 3dPrinterTolerance;
function 2XLBeltWidth(3dPrinterTolerance=.4)= 6.6 + 3dPrinterTolerance;



function 2XLBeltAvgHeight(3dPrinterTolerance=.4)=(2XLBeltBaseHeight()+2XLBeltGripHeight()*2)/3;


module belt(Length=70, 3dPrinterTolerance=.4) {
	cube([Length,2XLBeltWidth(3dPrinterTolerance),2XLBeltBaseHeight(3dPrinterTolerance)]) ;
	for (inc = [0:(2XLBeltToothWidth(3dPrinterTolerance)
+2XLBeltSpaceWidth(3dPrinterTolerance)):Length-2XLBeltToothWidth(3dPrinterTolerance)
]) translate([inc,0,2XLBeltBaseHeight(3dPrinterTolerance)-0.01]) cube([2XLBeltToothWidth(3dPrinterTolerance)
,2XLBeltWidth(3dPrinterTolerance),(2XLBeltGripHeight(3dPrinterTolerance)-2XLBeltBaseHeight(3dPrinterTolerance))]) ;
}

belt();

translate([0,10,0])
belt(100, .6);