import PyQt4
from PyQt4 import QtGui,QtCore
import FreeCAD
import sys
import os

class myWidget_Ui(object):

	def setupUi(self, myWidget):

		myWidget.setObjectName("my Nice New Widget")
		myWidget.resize(QtCore.QSize(QtCore.QRect(0,0,327,421).size()).expandedTo(myWidget.minimumSizeHint())) # sets size of the widget

		self.DEVICE_CBOX = QtGui.QComboBox(myWidget)
		self.DEVICE_CBOX.setGeometry(QtCore.QRect(20, 140, 111, 31))
		self.DEVICE_CBOX.setObjectName(("DEVICE_CBOX"))

		self.MainLogo = QtGui.QLabel(myWidget)
		self.MainLogo.setGeometry(QtCore.QRect(90, 0, 111, 121))
		self.MainLogo.setText((""))
		self.MainLogo.setPixmap(QtGui.QPixmap((":/me/test/hat.png")))
		self.MainLogo.setObjectName(("MainLogo"))

		self.SEND_PBUTTON = QtGui.QPushButton(myWidget)
		self.SEND_PBUTTON.setGeometry(QtCore.QRect(160, 380, 87, 27))
		self.SEND_PBUTTON.setObjectName(("SEND_PBUTTON"))

		self.DEVICE_LABEL = QtGui.QLabel(myWidget)
		self.DEVICE_LABEL.setGeometry(QtCore.QRect(20, 120, 111, 20))
		self.DEVICE_LABEL.setObjectName(("DEVICE_LABEL"))

		self.CLOSE_PBUTTON = QtGui.QPushButton(myWidget)
		self.CLOSE_PBUTTON.setGeometry(QtCore.QRect(50, 380, 87, 27))
		self.CLOSE_PBUTTON.setObjectName(("CANCEL_PBUTTON"))

		self.MATERIAL_CBOX = QtGui.QComboBox(myWidget)
		self.MATERIAL_CBOX.setGeometry(QtCore.QRect(20, 260, 61, 31))
		self.MATERIAL_CBOX.setObjectName(("MATERIAL_CBOX"))

		self.MATERIAL_LABEL = QtGui.QLabel(myWidget)
		self.MATERIAL_LABEL.setGeometry(QtCore.QRect(20, 240, 61, 20))
		self.MATERIAL_LABEL.setObjectName(("MATERIAL_LABEL"))

		self.FILAMENT_LABEL = QtGui.QLabel(myWidget)
		self.FILAMENT_LABEL.setGeometry(QtCore.QRect(20, 300, 61, 20))
		self.FILAMENT_LABEL.setObjectName(("FILAMENT_LABEL"))

		self.FILAMENT_CBOX = QtGui.QComboBox(myWidget)
		self.FILAMENT_CBOX.setGeometry(QtCore.QRect(20, 320, 71, 31))
		self.FILAMENT_CBOX.setObjectName(("FILAMENT_CBOX"))

		self.BAUD_LABEL = QtGui.QLabel(myWidget)
		self.BAUD_LABEL.setGeometry(QtCore.QRect(20, 180, 81, 20))
		self.BAUD_LABEL.setObjectName(("BAUD_LABEL"))

		self.BAUD_CBOX = QtGui.QComboBox(myWidget)
		self.BAUD_CBOX.setGeometry(QtCore.QRect(20, 200, 81, 31))
		self.BAUD_CBOX.setObjectName(("BAUD_CBOX"))

		self.SUPPORTS_CHECKBOX = QtGui.QCheckBox(myWidget)
		self.SUPPORTS_CHECKBOX.setGeometry(QtCore.QRect(160, 320, 151, 22))
		self.SUPPORTS_CHECKBOX.setObjectName(("SUPPORTS_CHECKBOX"))

		self.LAYER_TEXTBOX = QtGui.QTextEdit(myWidget)
		self.LAYER_TEXTBOX.setGeometry(QtCore.QRect(190, 200, 61, 21))
		self.LAYER_TEXTBOX.setObjectName(("LAYER_TEXTBOX"))

		self.LAYER_LABEL = QtGui.QLabel(myWidget)
		self.LAYER_LABEL.setGeometry(QtCore.QRect(160, 180, 81, 17))
		self.LAYER_LABEL.setObjectName(("LAYER_LABEL"))

		self.mm_LABEL = QtGui.QLabel(myWidget)
		self.mm_LABEL.setGeometry(QtCore.QRect(260, 200, 31, 17))
		self.mm_LABEL.setObjectName(("mm_LABEL"))

		self.RAFTS_CHECKBOX = QtGui.QCheckBox(myWidget)
		self.RAFTS_CHECKBOX.setGeometry(QtCore.QRect(160, 340, 89, 22))
		self.RAFTS_CHECKBOX.setObjectName(("RAFTS_CHECKBOX"))

		self.RAFTS_SBOX = QtGui.QSpinBox(myWidget)
		self.RAFTS_SBOX.setEnabled(False)
		self.RAFTS_SBOX.setGeometry(QtCore.QRect(220, 340, 52, 27))
		self.RAFTS_SBOX.setObjectName(("RAFTS_SBOX"))

		self.HEATED_BED_CHECKBOX = QtGui.QCheckBox(myWidget)
		self.HEATED_BED_CHECKBOX.setGeometry(QtCore.QRect(160, 300, 101, 22))
		self.HEATED_BED_CHECKBOX.setObjectName(("HEATED_BED_CHECKBOX"))

		self.FIRMWARE_LABEL = QtGui.QLabel(myWidget)
		self.FIRMWARE_LABEL.setGeometry(QtCore.QRect(160, 120, 71, 17))
		self.FIRMWARE_LABEL.setObjectName(("FIRMWARE_LABEL"))

		self.FIRMWARE_CBOX = QtGui.QComboBox(myWidget)
		self.FIRMWARE_CBOX.setGeometry(QtCore.QRect(160, 140, 151, 31))
		self.FIRMWARE_CBOX.setObjectName(("FIRMWARE_CBOX"))

		self.mm_LABEL_2 = QtGui.QLabel(myWidget)
		self.mm_LABEL_2.setGeometry(QtCore.QRect(260, 260, 31, 17))
		self.mm_LABEL_2.setObjectName(("mm_LABEL_2"))

		self.NOZZLE_TEXTBOX = QtGui.QTextEdit(myWidget)
		self.NOZZLE_TEXTBOX.setGeometry(QtCore.QRect(190, 260, 61, 21))
		self.NOZZLE_TEXTBOX.setObjectName(("NOZZLE_TEXTBOX"))

		self.NOZZLE_LABEL = QtGui.QLabel(myWidget)
		self.NOZZLE_LABEL.setGeometry(QtCore.QRect(160, 240, 111, 17))
		self.NOZZLE_LABEL.setObjectName(("NOZZLE_LABEL"))

		self.REFRESH_PBUTTON = QtGui.QPushButton(myWidget)
		self.REFRESH_PBUTTON.setGeometry(QtCore.QRect(70, 110, 51, 27))
		self.REFRESH_PBUTTON.setObjectName(("REFRESH_PBUTTON"))

##############################################
######## Device addition code   ##############
##############################################

		try:
			import re
			import subprocess
			device_re = re.compile("Bus\s+(?P<bus>\d+)\s+Device\s+(?P<device>\d+).+ID\s(?P<id>\w+:\w+)\s(?P<tag>.+)$", re.I)
			df = subprocess.check_output("ls /dev/ttyUSB*", shell=True)
			count = df.count('dev')
			index = 0
			newlist = []
			while (index < count):
				endindex = df.index('\n')
				newlist.append(df[:endindex])
				df = df[endindex + 1:len(df)]
				index = index + 1
			self.DEVICE_CBOX.addItems(newlist)

		except:
			try:
				import re
				import subprocess
				device_re = re.compile("Bus\s+(?P<bus>\d+)\s+Device\s+(?P<device>\d+).+ID\s(?P<id>\w+:\w+)\s(?P<tag>.+)$", re.I)
				df = subprocess.check_output("ls /dev/ttyACM*", shell=True)
				count = df.count('dev')
				index = 0
				newlist = []
				while (index < count):
					endindex = df.index('\n')
					newlist.append(df[:endindex])
					df = df[endindex + 1:len(df)]
					index = index + 1
				self.DEVICE_CBOX.addItems(newlist)

			except:
				newlist = []
				newlist.append("No devices!")
				self.DEVICE_CBOX.addItems(newlist)

################################################
################################################
################################################
	
		MATERIAL_LIST = []
		MATERIAL_LIST.append('PLA')
		MATERIAL_LIST.append('ABS')
		self.MATERIAL_CBOX.addItems(MATERIAL_LIST)

		FILAMENT_LIST = []
		FILAMENT_LIST.append('3mm')
		FILAMENT_LIST.append('1.75mm')
		self.FILAMENT_CBOX.addItems(FILAMENT_LIST)
	
		BAUD_LIST = []
		BAUD_LIST.append('115200')
		BAUD_LIST.append('250000')
		self.BAUD_CBOX.addItems(BAUD_LIST)

		FIRMWARE_LIST = []
		FIRMWARE_LIST.append('RepRap (Marlin/Sprinter)')
		FIRMWARE_LIST.append('Teacup')
		FIRMWARE_LIST.append('MakerBot')
		FIRMWARE_LIST.append('Sailfish')
		FIRMWARE_LIST.append('Mach3/EMC')
		FIRMWARE_LIST.append('No extrusion')
		self.FIRMWARE_CBOX.addItems(FIRMWARE_LIST)

		self.SEND_PBUTTON.setText("Print!")
		self.DEVICE_LABEL.setText("Device:")
		self.CLOSE_PBUTTON.setText("Close")
		self.MATERIAL_LABEL.setText("Material:")
		self.FILAMENT_LABEL.setText("Filament:")
		self.BAUD_LABEL.setText("Baudrate:")
		self.SUPPORTS_CHECKBOX.setText("Generate Supports")
		self.LAYER_TEXTBOX.setText("0.4")
		self.LAYER_LABEL.setText("Layer Height:")
		self.RAFTS_CHECKBOX.setText("Rafts")
		self.HEATED_BED_CHECKBOX.setText("Heated Bed")
		self.FIRMWARE_LABEL.setText("Firmware:")
		self.mm_LABEL_2.setText("mm")
		self.mm_LABEL.setText("mm")
		self.NOZZLE_TEXTBOX.setText("0.5")
		self.NOZZLE_LABEL.setText("Nozzle Diameter:")
		self.REFRESH_PBUTTON.setText("Refresh")

		self.REFRESH_PBUTTON.clicked.connect(self.REFRESH_DEVICES)
		self.RAFTS_CHECKBOX.clicked.connect(self.on_RAFTS_CHECKBOX_clicked)
		self.SEND_PBUTTON.clicked.connect(self.pushButton_clicked)
		QtCore.QObject.connect(self.CLOSE_PBUTTON, QtCore.SIGNAL(("clicked()")), myWidget.close)

	def retranslateUi(self, draftToolbar): # built-in QT function that manages translations of widgets
		myWidget.setWindowTitle(QtGui.QApplication.translate("myWidget", "My Widget", None, QtGui.QApplication.UnicodeUTF8))
		self.label.setText(QtGui.QApplication.translate("myWidget", "Welcome to my new widget!", None, QtGui.QApplication.UnicodeUTF8))		

	def on_RAFTS_CHECKBOX_clicked(self):
		RAFTS_CHECKBOX_BOOL = self.RAFTS_CHECKBOX.isChecked()
		self.RAFTS_SBOX.setEnabled(RAFTS_CHECKBOX_BOOL)

	def REFRESH_DEVICES(self):
		self.DEVICE_CBOX.clear()
		try:
			import re
			import subprocess
			device_re = re.compile("Bus\s+(?P<bus>\d+)\s+Device\s+(?P<device>\d+).+ID\s(?P<id>\w+:\w+)\s(?P<tag>.+)$", re.I)
			df = subprocess.check_output("ls /dev/ttyUSB*", shell=True)
			count = df.count('dev')
			index = 0
			newlist = []
			while (index < count):
				endindex = df.index('\n')
				newlist.append(df[:endindex])
				df = df[endindex + 1:len(df)]
				index = index + 1
			self.DEVICE_CBOX.addItems(newlist)

		except:
			try:
				import re
				import subprocess
				device_re = re.compile("Bus\s+(?P<bus>\d+)\s+Device\s+(?P<device>\d+).+ID\s(?P<id>\w+:\w+)\s(?P<tag>.+)$", re.I)
				df = subprocess.check_output("ls /dev/ttyACM*", shell=True)
				count = df.count('dev')
				index = 0
				newlist = []
				while (index < count):
					endindex = df.index('\n')
					newlist.append(df[:endindex])
					df = df[endindex + 1:len(df)]
					index = index + 1
				self.DEVICE_CBOX.addItems(newlist)

			except:
				newlist = []
				newlist.append("No devices!")
				self.DEVICE_CBOX.addItems(newlist)

	def pushButton_clicked(self):
		FreeCAD.Console.PrintMessage("Creating gcode (may take a while) then sending to printer!\n")
		BAUD_INDEX = self.BAUD_CBOX.currentIndex()
		if BAUD_INDEX == 0:
			BAUD_FILE = '1'
		elif BAUD_INDEX == 1:
			BAUD_FILE = '2'
		
		MATERIAL_INDEX = self.MATERIAL_CBOX.currentIndex()
		if MATERIAL_INDEX == 0:
			if (self.HEATED_BED_CHECKBOX.isChecked()): 
				EXTRUDER_HEAT = '185 --bed-temperature 65'
			else:
				EXTRUDER_HEAT = '185'
		elif MATERIAL_INDEX == 1:
			if (self.HEATED_BED_CHECKBOX.isChecked()): 
				EXTRUDER_HEAT = '230 --bed-temperature 110'
			else:
				EXTRUDER_HEAT = '230'

		FILAMENT_INDEX = self.FILAMENT_CBOX.currentIndex()
		if FILAMENT_INDEX == 0:
			DIAMETER = '3'
		elif FILAMENT_INDEX == 1:
			DIAMETER = '1.75'	
		
		FIRMWARE_INDEX = (self.FIRMWARE_CBOX.currentIndex())
		FIRMWARES = ['reprap','teacup','makerbot','sailfish','mach3','no-extrusion']
		
		NOZZLE_DIAMETER = self.NOZZLE_TEXTBOX.currentText()
		LAYER_HEIGHT = self.LAYER_TEXTBOX.currentText()

		if (self.SUPPORTS_CHECKBOX.isChecked()):
			SUPPORT = " --support-material"
		else:
			SUPPORT = ""

		if (self.RAFTS_CHECKBOX.isChecked()):
			RAFTS_COUNT = str(self.RAFTS_SBOX.value())
		else:
			RAFTS_COUNT = '0'

		if 'No device' in self.DEVICE_CBOX.currentText():
			FreeCAD.Console.PrintMessage("Sorry no device selected.\n")

		elif '/dev/tty' in self.DEVICE_CBOX.currentText():
		    	slice_it = './src/NeuronRobotics/Slic3r/slic3r.pl --load src/NeuronRobotics/Slic3r/default.ini --filament-diameter '
			slice_it += DIAMETER
			slice_it += ' --temperature '
			slice_it += EXTRUDER_HEAT
			slice_it += ' --gcode-flavor '
			slice_it += str(FIRMWARES[FIRMWARE_INDEX])
			slice_it += ' --nozzle-diameter '
			slice_it += NOZZLE_DIAMETER
			slice_it += ' --layer-height '
			slice_it += LAYER_HEIGHT
			slice_it += SUPPORT
			slice_it += ' --raft-layers '
			slice_it += RAFTS_COUNT
			slice_it += ' src/temp.stl'
#			FreeCAD.Console.PrintMessage(slice_it) #what slic3r command we are using
			os.system(slice_it)

			command = 'python src/NeuronRobotics/SERIAL_GUI/Printrun/printcore_'
			command += BAUD_FILE #requires 2 different printcore.py files with separate baudrates defined in each file
			command += '.py '
			command += str(self.DEVICE_CBOX.currentText())
			command += ' src/temp.gcode'
			os.system(command)
	
import rsrc_rc

class plane():
    	app = QtGui.qApp
    	FCmw = app.activeWindow()
    	myNewFreeCADWidget = QtGui.QDockWidget()
    	myNewFreeCADWidget.ui = myWidget_Ui()
    	myNewFreeCADWidget.ui.setupUi(myNewFreeCADWidget)
    	FCmw.addDockWidget(QtCore.Qt.RightDockWidgetArea,myNewFreeCADWidget)