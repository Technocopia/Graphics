/********************************************************************************
** Form generated from reading UI file 'TaskScaledParameters.ui'
**
** Created: Thu Apr 18 07:20:48 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSCALEDPARAMETERS_H
#define UI_TASKSCALEDPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskScaledParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutOriginal;
    QLabel *labelOriginal;
    QLineEdit *lineOriginal;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinFactor;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinOccurrences;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonOK;
    QCheckBox *checkBoxUpdateView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PartDesignGui__TaskScaledParameters)
    {
        if (PartDesignGui__TaskScaledParameters->objectName().isEmpty())
            PartDesignGui__TaskScaledParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskScaledParameters"));
        PartDesignGui__TaskScaledParameters->resize(225, 305);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskScaledParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutOriginal = new QHBoxLayout();
        horizontalLayoutOriginal->setObjectName(QString::fromUtf8("horizontalLayoutOriginal"));
        labelOriginal = new QLabel(PartDesignGui__TaskScaledParameters);
        labelOriginal->setObjectName(QString::fromUtf8("labelOriginal"));

        horizontalLayoutOriginal->addWidget(labelOriginal);

        lineOriginal = new QLineEdit(PartDesignGui__TaskScaledParameters);
        lineOriginal->setObjectName(QString::fromUtf8("lineOriginal"));

        horizontalLayoutOriginal->addWidget(lineOriginal);


        verticalLayout->addLayout(horizontalLayoutOriginal);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PartDesignGui__TaskScaledParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinFactor = new QDoubleSpinBox(PartDesignGui__TaskScaledParameters);
        spinFactor->setObjectName(QString::fromUtf8("spinFactor"));
        spinFactor->setDecimals(3);
        spinFactor->setMaximum(999999);
        spinFactor->setSingleStep(0.5);
        spinFactor->setValue(2);

        horizontalLayout_2->addWidget(spinFactor);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PartDesignGui__TaskScaledParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinOccurrences = new QSpinBox(PartDesignGui__TaskScaledParameters);
        spinOccurrences->setObjectName(QString::fromUtf8("spinOccurrences"));
        spinOccurrences->setMinimum(2);
        spinOccurrences->setMaximum(99999);

        horizontalLayout->addWidget(spinOccurrences);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonOK = new QPushButton(PartDesignGui__TaskScaledParameters);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));

        horizontalLayout_3->addWidget(buttonOK);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskScaledParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PartDesignGui__TaskScaledParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskScaledParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskScaledParameters)
    {
        PartDesignGui__TaskScaledParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskScaledParameters", "Form", 0, QApplication::UnicodeUTF8));
        labelOriginal->setText(QApplication::translate("PartDesignGui::TaskScaledParameters", "Original feature", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartDesignGui::TaskScaledParameters", "Factor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartDesignGui::TaskScaledParameters", "Occurrences", 0, QApplication::UnicodeUTF8));
        buttonOK->setText(QApplication::translate("PartDesignGui::TaskScaledParameters", "OK", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskScaledParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskScaledParameters: public Ui_TaskScaledParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKSCALEDPARAMETERS_H
