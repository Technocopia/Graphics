/********************************************************************************
** Form generated from reading UI file 'TaskChamferParameters.ui'
**
** Created: Thu Apr 18 22:35:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKCHAMFERPARAMETERS_H
#define UI_TASKCHAMFERPARAMETERS_H

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

class Ui_TaskChamferParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *PartDesignGui__TaskChamferParameters)
    {
        if (PartDesignGui__TaskChamferParameters->objectName().isEmpty())
            PartDesignGui__TaskChamferParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskChamferParameters"));
        PartDesignGui__TaskChamferParameters->resize(135, 40);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskChamferParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PartDesignGui__TaskChamferParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(PartDesignGui__TaskChamferParameters);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(0);
        doubleSpinBox->setMaximum(1e+09);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PartDesignGui__TaskChamferParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskChamferParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskChamferParameters)
    {
        PartDesignGui__TaskChamferParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskChamferParameters", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartDesignGui::TaskChamferParameters", "Size:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskChamferParameters: public Ui_TaskChamferParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKCHAMFERPARAMETERS_H
