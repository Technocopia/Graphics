# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'SerialSelect.ui'
#
# Created: Thu May 16 15:18:12 2013
#      by: PyQt4 UI code generator 4.10
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName(_fromUtf8("Dialog"))
        Dialog.resize(327, 421)
        self.DEVICE_CBOX = QtGui.QComboBox(Dialog)
        self.DEVICE_CBOX.setGeometry(QtCore.QRect(20, 140, 111, 31))
        self.DEVICE_CBOX.setObjectName(_fromUtf8("DEVICE_CBOX"))
        self.MainLogo = QtGui.QLabel(Dialog)
        self.MainLogo.setGeometry(QtCore.QRect(90, 0, 111, 121))
        self.MainLogo.setText(_fromUtf8(""))
        self.MainLogo.setPixmap(QtGui.QPixmap(_fromUtf8(":/me/test/hat.png")))
        self.MainLogo.setObjectName(_fromUtf8("MainLogo"))
        self.SEND_PBUTTON = QtGui.QPushButton(Dialog)
        self.SEND_PBUTTON.setGeometry(QtCore.QRect(160, 380, 87, 27))
        self.SEND_PBUTTON.setObjectName(_fromUtf8("SEND_PBUTTON"))
        self.DEVICE_LABEL = QtGui.QLabel(Dialog)
        self.DEVICE_LABEL.setGeometry(QtCore.QRect(20, 120, 111, 20))
        self.DEVICE_LABEL.setObjectName(_fromUtf8("DEVICE_LABEL"))
        self.CANCEL_PBUTTON = QtGui.QPushButton(Dialog)
        self.CANCEL_PBUTTON.setGeometry(QtCore.QRect(50, 380, 87, 27))
        self.CANCEL_PBUTTON.setObjectName(_fromUtf8("CANCEL_PBUTTON"))
        self.MATERIAL_CBOX = QtGui.QComboBox(Dialog)
        self.MATERIAL_CBOX.setGeometry(QtCore.QRect(20, 260, 61, 31))
        self.MATERIAL_CBOX.setObjectName(_fromUtf8("MATERIAL_CBOX"))
        self.MATERIAL_CBOX.addItem(_fromUtf8(""))
        self.MATERIAL_CBOX.addItem(_fromUtf8(""))
        self.MATERIAL_LABEL = QtGui.QLabel(Dialog)
        self.MATERIAL_LABEL.setGeometry(QtCore.QRect(20, 240, 61, 20))
        self.MATERIAL_LABEL.setObjectName(_fromUtf8("MATERIAL_LABEL"))
        self.FILAMENT_LABEL = QtGui.QLabel(Dialog)
        self.FILAMENT_LABEL.setGeometry(QtCore.QRect(20, 300, 61, 20))
        self.FILAMENT_LABEL.setObjectName(_fromUtf8("FILAMENT_LABEL"))
        self.FILAMENT_CBOX = QtGui.QComboBox(Dialog)
        self.FILAMENT_CBOX.setGeometry(QtCore.QRect(20, 320, 71, 31))
        self.FILAMENT_CBOX.setObjectName(_fromUtf8("FILAMENT_CBOX"))
        self.FILAMENT_CBOX.addItem(_fromUtf8(""))
        self.FILAMENT_CBOX.addItem(_fromUtf8(""))
        self.BAUD_LABEL = QtGui.QLabel(Dialog)
        self.BAUD_LABEL.setGeometry(QtCore.QRect(20, 180, 81, 20))
        self.BAUD_LABEL.setObjectName(_fromUtf8("BAUD_LABEL"))
        self.BAUD_CBOX = QtGui.QComboBox(Dialog)
        self.BAUD_CBOX.setGeometry(QtCore.QRect(20, 200, 81, 31))
        self.BAUD_CBOX.setObjectName(_fromUtf8("BAUD_CBOX"))
        self.BAUD_CBOX.addItem(_fromUtf8(""))
        self.BAUD_CBOX.addItem(_fromUtf8(""))
        self.SUPPORTS_CHECKBOX = QtGui.QCheckBox(Dialog)
        self.SUPPORTS_CHECKBOX.setGeometry(QtCore.QRect(160, 320, 151, 22))
        self.SUPPORTS_CHECKBOX.setObjectName(_fromUtf8("SUPPORTS_CHECKBOX"))
        self.LAYER_TEXTBOX = QtGui.QTextEdit(Dialog)
        self.LAYER_TEXTBOX.setGeometry(QtCore.QRect(190, 200, 61, 21))
        self.LAYER_TEXTBOX.setObjectName(_fromUtf8("LAYER_TEXTBOX"))
        self.LAYER_LABEL = QtGui.QLabel(Dialog)
        self.LAYER_LABEL.setGeometry(QtCore.QRect(160, 180, 81, 17))
        self.LAYER_LABEL.setObjectName(_fromUtf8("LAYER_LABEL"))
        self.mm_LABEL = QtGui.QLabel(Dialog)
        self.mm_LABEL.setGeometry(QtCore.QRect(260, 200, 31, 17))
        self.mm_LABEL.setObjectName(_fromUtf8("mm_LABEL"))
        self.RAFTS_CHECKBOX = QtGui.QCheckBox(Dialog)
        self.RAFTS_CHECKBOX.setGeometry(QtCore.QRect(160, 340, 89, 22))
        self.RAFTS_CHECKBOX.setObjectName(_fromUtf8("RAFTS_CHECKBOX"))
        self.RAFTS_SBOX = QtGui.QSpinBox(Dialog)
        self.RAFTS_SBOX.setEnabled(False)
        self.RAFTS_SBOX.setGeometry(QtCore.QRect(220, 340, 52, 27))
        self.RAFTS_SBOX.setObjectName(_fromUtf8("RAFTS_SBOX"))
        self.HEATED_BED_CHECKBOX = QtGui.QCheckBox(Dialog)
        self.HEATED_BED_CHECKBOX.setGeometry(QtCore.QRect(160, 300, 101, 22))
        self.HEATED_BED_CHECKBOX.setObjectName(_fromUtf8("HEATED_BED_CHECKBOX"))
        self.FIRMWARE_LABEL = QtGui.QLabel(Dialog)
        self.FIRMWARE_LABEL.setGeometry(QtCore.QRect(160, 120, 71, 17))
        self.FIRMWARE_LABEL.setObjectName(_fromUtf8("FIRMWARE_LABEL"))
        self.FIRMWARE_CBOX = QtGui.QComboBox(Dialog)
        self.FIRMWARE_CBOX.setGeometry(QtCore.QRect(160, 140, 151, 31))
        self.FIRMWARE_CBOX.setObjectName(_fromUtf8("FIRMWARE_CBOX"))
        self.FIRMWARE_CBOX.addItem(_fromUtf8(""))
        self.FIRMWARE_CBOX.addItem(_fromUtf8(""))
        self.FIRMWARE_CBOX.addItem(_fromUtf8(""))
        self.FIRMWARE_CBOX.addItem(_fromUtf8(""))
        self.FIRMWARE_CBOX.addItem(_fromUtf8(""))
        self.FIRMWARE_CBOX.addItem(_fromUtf8(""))
        self.mm_LABEL_2 = QtGui.QLabel(Dialog)
        self.mm_LABEL_2.setGeometry(QtCore.QRect(260, 260, 31, 17))
        self.mm_LABEL_2.setObjectName(_fromUtf8("mm_LABEL_2"))
        self.NOZZLE_TEXTBOX = QtGui.QTextEdit(Dialog)
        self.NOZZLE_TEXTBOX.setGeometry(QtCore.QRect(190, 260, 61, 21))
        self.NOZZLE_TEXTBOX.setObjectName(_fromUtf8("NOZZLE_TEXTBOX"))
        self.NOZZLE_LABEL = QtGui.QLabel(Dialog)
        self.NOZZLE_LABEL.setGeometry(QtCore.QRect(160, 240, 111, 17))
        self.NOZZLE_LABEL.setObjectName(_fromUtf8("NOZZLE_LABEL"))
        self.REFRESH_PBUTTON = QtGui.QPushButton(Dialog)
        self.REFRESH_PBUTTON.setGeometry(QtCore.QRect(70, 110, 51, 27))
        self.REFRESH_PBUTTON.setObjectName(_fromUtf8("REFRESH_PBUTTON"))

        self.retranslateUi(Dialog)
        QtCore.QObject.connect(self.SEND_PBUTTON, QtCore.SIGNAL(_fromUtf8("clicked()")), Dialog.accept)
        QtCore.QObject.connect(self.CANCEL_PBUTTON, QtCore.SIGNAL(_fromUtf8("clicked()")), Dialog.close)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        Dialog.setWindowTitle(_translate("Dialog", "Serial Port Selection", None))
        self.SEND_PBUTTON.setText(_translate("Dialog", "Send!", None))
        self.DEVICE_LABEL.setText(_translate("Dialog", "Device:", None))
        self.CANCEL_PBUTTON.setText(_translate("Dialog", "Cancel", None))
        self.MATERIAL_CBOX.setItemText(0, _translate("Dialog", "PLA", None))
        self.MATERIAL_CBOX.setItemText(1, _translate("Dialog", "ABS", None))
        self.MATERIAL_LABEL.setText(_translate("Dialog", "Material:", None))
        self.FILAMENT_LABEL.setText(_translate("Dialog", "Filament:", None))
        self.FILAMENT_CBOX.setItemText(0, _translate("Dialog", "3mm", None))
        self.FILAMENT_CBOX.setItemText(1, _translate("Dialog", "1.75mm", None))
        self.BAUD_LABEL.setText(_translate("Dialog", "Baudrate:", None))
        self.BAUD_CBOX.setItemText(0, _translate("Dialog", "115200", None))
        self.BAUD_CBOX.setItemText(1, _translate("Dialog", "250000", None))
        self.SUPPORTS_CHECKBOX.setText(_translate("Dialog", "Generate Supports", None))
        self.LAYER_TEXTBOX.setHtml(_translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Droid Sans\'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.4</p></body></html>", None))
        self.LAYER_LABEL.setText(_translate("Dialog", "Layer Height:", None))
        self.mm_LABEL.setText(_translate("Dialog", "mm", None))
        self.RAFTS_CHECKBOX.setText(_translate("Dialog", "Rafts", None))
        self.HEATED_BED_CHECKBOX.setText(_translate("Dialog", "Heated Bed", None))
        self.FIRMWARE_LABEL.setText(_translate("Dialog", "Firmware:", None))
        self.FIRMWARE_CBOX.setItemText(0, _translate("Dialog", "RepRap (Marlin/Sprinter)", None))
        self.FIRMWARE_CBOX.setItemText(1, _translate("Dialog", "Teacup", None))
        self.FIRMWARE_CBOX.setItemText(2, _translate("Dialog", "MakerBot", None))
        self.FIRMWARE_CBOX.setItemText(3, _translate("Dialog", "Sailfish", None))
        self.FIRMWARE_CBOX.setItemText(4, _translate("Dialog", "Mach3/EMC", None))
        self.FIRMWARE_CBOX.setItemText(5, _translate("Dialog", "No extrusion", None))
        self.mm_LABEL_2.setText(_translate("Dialog", "mm", None))
        self.NOZZLE_TEXTBOX.setHtml(_translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Droid Sans\'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0.5</p></body></html>", None))
        self.NOZZLE_LABEL.setText(_translate("Dialog", "Nozzle Diameter:", None))
        self.REFRESH_PBUTTON.setText(_translate("Dialog", "Refresh", None))

import rsrc_rc
