/********************************************************************************
** Form generated from reading UI file 'TaskHoleParameters.ui'
**
** Created: Thu Apr 18 22:35:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKHOLEPARAMETERS_H
#define UI_TASKHOLEPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskHoleParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QComboBox *changeMode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QWidget *PartDesignGui__TaskHoleParameters)
    {
        if (PartDesignGui__TaskHoleParameters->objectName().isEmpty())
            PartDesignGui__TaskHoleParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskHoleParameters"));
        PartDesignGui__TaskHoleParameters->resize(137, 116);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskHoleParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabel1 = new QLabel(PartDesignGui__TaskHoleParameters);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        horizontalLayout->addWidget(textLabel1);

        changeMode = new QComboBox(PartDesignGui__TaskHoleParameters);
        changeMode->setObjectName(QString::fromUtf8("changeMode"));

        horizontalLayout->addWidget(changeMode);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PartDesignGui__TaskHoleParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(PartDesignGui__TaskHoleParameters);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PartDesignGui__TaskHoleParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskHoleParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskHoleParameters)
    {
        PartDesignGui__TaskHoleParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskHoleParameters", "Form", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PartDesignGui::TaskHoleParameters", "Type:", 0, QApplication::UnicodeUTF8));
        changeMode->clear();
        changeMode->insertItems(0, QStringList()
         << QApplication::translate("PartDesignGui::TaskHoleParameters", "Dimension", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskHoleParameters", "Up to last", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskHoleParameters", "Up to first", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PartDesignGui::TaskHoleParameters", "Size:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskHoleParameters: public Ui_TaskHoleParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKHOLEPARAMETERS_H
