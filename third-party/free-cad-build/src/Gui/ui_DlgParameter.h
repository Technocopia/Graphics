/********************************************************************************
** Form generated from reading UI file 'DlgParameter.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARAMETER_H
#define UI_DLGPARAMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>

namespace Gui {
namespace Dialog {

class Ui_DlgParameter
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonSaveToDisk;
    QPushButton *closeButton;
    QSplitter *splitter3;
    QComboBox *parameterSet;

    void setupUi(QDialog *Gui__Dialog__DlgParameter)
    {
        if (Gui__Dialog__DlgParameter->objectName().isEmpty())
            Gui__Dialog__DlgParameter->setObjectName(QString::fromUtf8("Gui__Dialog__DlgParameter"));
        Gui__Dialog__DlgParameter->resize(657, 558);
        Gui__Dialog__DlgParameter->setSizeGripEnabled(true);
        Gui__Dialog__DlgParameter->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgParameter);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(351, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonSaveToDisk = new QPushButton(Gui__Dialog__DlgParameter);
        buttonSaveToDisk->setObjectName(QString::fromUtf8("buttonSaveToDisk"));
        buttonSaveToDisk->setAutoDefault(true);
        buttonSaveToDisk->setDefault(true);

        hboxLayout->addWidget(buttonSaveToDisk);

        closeButton = new QPushButton(Gui__Dialog__DlgParameter);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(true);
        closeButton->setDefault(true);

        hboxLayout->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        splitter3 = new QSplitter(Gui__Dialog__DlgParameter);
        splitter3->setObjectName(QString::fromUtf8("splitter3"));
        splitter3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(splitter3, 1, 0, 1, 1);

        parameterSet = new QComboBox(Gui__Dialog__DlgParameter);
        parameterSet->setObjectName(QString::fromUtf8("parameterSet"));

        gridLayout->addWidget(parameterSet, 0, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgParameter);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgParameter);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgParameter)
    {
        Gui__Dialog__DlgParameter->setWindowTitle(QApplication::translate("Gui::Dialog::DlgParameter", "Parameter Editor", 0, QApplication::UnicodeUTF8));
        buttonSaveToDisk->setText(QApplication::translate("Gui::Dialog::DlgParameter", "Save to disk", 0, QApplication::UnicodeUTF8));
        buttonSaveToDisk->setShortcut(QApplication::translate("Gui::Dialog::DlgParameter", "Alt+C", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("Gui::Dialog::DlgParameter", "&Close", 0, QApplication::UnicodeUTF8));
        closeButton->setShortcut(QApplication::translate("Gui::Dialog::DlgParameter", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgParameter: public Ui_DlgParameter {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPARAMETER_H
