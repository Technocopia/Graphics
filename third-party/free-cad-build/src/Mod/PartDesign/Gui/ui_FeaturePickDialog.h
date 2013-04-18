/********************************************************************************
** Form generated from reading UI file 'FeaturePickDialog.ui'
**
** Created: Thu Apr 18 07:20:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEATUREPICKDIALOG_H
#define UI_FEATUREPICKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>

namespace PartDesignGui {

class Ui_FeaturePickDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PartDesignGui__FeaturePickDialog)
    {
        if (PartDesignGui__FeaturePickDialog->objectName().isEmpty())
            PartDesignGui__FeaturePickDialog->setObjectName(QString::fromUtf8("PartDesignGui__FeaturePickDialog"));
        PartDesignGui__FeaturePickDialog->resize(218, 235);
        verticalLayout = new QVBoxLayout(PartDesignGui__FeaturePickDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(PartDesignGui__FeaturePickDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        buttonBox = new QDialogButtonBox(PartDesignGui__FeaturePickDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PartDesignGui__FeaturePickDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PartDesignGui__FeaturePickDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PartDesignGui__FeaturePickDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PartDesignGui__FeaturePickDialog);
    } // setupUi

    void retranslateUi(QDialog *PartDesignGui__FeaturePickDialog)
    {
        PartDesignGui__FeaturePickDialog->setWindowTitle(QApplication::translate("PartDesignGui::FeaturePickDialog", "Choose feature", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class FeaturePickDialog: public Ui_FeaturePickDialog {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_FEATUREPICKDIALOG_H
