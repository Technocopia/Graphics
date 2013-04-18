/********************************************************************************
** Form generated from reading UI file 'DlgActivateWindow.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGACTIVATEWINDOW_H
#define UI_DLGACTIVATEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgActivateWindow
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonOk;
    QSpacerItem *spacerItem;
    QPushButton *buttonCancel;

    void setupUi(QDialog *Gui__Dialog__DlgActivateWindow)
    {
        if (Gui__Dialog__DlgActivateWindow->objectName().isEmpty())
            Gui__Dialog__DlgActivateWindow->setObjectName(QString::fromUtf8("Gui__Dialog__DlgActivateWindow"));
        Gui__Dialog__DlgActivateWindow->resize(341, 267);
        Gui__Dialog__DlgActivateWindow->setSizeGripEnabled(true);
        Gui__Dialog__DlgActivateWindow->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgActivateWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(Gui__Dialog__DlgActivateWindow);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonOk = new QPushButton(Gui__Dialog__DlgActivateWindow);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        spacerItem = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonCancel = new QPushButton(Gui__Dialog__DlgActivateWindow);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(Gui__Dialog__DlgActivateWindow);
        QObject::connect(buttonOk, SIGNAL(clicked()), Gui__Dialog__DlgActivateWindow, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), Gui__Dialog__DlgActivateWindow, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(activated(QModelIndex)), Gui__Dialog__DlgActivateWindow, SLOT(accept()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgActivateWindow);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgActivateWindow)
    {
        Gui__Dialog__DlgActivateWindow->setWindowTitle(QApplication::translate("Gui::Dialog::DlgActivateWindow", "Choose Window", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("Gui::Dialog::DlgActivateWindow", "&Activate", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QApplication::translate("Gui::Dialog::DlgActivateWindow", "Alt+A", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgActivateWindow", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgActivateWindow: public Ui_DlgActivateWindow {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGACTIVATEWINDOW_H
