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

#include "../../Web/Gui/PreCompiled.h"
#ifndef _PreComp_
#endif

#include <Base/Console.h>
#include <App/Document.h>
#include <Gui/Application.h>
#include <Gui/Command.h>
#include <cstdlib>
#include <App/Application.h>
#include <Gui/MainWindow.h>
#include <Gui/FileDialog.h>
#include <Gui/Selection.h>
#include <Gui/Document.h>

#include "../../Web/Gui/BrowserView.h"

using namespace std;
using namespace Gui;
using namespace WebGui;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//===========================================================================
// CmdNeuronRoboticsTest THIS IS JUST A TEST COMMAND
//===========================================================================
DEF_STD_CMD(CmdNeuronRoboticsNRConsole);

CmdNeuronRoboticsNRConsole::CmdNeuronRoboticsNRConsole()
  :Command("NeuronRobotics_NRConsole")
{
    sAppModule    = "NeuronRobotics";
    sGroup        = QT_TR_NOOP("NeuronRobotics");
    sMenuText     = QT_TR_NOOP("Neuron Robotics Console");
    sToolTipText  = QT_TR_NOOP("Neuron Robotics Console");
    sWhatsThis    = QT_TR_NOOP("Neuron Robotics Console");
    sStatusTip    = QT_TR_NOOP("Neuron Robotics Console");
    sPixmap       = "actions/NR_LOGO";
    sAccel        = "CTRL+H";
}

void CmdNeuronRoboticsNRConsole::activated(int iMsg)
{
    Base::Console().Message("Opening NR-Console...\n");
    std::system("java -jar /usr/local/NeuronRobotics/RDK/bin/nr-console.jar");
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//===========================================================================
// SUBMISSION
//===========================================================================
DEF_STD_CMD(CmdNeuronRoboticsSubmit);

CmdNeuronRoboticsSubmit::CmdNeuronRoboticsSubmit()
    :Command("NeuronRobotics_Submit")
{
    sAppModule      = "NeuronRobotics";
    sGroup          = QT_TR_NOOP("NeuronRobotics");
    sMenuText       = QT_TR_NOOP("Submit Files");
    sToolTipText    = QT_TR_NOOP("Submit File");
    sWhatsThis      = QT_TR_NOOP("Submit File");
    sStatusTip      = QT_TR_NOOP("Submit File");
    sPixmap         = "actions/upload";
    sAccel          = "CTRL+K";

}

void CmdNeuronRoboticsSubmit::activated(int iMsg)
{
    doCommand(Doc,"import WebGui");
    doCommand(Command::Gui,"WebGui.openBrowser('http://neuronrobotics.com')");
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

DEF_STD_CMD(CmdNeuronRoboticsDyIO);

CmdNeuronRoboticsDyIO::CmdNeuronRoboticsDyIO()
    :Command("NeuronRobotics_DyIO")
{
    sAppModule      = "NeuronRobotics";
    sGroup          = QT_TR_NOOP("NeuronRobotics");
    sMenuText       = QT_TR_NOOP("DyIO");
    sToolTipText    = QT_TR_NOOP("DyIO");
    sWhatsThis      = QT_TR_NOOP("DyIO");
    sStatusTip      = QT_TR_NOOP("DyIO");
    sPixmap         = "actions/dyio";
    sAccel          = "CTRL+[";

}

void CmdNeuronRoboticsDyIO::activated(int iMsg)
{
    Base::Console().Message("NothingYet...\n");
}

void CreateNeuronRoboticsCommands(void)
{
    Gui::CommandManager &rcCmdMgr = Gui::Application::Instance->commandManager();
    rcCmdMgr.addCommand(new CmdNeuronRoboticsNRConsole());
    rcCmdMgr.addCommand(new CmdNeuronRoboticsDyIO());
    rcCmdMgr.addCommand(new CmdNeuronRoboticsSubmit());

}
