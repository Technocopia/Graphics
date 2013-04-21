# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'SerialSelect.ui'
#
# Created: Sun Apr 21 14:13:46 2013
#      by: PyQt4 UI code generator 4.9.3
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui
import FreeCAD, Part 

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    _fromUtf8 = lambda s: s

class Ui_Dialog(object):

    def setupUi(self, Dialog):
        Dialog.setObjectName(_fromUtf8("Dialog"))
        Dialog.resize(236, 211)
        self.comboBox = QtGui.QComboBox(Dialog)
        self.comboBox.setGeometry(QtCore.QRect(20, 120, 201, 31))
        self.comboBox.setObjectName(_fromUtf8("comboBox"))
        self.MainLogo = QtGui.QLabel(Dialog)
        self.MainLogo.setGeometry(QtCore.QRect(70, 0, 111, 121))
        self.MainLogo.setText(_fromUtf8(""))
        self.MainLogo.setPixmap(QtGui.QPixmap(_fromUtf8(":/me/test/hat.png")))
        self.MainLogo.setObjectName(_fromUtf8("MainLogo"))
        self.pushButton = QtGui.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(130, 160, 87, 27))
        self.pushButton.setObjectName(_fromUtf8("pushButton"))
	self.pushButton.clicked.connect(self.on_pushButton_clicked)
        
	self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        Dialog.setWindowTitle(QtGui.QApplication.translate("Dialog", "Serial Port Selection", None, QtGui.QApplication.UnicodeUTF8))
        self.pushButton.setText(QtGui.QApplication.translate("Dialog", "Select", None, QtGui.QApplication.UnicodeUTF8))
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
	self.comboBox.addItems(newlist)


    def on_pushButton_clicked(self):
	self.pushButton.setText(QtGui.QApplication.translate("Dialog", self.comboBox.currentIndex(), None, QtGui.QApplication.UnicodeUTF8))
        App.Console.PrintMessage("Terminé\r\n")
        self.window.hide()

import rsrc_rc