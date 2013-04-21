/********************************************************************************
** Form generated from reading UI file 'DlgPartImportIges.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARTIMPORTIGES_H
#define UI_DLGPARTIMPORTIGES_H

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

namespace PartGui {

class Ui_DlgPartImportIges
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *OKButton;
    QSpacerItem *spacerItem;
    QPushButton *CancelButton;
    QGroupBox *GroupBox5;
    QHBoxLayout *hboxLayout1;
    QLineEdit *FileName;
    QPushButton *SearchFile;

    void setupUi(QDialog *PartGui__DlgPartImportIges)
    {
        if (PartGui__DlgPartImportIges->objectName().isEmpty())
            PartGui__DlgPartImportIges->setObjectName(QString::fromUtf8("PartGui__DlgPartImportIges"));
        PartGui__DlgPartImportIges->resize(342, 121);
        gridLayout = new QGridLayout(PartGui__DlgPartImportIges);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        OKButton = new QPushButton(PartGui__DlgPartImportIges);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));

        hboxLayout->addWidget(OKButton);

        spacerItem = new QSpacerItem(151, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        CancelButton = new QPushButton(PartGui__DlgPartImportIges);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        hboxLayout->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        GroupBox5 = new QGroupBox(PartGui__DlgPartImportIges);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        hboxLayout1 = new QHBoxLayout(GroupBox5);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        FileName = new QLineEdit(GroupBox5);
        FileName->setObjectName(QString::fromUtf8("FileName"));

        hboxLayout1->addWidget(FileName);

        SearchFile = new QPushButton(GroupBox5);
        SearchFile->setObjectName(QString::fromUtf8("SearchFile"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchFile->sizePolicy().hasHeightForWidth());
        SearchFile->setSizePolicy(sizePolicy);
        SearchFile->setMinimumSize(QSize(30, 0));
        SearchFile->setMaximumSize(QSize(30, 32767));

        hboxLayout1->addWidget(SearchFile);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        QWidget::setTabOrder(FileName, SearchFile);
        QWidget::setTabOrder(SearchFile, OKButton);
        QWidget::setTabOrder(OKButton, CancelButton);

        retranslateUi(PartGui__DlgPartImportIges);
        QObject::connect(OKButton, SIGNAL(clicked()), PartGui__DlgPartImportIges, SLOT(accept()));
        QObject::connect(CancelButton, SIGNAL(clicked()), PartGui__DlgPartImportIges, SLOT(reject()));

        QMetaObject::connectSlotsByName(PartGui__DlgPartImportIges);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgPartImportIges)
    {
        PartGui__DlgPartImportIges->setWindowTitle(QApplication::translate("PartGui::DlgPartImportIges", "IGES input file", 0, QApplication::UnicodeUTF8));
        OKButton->setText(QApplication::translate("PartGui::DlgPartImportIges", "OK", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("PartGui::DlgPartImportIges", "Cancel", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("PartGui::DlgPartImportIges", "File Name", 0, QApplication::UnicodeUTF8));
        FileName->setText(QString());
        SearchFile->setText(QApplication::translate("PartGui::DlgPartImportIges", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPartImportIges: public Ui_DlgPartImportIges {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPARTIMPORTIGES_H
