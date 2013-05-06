/********************************************************************************
** Form generated from reading UI file 'DlgReportView.ui'
**
** Created: Thu Apr 18 22:16:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGREPORTVIEW_H
#define UI_DLGREPORTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgReportView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    Gui::PrefCheckBox *pythonOutput;
    Gui::PrefCheckBox *pythonError;
    QGroupBox *groupBox1;
    QVBoxLayout *vboxLayout;
    Gui::PrefCheckBox *checkLogging;
    Gui::PrefCheckBox *checkWarning;
    Gui::PrefCheckBox *checkError;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem2;
    Gui::PrefColorButton *colorError;
    QSpacerItem *spacerItem3;
    QLabel *textLabel1;
    Gui::PrefColorButton *colorLogging;
    QSpacerItem *spacerItem4;
    QLabel *textLabel2;
    Gui::PrefColorButton *colorWarning;
    QLabel *textLabel3;
    QSpacerItem *spacerItem5;
    QLabel *textLabel4;
    Gui::PrefColorButton *colorText;

    void setupUi(QWidget *Gui__Dialog__DlgReportView)
    {
        if (Gui__Dialog__DlgReportView->objectName().isEmpty())
            Gui__Dialog__DlgReportView->setObjectName(QString::fromUtf8("Gui__Dialog__DlgReportView"));
        Gui__Dialog__DlgReportView->resize(432, 404);
        gridLayout = new QGridLayout(Gui__Dialog__DlgReportView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(410, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        pythonOutput = new Gui::PrefCheckBox(Gui__Dialog__DlgReportView);
        pythonOutput->setObjectName(QString::fromUtf8("pythonOutput"));
        pythonOutput->setProperty("prefEntry", QVariant(QByteArray("RedirectPythonOutput")));
        pythonOutput->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        gridLayout->addWidget(pythonOutput, 3, 0, 1, 1);

        pythonError = new Gui::PrefCheckBox(Gui__Dialog__DlgReportView);
        pythonError->setObjectName(QString::fromUtf8("pythonError"));
        pythonError->setProperty("prefEntry", QVariant(QByteArray("RedirectPythonErrors")));
        pythonError->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        gridLayout->addWidget(pythonError, 4, 0, 1, 1);

        groupBox1 = new QGroupBox(Gui__Dialog__DlgReportView);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        vboxLayout = new QVBoxLayout(groupBox1);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        checkLogging = new Gui::PrefCheckBox(groupBox1);
        checkLogging->setObjectName(QString::fromUtf8("checkLogging"));
        checkLogging->setProperty("prefEntry", QVariant(QByteArray("checkLogging")));
        checkLogging->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        vboxLayout->addWidget(checkLogging);

        checkWarning = new Gui::PrefCheckBox(groupBox1);
        checkWarning->setObjectName(QString::fromUtf8("checkWarning"));
        checkWarning->setChecked(true);
        checkWarning->setProperty("prefEntry", QVariant(QByteArray("checkWarning")));
        checkWarning->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        vboxLayout->addWidget(checkWarning);

        checkError = new Gui::PrefCheckBox(groupBox1);
        checkError->setObjectName(QString::fromUtf8("checkError"));
        checkError->setChecked(true);
        checkError->setProperty("prefEntry", QVariant(QByteArray("checkError")));
        checkError->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        vboxLayout->addWidget(checkError);


        gridLayout->addWidget(groupBox1, 0, 0, 1, 1);

        groupBox2 = new QGroupBox(Gui__Dialog__DlgReportView);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout1 = new QGridLayout(groupBox2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 1, 1, 1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem2 = new QSpacerItem(211, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 3, 1, 1, 1);

        colorError = new Gui::PrefColorButton(groupBox2);
        colorError->setObjectName(QString::fromUtf8("colorError"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorError->sizePolicy().hasHeightForWidth());
        colorError->setSizePolicy(sizePolicy);
        colorError->setMinimumSize(QSize(75, 0));
        colorError->setColor(QColor(255, 0, 0));
        colorError->setProperty("prefEntry", QVariant(QByteArray("colorError")));
        colorError->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        gridLayout2->addWidget(colorError, 3, 2, 1, 1);

        spacerItem3 = new QSpacerItem(211, 23, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem3, 2, 1, 1, 1);

        textLabel1 = new QLabel(groupBox2);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        colorLogging = new Gui::PrefColorButton(groupBox2);
        colorLogging->setObjectName(QString::fromUtf8("colorLogging"));
        sizePolicy.setHeightForWidth(colorLogging->sizePolicy().hasHeightForWidth());
        colorLogging->setSizePolicy(sizePolicy);
        colorLogging->setMinimumSize(QSize(75, 0));
        colorLogging->setColor(QColor(0, 0, 255));
        colorLogging->setProperty("prefEntry", QVariant(QByteArray("colorLogging")));
        colorLogging->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        gridLayout2->addWidget(colorLogging, 1, 2, 1, 1);

        spacerItem4 = new QSpacerItem(211, 23, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem4, 1, 1, 1, 1);

        textLabel2 = new QLabel(groupBox2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout2->addWidget(textLabel2, 1, 0, 1, 1);

        colorWarning = new Gui::PrefColorButton(groupBox2);
        colorWarning->setObjectName(QString::fromUtf8("colorWarning"));
        sizePolicy.setHeightForWidth(colorWarning->sizePolicy().hasHeightForWidth());
        colorWarning->setSizePolicy(sizePolicy);
        colorWarning->setMinimumSize(QSize(75, 0));
        colorWarning->setColor(QColor(255, 170, 0));
        colorWarning->setProperty("prefEntry", QVariant(QByteArray("colorWarning")));
        colorWarning->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        gridLayout2->addWidget(colorWarning, 2, 2, 1, 1);

        textLabel3 = new QLabel(groupBox2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout2->addWidget(textLabel3, 2, 0, 1, 1);

        spacerItem5 = new QSpacerItem(214, 23, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem5, 0, 1, 1, 1);

        textLabel4 = new QLabel(groupBox2);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout2->addWidget(textLabel4, 3, 0, 1, 1);

        colorText = new Gui::PrefColorButton(groupBox2);
        colorText->setObjectName(QString::fromUtf8("colorText"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(colorText->sizePolicy().hasHeightForWidth());
        colorText->setSizePolicy(sizePolicy1);
        colorText->setMinimumSize(QSize(75, 0));
        colorText->setColor(QColor(0, 0, 0));
        colorText->setProperty("prefEntry", QVariant(QByteArray("colorText")));
        colorText->setProperty("prefPath", QVariant(QByteArray("OutputWindow")));

        gridLayout2->addWidget(colorText, 0, 2, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox2, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgReportView);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgReportView);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgReportView)
    {
        Gui__Dialog__DlgReportView->setWindowTitle(QApplication::translate("Gui::Dialog::DlgReportView", "Output window", 0, QApplication::UnicodeUTF8));
        pythonOutput->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Redirect internal Python output to report view", 0, QApplication::UnicodeUTF8));
        pythonError->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Redirect internal Python errors to report view", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("Gui::Dialog::DlgReportView", "Output", 0, QApplication::UnicodeUTF8));
        checkLogging->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Record log messages", 0, QApplication::UnicodeUTF8));
        checkWarning->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Record warnings", 0, QApplication::UnicodeUTF8));
        checkError->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Record error messages", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("Gui::Dialog::DlgReportView", "Colors", 0, QApplication::UnicodeUTF8));
        colorError->setText(QString());
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Normal messages:", 0, QApplication::UnicodeUTF8));
        colorLogging->setText(QString());
        textLabel2->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Log messages:", 0, QApplication::UnicodeUTF8));
        colorWarning->setText(QString());
        textLabel3->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Warnings:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("Gui::Dialog::DlgReportView", "Errors:", 0, QApplication::UnicodeUTF8));
        colorText->setText(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgReportView: public Ui_DlgReportView {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGREPORTVIEW_H
