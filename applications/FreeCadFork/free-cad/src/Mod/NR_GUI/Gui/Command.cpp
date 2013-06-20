/***************************************************************************
 *   Copyright (c) YEAR YOUR NAME         <Your e-mail address>            *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#include "PreCompiled.h"
#ifndef _PreComp_
#endif

#include <Base/Console.h>
#include <Base/Interpreter.h>
#include <App/Document.h>
#include <Gui/Application.h>
#include <Gui/Command.h>


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//===========================================================================
// CmdNR_GUITest THIS IS JUST A TEST COMMAND
//===========================================================================
DEF_STD_CMD(CmdNR_GUITest);

CmdNR_GUITest::CmdNR_GUITest()
  :Command("NR_GUI_Test")
{
    sAppModule    = "NR_GUI";
    sGroup        = QT_TR_NOOP("NR_GUI");
    sMenuText     = QT_TR_NOOP("Hello");
    sToolTipText  = QT_TR_NOOP("NR_GUI Test function");
    sWhatsThis    = QT_TR_NOOP("NR_GUI Test function");
    sStatusTip    = QT_TR_NOOP("NR_GUI Test function");
    sPixmap       = "Test1";
    sAccel        = "CTRL+H";
}

void CmdNR_GUITest::activated(int iMsg)
{
//    Base::Console().Message("Hello, World!\n");
//    Base::Interpreter().runString("FREECAD_PATH = FreeCAD.ConfigGet(''AppHomePath'')");
//    Base::Interpreter().runString("import sys");
//    Base::Interpreter().runString("sys.path.insert(0, FREECAD_PATH + 'Mod/NR_GUI/FileExportPath')");
    Base::Interpreter().runString("import FileExportGui");
    Base::Interpreter().runString("import second");
    Base::Interpreter().runString("from PyQt4 import QtGui");
    Base::Interpreter().runString("d = QtGui.QWidget()");
    Base::Interpreter().runString("d.ui = FileExportGui.Ui_Dialog()");
    Base::Interpreter().runString("d.ui.setupUi(d)");
    Base::Interpreter().runString("d.show()");
//    Base::Interpreter().runString("FileExportGui.thy()");
}

void CreateNR_GUICommands(void)
{
    Gui::CommandManager &rcCmdMgr = Gui::Application::Instance->commandManager();
    rcCmdMgr.addCommand(new CmdNR_GUITest());
}
