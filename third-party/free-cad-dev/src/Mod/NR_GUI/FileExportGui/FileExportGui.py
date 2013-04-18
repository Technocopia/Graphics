# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'FileExportGui.ui'
#
# Created: Fri Apr 12 09:41:33 2013
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
        Dialog.resize(545, 374)
        self.LABEL_FILE_NAME = QtGui.QLabel(Dialog)
        self.LABEL_FILE_NAME.setGeometry(QtCore.QRect(20, 120, 141, 17))
        self.LABEL_FILE_NAME.setObjectName(_fromUtf8("LABEL_FILE_NAME"))
        self.TEXT_EDIT_NAME = QtGui.QTextEdit(Dialog)
        self.TEXT_EDIT_NAME.setGeometry(QtCore.QRect(20, 140, 501, 31))
        self.TEXT_EDIT_NAME.setObjectName(_fromUtf8("TEXT_EDIT_NAME"))
        self.LABEL_DESC = QtGui.QLabel(Dialog)
        self.LABEL_DESC.setGeometry(QtCore.QRect(20, 190, 141, 17))
        self.LABEL_DESC.setObjectName(_fromUtf8("LABEL_DESC"))
        self.TEXT_EDIT_DESC = QtGui.QTextEdit(Dialog)
        self.TEXT_EDIT_DESC.setGeometry(QtCore.QRect(20, 210, 501, 31))
        self.TEXT_EDIT_DESC.setObjectName(_fromUtf8("TEXT_EDIT_DESC"))
        self.pushButton = QtGui.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(430, 330, 87, 27))
        self.pushButton.setObjectName(_fromUtf8("pushButton"))
        self.pushButton.clicked.connect(self.on_pushButton_clicked) #connection pushButton
        self.pushButton_2 = QtGui.QPushButton(Dialog)
        self.pushButton_2.setGeometry(QtCore.QRect(340, 330, 87, 27))
        self.pushButton_2.setObjectName(_fromUtf8("pushButton_2"))
#        self.pushButton.clicked.connect(self.on_pushButton_2_clicked)
        self.BUTTON_BROWSE = QtGui.QPushButton(Dialog)
        self.BUTTON_BROWSE.setGeometry(QtCore.QRect(430, 280, 87, 27))
        self.BUTTON_BROWSE.setObjectName(_fromUtf8("BUTTON_BROWSE"))
        self.textEdit = QtGui.QTextEdit(Dialog)
        self.textEdit.setGeometry(QtCore.QRect(20, 280, 401, 31))
        self.textEdit.setObjectName(_fromUtf8("textEdit"))
        self.LABEL_LOGO = QtGui.QLabel(Dialog)
        self.LABEL_LOGO.setGeometry(QtCore.QRect(30, 10, 481, 91))
        self.LABEL_LOGO.setObjectName(_fromUtf8("LABEL_LOGO"))

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        Dialog.setWindowTitle(QtGui.QApplication.translate("Dialog", "Neuron Robotics Export GUI", None, QtGui.QApplication.UnicodeUTF8))
        self.LABEL_FILE_NAME.setText(QtGui.QApplication.translate("Dialog", "File Name (no spaces):", None, QtGui.QApplication.UnicodeUTF8))
        self.LABEL_DESC.setText(QtGui.QApplication.translate("Dialog", "Description:", None, QtGui.QApplication.UnicodeUTF8))
        self.pushButton.setText(QtGui.QApplication.translate("Dialog", "OK", None, QtGui.QApplication.UnicodeUTF8))
        self.pushButton_2.setText(QtGui.QApplication.translate("Dialog", "Cancel", None, QtGui.QApplication.UnicodeUTF8))
        self.BUTTON_BROWSE.setText(QtGui.QApplication.translate("Dialog", "Browse...", None, QtGui.QApplication.UnicodeUTF8))
        self.LABEL_LOGO.setText(QtGui.QApplication.translate("Dialog", "TextLabel", None, QtGui.QApplication.UnicodeUTF8))

    def on_pushButton_clicked(self):
        d.hide()
        d.ui= second.Ui_Dialog()
        d.ui.setupUi(d)
        d.show()


#class thy():
#    d = QtGui.QWidget()
#    d.ui = Ui_Dialog()
#    d.ui.setupUi(d)
#    d.show()
