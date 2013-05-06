/********************************************************************************
** Form generated from reading UI file 'TaskLoft.ui'
**
** Created: Thu Apr 18 22:32:07 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLOFT_H
#define UI_TASKLOFT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/Widgets.h"

namespace PartGui {

class Ui_TaskLoft
{
public:
    QGridLayout *gridLayout;
    Gui::ActionSelector *selector;
    QCheckBox *checkSolid;
    QCheckBox *checkRuledSurface;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PartGui__TaskLoft)
    {
        if (PartGui__TaskLoft->objectName().isEmpty())
            PartGui__TaskLoft->setObjectName(QString::fromUtf8("PartGui__TaskLoft"));
        PartGui__TaskLoft->resize(336, 326);
        gridLayout = new QGridLayout(PartGui__TaskLoft);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selector = new Gui::ActionSelector(PartGui__TaskLoft);
        selector->setObjectName(QString::fromUtf8("selector"));

        gridLayout->addWidget(selector, 0, 0, 1, 3);

        checkSolid = new QCheckBox(PartGui__TaskLoft);
        checkSolid->setObjectName(QString::fromUtf8("checkSolid"));

        gridLayout->addWidget(checkSolid, 1, 0, 1, 1);

        checkRuledSurface = new QCheckBox(PartGui__TaskLoft);
        checkRuledSurface->setObjectName(QString::fromUtf8("checkRuledSurface"));

        gridLayout->addWidget(checkRuledSurface, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        retranslateUi(PartGui__TaskLoft);

        QMetaObject::connectSlotsByName(PartGui__TaskLoft);
    } // setupUi

    void retranslateUi(QWidget *PartGui__TaskLoft)
    {
        PartGui__TaskLoft->setWindowTitle(QApplication::translate("PartGui::TaskLoft", "Loft", 0, QApplication::UnicodeUTF8));
        checkSolid->setText(QApplication::translate("PartGui::TaskLoft", "Create solid", 0, QApplication::UnicodeUTF8));
        checkRuledSurface->setText(QApplication::translate("PartGui::TaskLoft", "Ruled surface", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class TaskLoft: public Ui_TaskLoft {};
} // namespace Ui
} // namespace PartGui

#endif // UI_TASKLOFT_H
