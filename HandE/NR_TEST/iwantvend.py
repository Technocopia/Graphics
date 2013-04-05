from PyQt4 import QtCore, QtGui
import FreeCAD, FreeCADGui, os

# Load resources

class LoadExample: 
    def Activated(self):
        import VendLoad
        VendLoad.load()

    def GetResources(self):
        MenuText = QtCore.QT_TRANSLATE_NOOP('Ship_LoadExample', 'Load an example ship geometry')
        ToolTip  = QtCore.QT_TRANSLATE_NOOP('Ship_LoadExample', 'Load an example ship geometry able to be converted into a ship.')
        return {'Pixmap' : 'LoadIco', 'MenuText': MenuText, 'ToolTip': ToolTip} 

FreeCADGui.addCommand('Ship_LoadExample', LoadExample())
