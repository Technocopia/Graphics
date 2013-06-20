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
#include <Base/Interpreter.h>
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


////===========================================================================
//// export
////===========================================================================

//DEF_STD_CMD_A(CmdRobotExportKukaCompact);

//CmdRobotExportKukaCompact::CmdRobotExportKukaCompact()
//    :Command("Robot_ExportKukaCompact")
//{
//    sAppModule      = "Robot";
//    sGroup          = QT_TR_NOOP("Robot");
//    sMenuText       = QT_TR_NOOP("Kuka compact subroutine...");
//    sToolTipText    = QT_TR_NOOP("Export the trajectory as a compact KRL subroutine.");
//    sWhatsThis      = sToolTipText;
//    sStatusTip      = sToolTipText;
//    sPixmap         = "Robot_Export";
//}


//void CmdRobotExportKukaCompact::activated(int iMsg)
//{
//    unsigned int n1 = getSelection().countObjectsOfType(Robot::RobotObject::getClassTypeId());
//    unsigned int n2 = getSelection().countObjectsOfType(Robot::TrajectoryObject::getClassTypeId());

//    if (n1 != 1 || n2 != 1) {
//        QMessageBox::warning(Gui::getMainWindow(), QObject::tr("Wrong selection"),
//            QObject::tr("Select one Robot and one Trajectory object."));
//        return;
//    }

//    std::vector<Gui::SelectionSingleton::SelObj> Sel = getSelection().getSelection();


//    Robot::RobotObject *pcRobotObject;
//    if(Sel[0].pObject->getTypeId() == Robot::RobotObject::getClassTypeId())
//        pcRobotObject = dynamic_cast<Robot::RobotObject*>(Sel[0].pObject);
//    else if(Sel[1].pObject->getTypeId() == Robot::RobotObject::getClassTypeId())
//        pcRobotObject = dynamic_cast<Robot::RobotObject*>(Sel[1].pObject);
//    std::string RoboName = pcRobotObject->getNameInDocument();

//    Robot::TrajectoryObject *pcTrajectoryObject;
//    if(Sel[0].pObject->getTypeId() == Robot::TrajectoryObject::getClassTypeId())
//        pcTrajectoryObject = dynamic_cast<Robot::TrajectoryObject*>(Sel[0].pObject);
//    else if(Sel[1].pObject->getTypeId() == Robot::TrajectoryObject::getClassTypeId())
//        pcTrajectoryObject = dynamic_cast<Robot::TrajectoryObject*>(Sel[1].pObject);
//    std::string TrakName = pcTrajectoryObject->getNameInDocument();

//    QStringList filter;
//    filter << QObject::tr("KRL file(*.src)");
//    filter << QObject::tr("All Files (*.*)");
//    QString fn = Gui::FileDialog::getSaveFileName(Gui::getMainWindow(), QObject::tr("Export program"), QString(), filter.join(QLatin1String(";;")));
//    if (fn.isEmpty())
//        return;


//    doCommand(Doc,"from KukaExporter import ExportCompactSub");
//    doCommand(Doc,"ExportCompactSub(App.activeDocument().%s,App.activeDocument().%s,'%s')",pcRobotObject->getNameInDocument(),pcTrajectoryObject->getNameInDocument(),(const char*)fn.toLatin1());


//}

//bool CmdRobotExportKukaCompact::isActive(void)
//{
//    return hasActiveDocument();
//}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//===========================================================================
// SUBMISSION
//===========================================================================
DEF_STD_CMD(CmdNR_TESTSubmit);

CmdNR_TESTSubmit::CmdNR_TESTSubmit()
    :Command("NR_TEST_Submit")
{
    sAppModule      = "NR_TEST";
    sGroup          = QT_TR_NOOP("NR_TEST");
    sMenuText       = QT_TR_NOOP("Submit Files");
    sToolTipText    = QT_TR_NOOP("Submit File");
    sWhatsThis      = QT_TR_NOOP("Submit File");
    sStatusTip      = QT_TR_NOOP("Submit File");
    sPixmap         = "actions/upload";
    sAccel          = "CTRL+K";

}

void CmdNR_TESTSubmit::activated(int iMsg)
{
    doCommand(Doc,"import WebGui");
    doCommand(Command::Gui,"WebGui.openBrowser('http://neuronrobotics.com')");
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

DEF_STD_CMD(CmdNR_TESTTest);

CmdNR_TESTTest::CmdNR_TESTTest()
  :Command("NR_TEST_Test")
{
    sAppModule    = "NR_TEST";
    sGroup        = QT_TR_NOOP("NR_TEST");
    sMenuText     = QT_TR_NOOP("Neuron Robotics Console");
    sToolTipText  = QT_TR_NOOP("Neuron Robotics Console");
    sWhatsThis    = QT_TR_NOOP("Neuron Robotics Console");
    sStatusTip    = QT_TR_NOOP("Neuron Robotics Console");
    sPixmap       = "actions/NR";
    sAccel        = "CTRL+H";
}

void CmdNR_TESTTest::activated(int iMsg)
{
//    Base::Console().Message("NothingYet...\n");
//    Base::Interpreter().runString("import VendLoad");
//    Base::Interpreter().runString("VendLoad.load()");
    Command::addModule(Gui,"VendLoad");
//    Base::Interpreter().runString("TaskPanel.load()");

}

void CreateNR_TESTCommands(void)
{
    Gui::CommandManager &rcCmdMgr = Gui::Application::Instance->commandManager();

    rcCmdMgr.addCommand(new CmdNR_TESTTest());
    rcCmdMgr.addCommand(new CmdNR_TESTSubmit());
}
