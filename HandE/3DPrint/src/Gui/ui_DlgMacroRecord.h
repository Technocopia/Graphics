/********************************************************************************
** Form generated from reading UI file 'DlgMacroRecord.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMACRORECORD_H
#define UI_DLGMACRORECORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

namespace Gui {
namespace Dialog {

class Ui_DlgMacroRecord
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEditPath;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout;
    QLineEdit *lineEditMacroPath;
    QPushButton *pushButtonChooseDir;
    QHBoxLayout *hboxLayout1;
    QPushButton *buttonStart;
    QSpacerItem *spacerItem;
    QPushButton *buttonStop;
    QPushButton *buttonCancel;

    void setupUi(QDialog *Gui__Dialog__DlgMacroRecord)
    {
        if (Gui__Dialog__DlgMacroRecord->objectName().isEmpty())
            Gui__Dialog__DlgMacroRecord->setObjectName(QString::fromUtf8("Gui__Dialog__DlgMacroRecord"));
        Gui__Dialog__DlgMacroRecord->resize(292, 166);
        Gui__Dialog__DlgMacroRecord->setModal(true);
        vboxLayout = new QVBoxLayout(Gui__Dialog__DlgMacroRecord);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(Gui__Dialog__DlgMacroRecord);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditPath = new QLineEdit(groupBox);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditPath->sizePolicy().hasHeightForWidth());
        lineEditPath->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEditPath, 0, 0, 1, 1);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Gui__Dialog__DlgMacroRecord);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout = new QHBoxLayout(groupBox_2);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lineEditMacroPath = new QLineEdit(groupBox_2);
        lineEditMacroPath->setObjectName(QString::fromUtf8("lineEditMacroPath"));
        lineEditMacroPath->setEnabled(false);

        hboxLayout->addWidget(lineEditMacroPath);

        pushButtonChooseDir = new QPushButton(groupBox_2);
        pushButtonChooseDir->setObjectName(QString::fromUtf8("pushButtonChooseDir"));
        pushButtonChooseDir->setMaximumSize(QSize(35, 16777215));

        hboxLayout->addWidget(pushButtonChooseDir);


        vboxLayout->addWidget(groupBox_2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        buttonStart = new QPushButton(Gui__Dialog__DlgMacroRecord);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        buttonStart->setDefault(true);

        hboxLayout1->addWidget(buttonStart);

        spacerItem = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonStop = new QPushButton(Gui__Dialog__DlgMacroRecord);
        buttonStop->setObjectName(QString::fromUtf8("buttonStop"));
        buttonStop->setDefault(true);

        hboxLayout1->addWidget(buttonStop);

        buttonCancel = new QPushButton(Gui__Dialog__DlgMacroRecord);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        hboxLayout1->addWidget(buttonCancel);


        vboxLayout->addLayout(hboxLayout1);

        QWidget::setTabOrder(lineEditPath, buttonStart);
        QWidget::setTabOrder(buttonStart, buttonStop);
        QWidget::setTabOrder(buttonStop, buttonCancel);

        retranslateUi(Gui__Dialog__DlgMacroRecord);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgMacroRecord);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgMacroRecord)
    {
        Gui__Dialog__DlgMacroRecord->setWindowTitle(QApplication::translate("Gui::Dialog::DlgMacroRecord", "Macro recording", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::DlgMacroRecord", "Macro name:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Gui::Dialog::DlgMacroRecord", "Macro path:", 0, QApplication::UnicodeUTF8));
        pushButtonChooseDir->setText(QApplication::translate("Gui::Dialog::DlgMacroRecord", "...", 0, QApplication::UnicodeUTF8));
        buttonStart->setText(QApplication::translate("Gui::Dialog::DlgMacroRecord", "Record", 0, QApplication::UnicodeUTF8));
        buttonStop->setText(QApplication::translate("Gui::Dialog::DlgMacroRecord", "Stop", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgMacroRecord", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgMacroRecord: public Ui_DlgMacroRecord {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGMACRORECORD_H
