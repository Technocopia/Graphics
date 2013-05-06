/********************************************************************************
** Form generated from reading UI file 'DlgProjectInformation.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPROJECTINFORMATION_H
#define UI_DLGPROJECTINFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

namespace Gui {
namespace Dialog {

class Ui_DlgProjectInformation
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxInfo;
    QGridLayout *gridLayout1;
    QTextEdit *textEditComment;
    QLabel *textLabelName;
    QSpacerItem *spacerItem;
    QLabel *textLabelComment;
    QLabel *textLabelPath;
    QLineEdit *lineEditPath;
    QLineEdit *lineEditCreator;
    QLineEdit *lineEditLastMod;
    QLabel *textLabelLastMod;
    QLabel *textLabelCreator;
    QLabel *textLabelCompany;
    QLabel *textLabelLastModDate;
    QLineEdit *lineEditCompany;
    QLineEdit *lineEditDate;
    QLineEdit *lineEditLastModDate;
    QLabel *textLabelCreateDate;
    QLineEdit *lineEditName;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *Gui__Dialog__DlgProjectInformation)
    {
        if (Gui__Dialog__DlgProjectInformation->objectName().isEmpty())
            Gui__Dialog__DlgProjectInformation->setObjectName(QString::fromUtf8("Gui__Dialog__DlgProjectInformation"));
        Gui__Dialog__DlgProjectInformation->resize(597, 540);
        Gui__Dialog__DlgProjectInformation->setSizeGripEnabled(true);
        Gui__Dialog__DlgProjectInformation->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgProjectInformation);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxInfo = new QGroupBox(Gui__Dialog__DlgProjectInformation);
        groupBoxInfo->setObjectName(QString::fromUtf8("groupBoxInfo"));
        gridLayout1 = new QGridLayout(groupBoxInfo);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textEditComment = new QTextEdit(groupBoxInfo);
        textEditComment->setObjectName(QString::fromUtf8("textEditComment"));

        gridLayout1->addWidget(textEditComment, 7, 1, 2, 1);

        textLabelName = new QLabel(groupBoxInfo);
        textLabelName->setObjectName(QString::fromUtf8("textLabelName"));
        textLabelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelName, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(91, 240, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 8, 0, 1, 1);

        textLabelComment = new QLabel(groupBoxInfo);
        textLabelComment->setObjectName(QString::fromUtf8("textLabelComment"));
        textLabelComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelComment, 7, 0, 1, 1);

        textLabelPath = new QLabel(groupBoxInfo);
        textLabelPath->setObjectName(QString::fromUtf8("textLabelPath"));
        textLabelPath->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelPath, 1, 0, 1, 1);

        lineEditPath = new QLineEdit(groupBoxInfo);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));
        lineEditPath->setMinimumSize(QSize(0, 25));
        lineEditPath->setReadOnly(true);

        gridLayout1->addWidget(lineEditPath, 1, 1, 1, 1);

        lineEditCreator = new QLineEdit(groupBoxInfo);
        lineEditCreator->setObjectName(QString::fromUtf8("lineEditCreator"));
        lineEditCreator->setMinimumSize(QSize(0, 25));

        gridLayout1->addWidget(lineEditCreator, 2, 1, 1, 1);

        lineEditLastMod = new QLineEdit(groupBoxInfo);
        lineEditLastMod->setObjectName(QString::fromUtf8("lineEditLastMod"));
        lineEditLastMod->setMinimumSize(QSize(0, 25));

        gridLayout1->addWidget(lineEditLastMod, 4, 1, 1, 1);

        textLabelLastMod = new QLabel(groupBoxInfo);
        textLabelLastMod->setObjectName(QString::fromUtf8("textLabelLastMod"));
        textLabelLastMod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelLastMod, 4, 0, 1, 1);

        textLabelCreator = new QLabel(groupBoxInfo);
        textLabelCreator->setObjectName(QString::fromUtf8("textLabelCreator"));
        textLabelCreator->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelCreator, 2, 0, 1, 1);

        textLabelCompany = new QLabel(groupBoxInfo);
        textLabelCompany->setObjectName(QString::fromUtf8("textLabelCompany"));
        textLabelCompany->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelCompany, 6, 0, 1, 1);

        textLabelLastModDate = new QLabel(groupBoxInfo);
        textLabelLastModDate->setObjectName(QString::fromUtf8("textLabelLastModDate"));
        textLabelLastModDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelLastModDate, 5, 0, 1, 1);

        lineEditCompany = new QLineEdit(groupBoxInfo);
        lineEditCompany->setObjectName(QString::fromUtf8("lineEditCompany"));
        lineEditCompany->setMinimumSize(QSize(0, 25));

        gridLayout1->addWidget(lineEditCompany, 6, 1, 1, 1);

        lineEditDate = new QLineEdit(groupBoxInfo);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));
        lineEditDate->setMinimumSize(QSize(0, 25));
        lineEditDate->setReadOnly(true);

        gridLayout1->addWidget(lineEditDate, 3, 1, 1, 1);

        lineEditLastModDate = new QLineEdit(groupBoxInfo);
        lineEditLastModDate->setObjectName(QString::fromUtf8("lineEditLastModDate"));
        lineEditLastModDate->setMinimumSize(QSize(0, 25));
        lineEditLastModDate->setReadOnly(true);

        gridLayout1->addWidget(lineEditLastModDate, 5, 1, 1, 1);

        textLabelCreateDate = new QLabel(groupBoxInfo);
        textLabelCreateDate->setObjectName(QString::fromUtf8("textLabelCreateDate"));
        textLabelCreateDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(textLabelCreateDate, 3, 0, 1, 1);

        lineEditName = new QLineEdit(groupBoxInfo);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setMinimumSize(QSize(0, 25));
        lineEditName->setReadOnly(true);

        gridLayout1->addWidget(lineEditName, 0, 1, 1, 1);


        gridLayout->addWidget(groupBoxInfo, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        buttonOk = new QPushButton(Gui__Dialog__DlgProjectInformation);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(Gui__Dialog__DlgProjectInformation);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabelName->setBuddy(lineEditName);
        textLabelComment->setBuddy(textEditComment);
        textLabelLastMod->setBuddy(lineEditLastMod);
        textLabelCreator->setBuddy(lineEditCreator);
        textLabelCompany->setBuddy(lineEditCompany);
        textLabelLastModDate->setBuddy(lineEditLastModDate);
        textLabelCreateDate->setBuddy(lineEditDate);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEditName, lineEditCreator);
        QWidget::setTabOrder(lineEditCreator, lineEditDate);
        QWidget::setTabOrder(lineEditDate, lineEditLastMod);
        QWidget::setTabOrder(lineEditLastMod, lineEditLastModDate);
        QWidget::setTabOrder(lineEditLastModDate, lineEditCompany);
        QWidget::setTabOrder(lineEditCompany, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(Gui__Dialog__DlgProjectInformation);
        QObject::connect(buttonOk, SIGNAL(clicked()), Gui__Dialog__DlgProjectInformation, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), Gui__Dialog__DlgProjectInformation, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgProjectInformation);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgProjectInformation)
    {
        Gui__Dialog__DlgProjectInformation->setWindowTitle(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Project information", 0, QApplication::UnicodeUTF8));
        groupBoxInfo->setTitle(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Information", 0, QApplication::UnicodeUTF8));
        textLabelName->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "&Name:", 0, QApplication::UnicodeUTF8));
        textLabelComment->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Commen&t:", 0, QApplication::UnicodeUTF8));
        textLabelPath->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Path:", 0, QApplication::UnicodeUTF8));
        textLabelLastMod->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "&Last modified by:", 0, QApplication::UnicodeUTF8));
        textLabelCreator->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Created &by:", 0, QApplication::UnicodeUTF8));
        textLabelCompany->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Com&pany:", 0, QApplication::UnicodeUTF8));
        textLabelLastModDate->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Last &modification date:", 0, QApplication::UnicodeUTF8));
        textLabelCreateDate->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "Creation &date:", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgProjectInformation", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgProjectInformation: public Ui_DlgProjectInformation {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPROJECTINFORMATION_H
