/********************************************************************************
** Form generated from reading UI file 'TaskSweep.ui'
**
** Created: Thu Apr 18 22:32:07 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSWEEP_H
#define UI_TASKSWEEP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/Widgets.h"

namespace PartGui {

class Ui_TaskSweep
{
public:
    QGridLayout *gridLayout;
    Gui::ActionSelector *selector;
    QCheckBox *checkSolid;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkFrenet;
    QLabel *label;

    void setupUi(QWidget *PartGui__TaskSweep)
    {
        if (PartGui__TaskSweep->objectName().isEmpty())
            PartGui__TaskSweep->setObjectName(QString::fromUtf8("PartGui__TaskSweep"));
        PartGui__TaskSweep->resize(336, 326);
        gridLayout = new QGridLayout(PartGui__TaskSweep);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selector = new Gui::ActionSelector(PartGui__TaskSweep);
        selector->setObjectName(QString::fromUtf8("selector"));

        gridLayout->addWidget(selector, 1, 0, 1, 3);

        checkSolid = new QCheckBox(PartGui__TaskSweep);
        checkSolid->setObjectName(QString::fromUtf8("checkSolid"));

        gridLayout->addWidget(checkSolid, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        checkFrenet = new QCheckBox(PartGui__TaskSweep);
        checkFrenet->setObjectName(QString::fromUtf8("checkFrenet"));

        gridLayout->addWidget(checkFrenet, 2, 1, 1, 1);

        label = new QLabel(PartGui__TaskSweep);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        retranslateUi(PartGui__TaskSweep);

        QMetaObject::connectSlotsByName(PartGui__TaskSweep);
    } // setupUi

    void retranslateUi(QWidget *PartGui__TaskSweep)
    {
        PartGui__TaskSweep->setWindowTitle(QApplication::translate("PartGui::TaskSweep", "Sweep", 0, QApplication::UnicodeUTF8));
        checkSolid->setText(QApplication::translate("PartGui::TaskSweep", "Create solid", 0, QApplication::UnicodeUTF8));
        checkFrenet->setText(QApplication::translate("PartGui::TaskSweep", "Frenet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::TaskSweep", "Select one or more profiles and select an edge or wire\n"
"in the 3D view for the sweep path.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class TaskSweep: public Ui_TaskSweep {};
} // namespace Ui
} // namespace PartGui

#endif // UI_TASKSWEEP_H
