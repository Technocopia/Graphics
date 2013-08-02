function 2XLBeltBaseHeight(3dPrinterTolerance=.4)= 1.4 + 3dPrinterTolerance;
function 2XLBeltGripHeight(3dPrinterTolerance=.4)= 2.6 + 3dPrinterTolerance;
function 2XLBeltToothWidth(3dPrinterTolerance=.4)= 2.5 + 3dPrinterTolerance;
function 2XLBeltSpaceWidth(3dPrinterTolerance=.4)= 3.1 + 3dPrinterTolerance;
function 2XLBeltWidth(3dPrinterTolerance=.4)= 6.6 + 3dPrinterTolerance;



function 2XLBeltAvgHeight(3dPrinterTolerance=.4)=(2XLBeltBaseHeight()+2XLBeltGripHeight()*2)/3;


module 2XLTimingBelt(Length=70, 3dPrinterTolerance=.4) {
	cube([Length,2XLBeltWidth(3dPrinterTolerance),2XLBeltBaseHeight(3dPrinterTolerance)]) ;
	for (inc = [0:(2XLBeltToothWidth(3dPrinterTolerance)
+2XLBeltSpaceWidth(0)-3dPrinterTolerance):Length-2XLBeltToothWidth(3dPrinterTolerance)
]) translate([inc,0,2XLBeltBaseHeight(3dPrinterTolerance)-0.01]) cube([2XLBeltToothWidth(3dPrinterTolerance)
,2XLBeltWidth(3dPrinterTolerance),(2XLBeltGripHeight(3dPrinterTolerance)-2XLBeltBaseHeight(3dPrinterTolerance))]) ;
}

2XLTimingBelt();

translate([0,10,0])
2XLTimingBelt(100, 1);

module 2XLTimingBeltSlot(Length=70, 3dPrinterTolerance=.4) {
	cube([Length,2XLBeltWidth(3dPrinterTolerance)*1.5,2XLBeltBaseHeight(3dPrinterTolerance)]) ;
	for (inc = [0:(2XLBeltToothWidth(3dPrinterTolerance)
+2XLBeltSpaceWidth(0)-3dPrinterTolerance):Length-2XLBeltToothWidth(3dPrinterTolerance)
]) translate([inc,0,2XLBeltBaseHeight(3dPrinterTolerance)-0.01]) cube([2XLBeltToothWidth(3dPrinterTolerance)
,2XLBeltWidth(3dPrinterTolerance)*1.5,(2XLBeltGripHeight(3dPrinterTolerance)-2XLBeltBaseHeight(3dPrinterTolerance))]) ;
}

translate([0,-15,0])
2XLTimingBeltSlot();