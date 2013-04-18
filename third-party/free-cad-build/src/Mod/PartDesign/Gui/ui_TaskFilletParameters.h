/********************************************************************************
** Form generated from reading UI file 'TaskFilletParameters.ui'
**
** Created: Thu Apr 18 07:20:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFILLETPARAMETERS_H
#define UI_TASKFILLETPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskFilletParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *PartDesignGui__TaskFilletParameters)
    {
        if (PartDesignGui__TaskFilletParameters->objectName().isEmpty())
            PartDesignGui__TaskFilletParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskFilletParameters"));
        PartDesignGui__TaskFilletParameters->resize(135, 40);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskFilletParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PartDesignGui__TaskFilletParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(PartDesignGui__TaskFilletParameters);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(0);
        doubleSpinBox->setMaximum(1e+09);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PartDesignGui__TaskFilletParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskFilletParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskFilletParameters)
    {
        PartDesignGui__TaskFilletParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskFilletParameters", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartDesignGui::TaskFilletParameters", "Radius:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskFilletParameters: public Ui_TaskFilletParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKFILLETPARAMETERS_H
