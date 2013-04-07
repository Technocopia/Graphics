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

#include <Base/Interpreter.h>
#include <Base/Console.h>
#include <App/Document.h>
#include <Gui/Application.h>
#include <Gui/Command.h>


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//===========================================================================
// CmdVendTest THIS IS JUST A TEST COMMAND
//===========================================================================
DEF_STD_CMD(CmdVendTest);

CmdVendTest::CmdVendTest()
  :Command("Vend_Test")
{
    sAppModule    = "Vend";
    sGroup        = QT_TR_NOOP("Vend");
    sMenuText     = QT_TR_NOOP("Hello");
    sToolTipText  = QT_TR_NOOP("Vend Test function");
    sWhatsThis    = QT_TR_NOOP("Vend Test function");
    sStatusTip    = QT_TR_NOOP("Vend Test function");
    sPixmap       = "Test1";
    sAccel        = "CTRL+H";
}

void CmdVendTest::activated(int iMsg)
{
//    Base::Console().Message("Hello, World!\n");
//    Base::Interpreter().runString("import sys");
//    Base::Interpreter().runString("sys.path.insert(0, '/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Vend/TaskPanel')");
//    Base::Interpreter().runString("import TaskPanel");
//    Base::Interpreter().runString("TaskPanel.createTask()");
    Base::Interpreter().runString("import sys");
    Base::Interpreter().runString("sys.path.insert(0, '/home/hpham/the-technocopia-project/third-party/free-cad/src/Mod/Vend/TaskPanel')");
    Base::Interpreter().runString("from PyQt4 import QtGui");
    Base::Interpreter().runString("import TaskPanel");
    Base::Interpreter().runString("d = QtGui.QWidget()");
    Base::Interpreter().runString("d.ui = TaskPanel.Ui_Dialog()");
    Base::Interpreter().runString("d.ui.setupUi(d)");
    Base::Interpreter().runString("d.show()");





}

void CreateVendCommands(void)
{
    Gui::CommandManager &rcCmdMgr = Gui::Application::Instance->commandManager();
    rcCmdMgr.addCommand(new CmdVendTest());
}
