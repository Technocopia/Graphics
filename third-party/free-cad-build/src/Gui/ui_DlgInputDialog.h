/********************************************************************************
** Form generated from reading UI file 'DlgInputDialog.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGINPUTDIALOG_H
#define UI_DLGINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Gui/SpinBox.h"

namespace Gui {
namespace Dialog {

class Ui_DlgInputDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QStackedWidget *stack;
    QWidget *WStackPage1;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QWidget *WStackPage2;
    QGridLayout *gridLayout1;
    QSpinBox *spinBox;
    QWidget *WStackPage3;
    QGridLayout *gridLayout2;
    QDoubleSpinBox *floatSpinBox;
    QWidget *WStackPage4;
    QGridLayout *gridLayout3;
    QComboBox *comboBox;
    QWidget *WStackPage5;
    QHBoxLayout *hboxLayout;
    Gui::UIntSpinBox *uIntSpinBox;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *Gui__Dialog__DlgInputDialog)
    {
        if (Gui__Dialog__DlgInputDialog->objectName().isEmpty())
            Gui__Dialog__DlgInputDialog->setObjectName(QString::fromUtf8("Gui__Dialog__DlgInputDialog"));
        Gui__Dialog__DlgInputDialog->resize(400, 89);
        Gui__Dialog__DlgInputDialog->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(Gui__Dialog__DlgInputDialog);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(Gui__Dialog__DlgInputDialog);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        stack = new QStackedWidget(Gui__Dialog__DlgInputDialog);
        stack->setObjectName(QString::fromUtf8("stack"));
        WStackPage1 = new QWidget();
        WStackPage1->setObjectName(QString::fromUtf8("WStackPage1"));
        gridLayout = new QGridLayout(WStackPage1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(WStackPage1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        stack->addWidget(WStackPage1);
        WStackPage2 = new QWidget();
        WStackPage2->setObjectName(QString::fromUtf8("WStackPage2"));
        gridLayout1 = new QGridLayout(WStackPage2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(1, 1, 1, 1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spinBox = new QSpinBox(WStackPage2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout1->addWidget(spinBox, 0, 0, 1, 1);

        stack->addWidget(WStackPage2);
        WStackPage3 = new QWidget();
        WStackPage3->setObjectName(QString::fromUtf8("WStackPage3"));
        gridLayout2 = new QGridLayout(WStackPage3);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(1, 1, 1, 1);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        floatSpinBox = new QDoubleSpinBox(WStackPage3);
        floatSpinBox->setObjectName(QString::fromUtf8("floatSpinBox"));

        gridLayout2->addWidget(floatSpinBox, 0, 0, 1, 1);

        stack->addWidget(WStackPage3);
        WStackPage4 = new QWidget();
        WStackPage4->setObjectName(QString::fromUtf8("WStackPage4"));
        gridLayout3 = new QGridLayout(WStackPage4);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(1, 1, 1, 1);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        comboBox = new QComboBox(WStackPage4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout3->addWidget(comboBox, 0, 0, 1, 1);

        stack->addWidget(WStackPage4);
        WStackPage5 = new QWidget();
        WStackPage5->setObjectName(QString::fromUtf8("WStackPage5"));
        hboxLayout = new QHBoxLayout(WStackPage5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        uIntSpinBox = new Gui::UIntSpinBox(WStackPage5);
        uIntSpinBox->setObjectName(QString::fromUtf8("uIntSpinBox"));

        hboxLayout->addWidget(uIntSpinBox);

        stack->addWidget(WStackPage5);

        vboxLayout->addWidget(stack);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonOk = new QPushButton(Gui__Dialog__DlgInputDialog);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setDefault(true);

        hboxLayout1->addWidget(buttonOk);

        buttonCancel = new QPushButton(Gui__Dialog__DlgInputDialog);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        hboxLayout1->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(Gui__Dialog__DlgInputDialog);
        QObject::connect(buttonOk, SIGNAL(clicked()), Gui__Dialog__DlgInputDialog, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), Gui__Dialog__DlgInputDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgInputDialog);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgInputDialog)
    {
        Gui__Dialog__DlgInputDialog->setWindowTitle(QApplication::translate("Gui::Dialog::DlgInputDialog", "Input", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        buttonOk->setText(QApplication::translate("Gui::Dialog::DlgInputDialog", "OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgInputDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgInputDialog: public Ui_DlgInputDialog {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGINPUTDIALOG_H
