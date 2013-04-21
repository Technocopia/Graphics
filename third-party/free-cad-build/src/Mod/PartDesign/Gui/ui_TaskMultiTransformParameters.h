/********************************************************************************
** Form generated from reading UI file 'TaskMultiTransformParameters.ui'
**
** Created: Thu Apr 18 22:35:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMULTITRANSFORMPARAMETERS_H
#define UI_TASKMULTITRANSFORMPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskMultiTransformParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutOriginal;
    QLabel *labelOriginal;
    QLineEdit *lineOriginal;
    QLabel *label_2;
    QListWidget *listTransformFeatures;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskMultiTransformParameters)
    {
        if (PartDesignGui__TaskMultiTransformParameters->objectName().isEmpty())
            PartDesignGui__TaskMultiTransformParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskMultiTransformParameters"));
        PartDesignGui__TaskMultiTransformParameters->resize(225, 182);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskMultiTransformParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutOriginal = new QHBoxLayout();
        horizontalLayoutOriginal->setObjectName(QString::fromUtf8("horizontalLayoutOriginal"));
        labelOriginal = new QLabel(PartDesignGui__TaskMultiTransformParameters);
        labelOriginal->setObjectName(QString::fromUtf8("labelOriginal"));

        horizontalLayoutOriginal->addWidget(labelOriginal);

        lineOriginal = new QLineEdit(PartDesignGui__TaskMultiTransformParameters);
        lineOriginal->setObjectName(QString::fromUtf8("lineOriginal"));

        horizontalLayoutOriginal->addWidget(lineOriginal);


        verticalLayout->addLayout(horizontalLayoutOriginal);

        label_2 = new QLabel(PartDesignGui__TaskMultiTransformParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        listTransformFeatures = new QListWidget(PartDesignGui__TaskMultiTransformParameters);
        listTransformFeatures->setObjectName(QString::fromUtf8("listTransformFeatures"));
        listTransformFeatures->setMaximumSize(QSize(16777215, 80));

        verticalLayout->addWidget(listTransformFeatures);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskMultiTransformParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);


        retranslateUi(PartDesignGui__TaskMultiTransformParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskMultiTransformParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskMultiTransformParameters)
    {
        PartDesignGui__TaskMultiTransformParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskMultiTransformParameters", "Form", 0, QApplication::UnicodeUTF8));
        labelOriginal->setText(QApplication::translate("PartDesignGui::TaskMultiTransformParameters", "Original feature", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartDesignGui::TaskMultiTransformParameters", "Transformations", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskMultiTransformParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskMultiTransformParameters: public Ui_TaskMultiTransformParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKMULTITRANSFORMPARAMETERS_H
