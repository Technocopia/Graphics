/********************************************************************************
** Form generated from reading UI file 'DlgSettingsGeneral.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSGENERAL_H
#define UI_DLGSETTINGSGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"

namespace PartGui {

class Ui_DlgSettingsGeneral
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *comboBoxUnits;
    QLabel *label;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    Gui::PrefCheckBox *checkBooleanRefine;
    Gui::PrefCheckBox *checkBooleanCheck;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *PartGui__DlgSettingsGeneral)
    {
        if (PartGui__DlgSettingsGeneral->objectName().isEmpty())
            PartGui__DlgSettingsGeneral->setObjectName(QString::fromUtf8("PartGui__DlgSettingsGeneral"));
        PartGui__DlgSettingsGeneral->resize(550, 333);
        gridLayout_2 = new QGridLayout(PartGui__DlgSettingsGeneral);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(PartGui__DlgSettingsGeneral);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBoxUnits = new QComboBox(groupBox);
        comboBoxUnits->setObjectName(QString::fromUtf8("comboBoxUnits"));

        gridLayout->addWidget(comboBoxUnits, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(PartGui__DlgSettingsGeneral);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        checkBooleanRefine = new Gui::PrefCheckBox(groupBox_2);
        checkBooleanRefine->setObjectName(QString::fromUtf8("checkBooleanRefine"));
        checkBooleanRefine->setProperty("prefEntry", QVariant(QByteArray("RefineModel")));
        checkBooleanRefine->setProperty("prefPath", QVariant(QByteArray("Mod/Part/Boolean")));

        gridLayout1->addWidget(checkBooleanRefine, 0, 0, 1, 1);

        checkBooleanCheck = new Gui::PrefCheckBox(groupBox_2);
        checkBooleanCheck->setObjectName(QString::fromUtf8("checkBooleanCheck"));
        checkBooleanCheck->setProperty("prefEntry", QVariant(QByteArray("CheckModel")));
        checkBooleanCheck->setProperty("prefPath", QVariant(QByteArray("Mod/Part/Boolean")));

        gridLayout1->addWidget(checkBooleanCheck, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(spacerItem1, 2, 0, 1, 1);


        retranslateUi(PartGui__DlgSettingsGeneral);

        QMetaObject::connectSlotsByName(PartGui__DlgSettingsGeneral);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgSettingsGeneral)
    {
        PartGui__DlgSettingsGeneral->setWindowTitle(QApplication::translate("PartGui::DlgSettingsGeneral", "General", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PartGui::DlgSettingsGeneral", "Export", 0, QApplication::UnicodeUTF8));
        comboBoxUnits->clear();
        comboBoxUnits->insertItems(0, QStringList()
         << QApplication::translate("PartGui::DlgSettingsGeneral", "Millimeter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgSettingsGeneral", "Meter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgSettingsGeneral", "Inch", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PartGui::DlgSettingsGeneral", "Units for export of STEP/IGES", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PartGui::DlgSettingsGeneral", "Model settings", 0, QApplication::UnicodeUTF8));
        checkBooleanRefine->setText(QApplication::translate("PartGui::DlgSettingsGeneral", "Automatically refine model after boolean operation", 0, QApplication::UnicodeUTF8));
        checkBooleanCheck->setText(QApplication::translate("PartGui::DlgSettingsGeneral", "Automatically check model after boolean operation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgSettingsGeneral: public Ui_DlgSettingsGeneral {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGSETTINGSGENERAL_H
