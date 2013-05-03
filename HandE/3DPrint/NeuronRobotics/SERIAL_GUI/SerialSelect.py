# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'SerialSelect.ui'
#
# Created: Sun Apr 21 14:13:46 2013
#      by: PyQt4 UI code generator 4.9.3
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui
import FreeCAD, Part 
import sys
import os


#sys.path.append('src/NeuronRobotics/SERIAL_GUI/Printrun')
#import printcore
#from printcore import printcore

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    _fromUtf8 = lambda s: s

class Ui_Dialog(object):

    def setupUi(self, Dialog):

        Dialog.setObjectName(_fromUtf8("Dialog"))
        Dialog.resize(292, 266)

        self.label = QtGui.QLabel(Dialog)
        self.label.setGeometry(QtCore.QRect(40, 190, 201, 20))
        self.label.setObjectName(_fromUtf8("label"))
        self.MainLogo = QtGui.QLabel(Dialog)
        self.MainLogo.setGeometry(QtCore.QRect(80, 0, 111, 121))
        self.MainLogo.setText(_fromUtf8(""))
        self.MainLogo.setPixmap(QtGui.QPixmap(_fromUtf8(":/me/test/hat.png")))
        self.MainLogo.setObjectName(_fromUtf8("MainLogo"))
	import subprocess

	self.label.setText('creating gcode file... Powered by Slic3r')
	subprocess.call(['src/NeuronRobotics/Slic3r/slic3r.pl --load src/NeuronRobotics/Slic3r/default.ini src/NeuronRobotics/SERIAL_GUI/exported/temp.stl'])
	time.sleep(3)
	self.label.setText('Complete! Select printer...')

        self.pushButton = QtGui.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(190, 220, 87, 27))
        self.pushButton.setObjectName(_fromUtf8("pushButton"))
        self.pushButton.setText(QtGui.QApplication.translate("Dialog", "Select", None, QtGui.QApplication.UnicodeUTF8))

	self.pushButton_2 = QtGui.QPushButton(Dialog)
        self.pushButton_2.setGeometry(QtCore.QRect(90, 220, 87, 27))
        self.pushButton_2.setObjectName(_fromUtf8("pushButton_2"))
        self.pushButton_2.setText(QtGui.QApplication.translate("Dialog", "Cancel", None, QtGui.QApplication.UnicodeUTF8))

	self.label_2 = QtGui.QLabel(Dialog)
        self.label_2.setGeometry(QtCore.QRect(10, 10, 130, 241))
        self.label_2.setObjectName(_fromUtf8("label_2"))

        self.comboBox = QtGui.QComboBox(Dialog)
        self.comboBox.setGeometry(QtCore.QRect(40, 150, 201, 31))
        self.comboBox.setObjectName(_fromUtf8("comboBox"))
	try:
		import re
		import subprocess
		device_re = re.compile("Bus\s+(?P<bus>\d+)\s+Device\s+(?P<device>\d+).+ID\s(?P<id>\w+:\w+)\s(?P<tag>.+)$", re.I)
		df = subprocess.check_output("ls /dev/ttyACM*", shell=True)
		count = df.count('dev')
		index = 0
		newlist = []
		newlist.append('Select a device')
		while (index < count):
			endindex = df.index('\n')
			newlist.append(df[:endindex])
			df = df[endindex + 1:len(df)]
			index = index + 1
		self.comboBox.addItems(newlist)
	except:
		newlist = []
		newlist.append("No device connected!")
		self.comboBox.addItems(newlist)
	self.retranslateUi(Dialog)
	QtCore.QObject.connect(self.comboBox, QtCore.SIGNAL("currentIndexChanged(int)"), self.onIndexChange)
	self.pushButton.clicked.connect(self.pushButton_clicked)
	QtCore.QObject.connect(self.pushButton_2, QtCore.SIGNAL(_fromUtf8("clicked()")), Dialog.close)
        QtCore.QMetaObject.connectSlotsByName(Dialog)
        

    def retranslateUi(self, Dialog):
        Dialog.setWindowTitle(QtGui.QApplication.translate("Dialog", "Serial Port Selection", None, QtGui.QApplication.UnicodeUTF8))

    def onIndexChange(self):
	self.label.setText(self.comboBox.currentText())

    def pushButton_clicked(self):
	part1 = str(self.label.text())
	control = subprocess.check_output(['python src/NeuronRobotics/SERIAL_GUI/Printrun/printcore.py','me','src/NeuronRobotics/SERIAL_GUI/exported/temp.gcode'])
	self.label.setText(control)

import rsrc_rc

class plane():
    d = QtGui.QWidget()
    d.ui = Ui_Dialog()
    d.ui.setupUi(d)
    d.show()