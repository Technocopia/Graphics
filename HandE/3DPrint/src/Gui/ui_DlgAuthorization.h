/********************************************************************************
** Form generated from reading UI file 'DlgAuthorization.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGAUTHORIZATION_H
#define UI_DLGAUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

namespace Gui {
namespace Dialog {

class Ui_DlgAuthorization
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonOk;
    QSpacerItem *spacerItem;
    QPushButton *buttonCancel;
    QLineEdit *password;
    QLabel *textLabel2;
    QLineEdit *username;
    QLabel *textLabel1;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *Gui__Dialog__DlgAuthorization)
    {
        if (Gui__Dialog__DlgAuthorization->objectName().isEmpty())
            Gui__Dialog__DlgAuthorization->setObjectName(QString::fromUtf8("Gui__Dialog__DlgAuthorization"));
        Gui__Dialog__DlgAuthorization->resize(304, 189);
        Gui__Dialog__DlgAuthorization->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgAuthorization);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonOk = new QPushButton(Gui__Dialog__DlgAuthorization);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        spacerItem = new QSpacerItem(140, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonCancel = new QPushButton(Gui__Dialog__DlgAuthorization);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 1);

        password = new QLineEdit(Gui__Dialog__DlgAuthorization);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 3, 0, 1, 1);

        textLabel2 = new QLabel(Gui__Dialog__DlgAuthorization);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 2, 0, 1, 1);

        username = new QLineEdit(Gui__Dialog__DlgAuthorization);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 1, 0, 1, 1);

        textLabel1 = new QLabel(Gui__Dialog__DlgAuthorization);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(21, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 4, 0, 1, 1);

        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(Gui__Dialog__DlgAuthorization);
        QObject::connect(buttonOk, SIGNAL(clicked()), Gui__Dialog__DlgAuthorization, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), Gui__Dialog__DlgAuthorization, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgAuthorization);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgAuthorization)
    {
        Gui__Dialog__DlgAuthorization->setWindowTitle(QApplication::translate("Gui::Dialog::DlgAuthorization", "Authorization", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
        textLabel2->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "Password:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgAuthorization", "User name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgAuthorization: public Ui_DlgAuthorization {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGAUTHORIZATION_H
