/********************************************************************************
** Form generated from reading UI file 'DlgPartImportStep.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARTIMPORTSTEP_H
#define UI_DLGPARTIMPORTSTEP_H

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

class Ui_DlgPartImportStep
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5;
    QHBoxLayout *hboxLayout;
    QLineEdit *FileName;
    QPushButton *SearchFile;
    QHBoxLayout *hboxLayout1;
    QPushButton *OKButton;
    QSpacerItem *spacerItem;
    QPushButton *CancelButton;

    void setupUi(QDialog *PartGui__DlgPartImportStep)
    {
        if (PartGui__DlgPartImportStep->objectName().isEmpty())
            PartGui__DlgPartImportStep->setObjectName(QString::fromUtf8("PartGui__DlgPartImportStep"));
        PartGui__DlgPartImportStep->resize(342, 117);
        gridLayout = new QGridLayout(PartGui__DlgPartImportStep);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox5 = new QGroupBox(PartGui__DlgPartImportStep);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        hboxLayout = new QHBoxLayout(GroupBox5);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        FileName = new QLineEdit(GroupBox5);
        FileName->setObjectName(QString::fromUtf8("FileName"));

        hboxLayout->addWidget(FileName);

        SearchFile = new QPushButton(GroupBox5);
        SearchFile->setObjectName(QString::fromUtf8("SearchFile"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SearchFile->sizePolicy().hasHeightForWidth());
        SearchFile->setSizePolicy(sizePolicy);
        SearchFile->setMinimumSize(QSize(30, 0));
        SearchFile->setMaximumSize(QSize(30, 32767));

        hboxLayout->addWidget(SearchFile);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        OKButton = new QPushButton(PartGui__DlgPartImportStep);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));

        hboxLayout1->addWidget(OKButton);

        spacerItem = new QSpacerItem(151, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        CancelButton = new QPushButton(PartGui__DlgPartImportStep);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        hboxLayout1->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

        QWidget::setTabOrder(FileName, SearchFile);
        QWidget::setTabOrder(SearchFile, OKButton);
        QWidget::setTabOrder(OKButton, CancelButton);

        retranslateUi(PartGui__DlgPartImportStep);
        QObject::connect(OKButton, SIGNAL(clicked()), PartGui__DlgPartImportStep, SLOT(accept()));
        QObject::connect(CancelButton, SIGNAL(clicked()), PartGui__DlgPartImportStep, SLOT(reject()));

        QMetaObject::connectSlotsByName(PartGui__DlgPartImportStep);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgPartImportStep)
    {
        PartGui__DlgPartImportStep->setWindowTitle(QApplication::translate("PartGui::DlgPartImportStep", "Step input file", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("PartGui::DlgPartImportStep", "File Name", 0, QApplication::UnicodeUTF8));
        FileName->setText(QString());
        SearchFile->setText(QApplication::translate("PartGui::DlgPartImportStep", "...", 0, QApplication::UnicodeUTF8));
        OKButton->setText(QApplication::translate("PartGui::DlgPartImportStep", "OK", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("PartGui::DlgPartImportStep", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPartImportStep: public Ui_DlgPartImportStep {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPARTIMPORTSTEP_H
