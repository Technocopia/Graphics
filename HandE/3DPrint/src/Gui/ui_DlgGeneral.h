/********************************************************************************
** Form generated from reading UI file 'DlgGeneral.ui'
**
** Created: Thu Apr 18 22:16:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGGENERAL_H
#define UI_DLGGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgGeneral
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QGroupBox *GroupBox10;
    QGridLayout *gridLayout2;
    Gui::PrefCheckBox *SplashScreen;
    QGridLayout *gridLayout3;
    QLabel *tabReportLabel;
    QComboBox *AutoloadModuleCombo;
    Gui::PrefComboBox *AutoloadTabCombo;
    QLabel *autoModuleLabel;
    QGroupBox *GroupBox7;
    QGridLayout *gridLayout4;
    QHBoxLayout *hboxLayout;
    QLabel *TextLabel1_4;
    QComboBox *Languages;
    QGroupBox *GroupBox3;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout1;
    QLabel *recentFileListLabel;
    QSpacerItem *spacerItem1;
    Gui::PrefSpinBox *RecentFiles;
    QHBoxLayout *hboxLayout2;
    QLabel *windowStyleLabel;
    QComboBox *WindowStyle;
    QHBoxLayout *hboxLayout3;
    QLabel *iconSizeLabel;
    QComboBox *toolbarIconSize;

    void setupUi(QWidget *Gui__Dialog__DlgGeneral)
    {
        if (Gui__Dialog__DlgGeneral->objectName().isEmpty())
            Gui__Dialog__DlgGeneral->setObjectName(QString::fromUtf8("Gui__Dialog__DlgGeneral"));
        Gui__Dialog__DlgGeneral->resize(390, 553);
        gridLayout = new QGridLayout(Gui__Dialog__DlgGeneral);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox5 = new QGroupBox(Gui__Dialog__DlgGeneral);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        gridLayout1 = new QGridLayout(GroupBox5);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem = new QSpacerItem(352, 221, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 3, 0, 1, 1);

        GroupBox10 = new QGroupBox(GroupBox5);
        GroupBox10->setObjectName(QString::fromUtf8("GroupBox10"));
        gridLayout2 = new QGridLayout(GroupBox10);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        SplashScreen = new Gui::PrefCheckBox(GroupBox10);
        SplashScreen->setObjectName(QString::fromUtf8("SplashScreen"));
        SplashScreen->setChecked(true);
        SplashScreen->setProperty("prefEntry", QVariant(QByteArray("ShowSplasher")));
        SplashScreen->setProperty("prefPath", QVariant(QByteArray("General")));

        gridLayout2->addWidget(SplashScreen, 1, 0, 1, 1);

        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        tabReportLabel = new QLabel(GroupBox10);
        tabReportLabel->setObjectName(QString::fromUtf8("tabReportLabel"));

        gridLayout3->addWidget(tabReportLabel, 1, 0, 1, 1);

        AutoloadModuleCombo = new QComboBox(GroupBox10);
        AutoloadModuleCombo->setObjectName(QString::fromUtf8("AutoloadModuleCombo"));

        gridLayout3->addWidget(AutoloadModuleCombo, 0, 1, 1, 1);

        AutoloadTabCombo = new Gui::PrefComboBox(GroupBox10);
        AutoloadTabCombo->setObjectName(QString::fromUtf8("AutoloadTabCombo"));
        AutoloadTabCombo->setProperty("prefEntry", QVariant(QByteArray("AutoloadTab")));
        AutoloadTabCombo->setProperty("prefPath", QVariant(QByteArray("General")));

        gridLayout3->addWidget(AutoloadTabCombo, 1, 1, 1, 1);

        autoModuleLabel = new QLabel(GroupBox10);
        autoModuleLabel->setObjectName(QString::fromUtf8("autoModuleLabel"));

        gridLayout3->addWidget(autoModuleLabel, 0, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox10, 2, 0, 1, 1);

        GroupBox7 = new QGroupBox(GroupBox5);
        GroupBox7->setObjectName(QString::fromUtf8("GroupBox7"));
        gridLayout4 = new QGridLayout(GroupBox7);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        TextLabel1_4 = new QLabel(GroupBox7);
        TextLabel1_4->setObjectName(QString::fromUtf8("TextLabel1_4"));

        hboxLayout->addWidget(TextLabel1_4);

        Languages = new QComboBox(GroupBox7);
        Languages->setObjectName(QString::fromUtf8("Languages"));

        hboxLayout->addWidget(Languages);


        gridLayout4->addLayout(hboxLayout, 0, 0, 1, 1);


        gridLayout1->addWidget(GroupBox7, 0, 0, 1, 1);

        GroupBox3 = new QGroupBox(GroupBox5);
        GroupBox3->setObjectName(QString::fromUtf8("GroupBox3"));
        vboxLayout = new QVBoxLayout(GroupBox3);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        recentFileListLabel = new QLabel(GroupBox3);
        recentFileListLabel->setObjectName(QString::fromUtf8("recentFileListLabel"));

        hboxLayout1->addWidget(recentFileListLabel);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        RecentFiles = new Gui::PrefSpinBox(GroupBox3);
        RecentFiles->setObjectName(QString::fromUtf8("RecentFiles"));
        RecentFiles->setValue(4);
        RecentFiles->setProperty("prefEntry", QVariant(QByteArray("RecentFiles")));
        RecentFiles->setProperty("prefPath", QVariant(QByteArray("RecentFiles")));

        hboxLayout1->addWidget(RecentFiles);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        windowStyleLabel = new QLabel(GroupBox3);
        windowStyleLabel->setObjectName(QString::fromUtf8("windowStyleLabel"));

        hboxLayout2->addWidget(windowStyleLabel);

        WindowStyle = new QComboBox(GroupBox3);
        WindowStyle->setObjectName(QString::fromUtf8("WindowStyle"));

        hboxLayout2->addWidget(WindowStyle);


        vboxLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        iconSizeLabel = new QLabel(GroupBox3);
        iconSizeLabel->setObjectName(QString::fromUtf8("iconSizeLabel"));

        hboxLayout3->addWidget(iconSizeLabel);

        toolbarIconSize = new QComboBox(GroupBox3);
        toolbarIconSize->setObjectName(QString::fromUtf8("toolbarIconSize"));

        hboxLayout3->addWidget(toolbarIconSize);


        vboxLayout->addLayout(hboxLayout3);


        gridLayout1->addWidget(GroupBox3, 1, 0, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        QWidget::setTabOrder(Languages, WindowStyle);
        QWidget::setTabOrder(WindowStyle, RecentFiles);
        QWidget::setTabOrder(RecentFiles, SplashScreen);

        retranslateUi(Gui__Dialog__DlgGeneral);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgGeneral);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgGeneral)
    {
        Gui__Dialog__DlgGeneral->setWindowTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "General", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "General", 0, QApplication::UnicodeUTF8));
        GroupBox10->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "Start up", 0, QApplication::UnicodeUTF8));
        SplashScreen->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Enable splash screen at start up", 0, QApplication::UnicodeUTF8));
        tabReportLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Switch to tab of report window:", 0, QApplication::UnicodeUTF8));
        autoModuleLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Auto load module after start up:", 0, QApplication::UnicodeUTF8));
        GroupBox7->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "Language", 0, QApplication::UnicodeUTF8));
        TextLabel1_4->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Change language:", 0, QApplication::UnicodeUTF8));
        GroupBox3->setTitle(QApplication::translate("Gui::Dialog::DlgGeneral", "Main window", 0, QApplication::UnicodeUTF8));
        recentFileListLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Size of recent file list", 0, QApplication::UnicodeUTF8));
        windowStyleLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Window style:", 0, QApplication::UnicodeUTF8));
        iconSizeLabel->setText(QApplication::translate("Gui::Dialog::DlgGeneral", "Size of toolbar icons:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgGeneral: public Ui_DlgGeneral {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGGENERAL_H
