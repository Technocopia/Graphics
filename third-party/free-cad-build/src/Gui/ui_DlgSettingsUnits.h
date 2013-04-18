/********************************************************************************
** Form generated from reading UI file 'DlgSettingsUnits.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSUNITS_H
#define UI_DLGSETTINGSUNITS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsUnits
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GroupBox6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_ViewSystem;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsUnits)
    {
        if (Gui__Dialog__DlgSettingsUnits->objectName().isEmpty())
            Gui__Dialog__DlgSettingsUnits->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsUnits"));
        Gui__Dialog__DlgSettingsUnits->resize(380, 388);
        verticalLayout_2 = new QVBoxLayout(Gui__Dialog__DlgSettingsUnits);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        GroupBox6 = new QGroupBox(Gui__Dialog__DlgSettingsUnits);
        GroupBox6->setObjectName(QString::fromUtf8("GroupBox6"));
        verticalLayout = new QVBoxLayout(GroupBox6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(GroupBox6);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox_ViewSystem = new QComboBox(GroupBox6);
        comboBox_ViewSystem->setObjectName(QString::fromUtf8("comboBox_ViewSystem"));

        horizontalLayout->addWidget(comboBox_ViewSystem);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(GroupBox6);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addWidget(GroupBox6);


        retranslateUi(Gui__Dialog__DlgSettingsUnits);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsUnits);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsUnits)
    {
        Gui__Dialog__DlgSettingsUnits->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsUnits", "Units", 0, QApplication::UnicodeUTF8));
        GroupBox6->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsUnits", "Units settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::DlgSettingsUnits", "User system:", 0, QApplication::UnicodeUTF8));
        comboBox_ViewSystem->clear();
        comboBox_ViewSystem->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettingsUnits", "Standard (mm/kg/s/degree)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsUnits", "MKS (m/kg/s/degree)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsUnits", "Imperial (in/lb)", 0, QApplication::UnicodeUTF8)
        );
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Gui::Dialog::DlgSettingsUnits", "Magnitude", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Gui::Dialog::DlgSettingsUnits", "Unit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsUnits: public Ui_DlgSettingsUnits {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSUNITS_H
