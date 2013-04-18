/********************************************************************************
** Form generated from reading UI file 'TaskPolarPatternParameters.ui'
**
** Created: Thu Apr 18 07:20:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPOLARPATTERNPARAMETERS_H
#define UI_TASKPOLARPATTERNPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
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

class Ui_TaskPolarPatternParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutOriginal;
    QLabel *labelOriginal;
    QLineEdit *lineOriginal;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelAxis;
    QComboBox *comboAxis;
    QCheckBox *checkReverse;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinAngle;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinOccurrences;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonOK;
    QCheckBox *checkBoxUpdateView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PartDesignGui__TaskPolarPatternParameters)
    {
        if (PartDesignGui__TaskPolarPatternParameters->objectName().isEmpty())
            PartDesignGui__TaskPolarPatternParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskPolarPatternParameters"));
        PartDesignGui__TaskPolarPatternParameters->resize(225, 400);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskPolarPatternParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutOriginal = new QHBoxLayout();
        horizontalLayoutOriginal->setObjectName(QString::fromUtf8("horizontalLayoutOriginal"));
        labelOriginal = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        labelOriginal->setObjectName(QString::fromUtf8("labelOriginal"));

        horizontalLayoutOriginal->addWidget(labelOriginal);

        lineOriginal = new QLineEdit(PartDesignGui__TaskPolarPatternParameters);
        lineOriginal->setObjectName(QString::fromUtf8("lineOriginal"));

        horizontalLayoutOriginal->addWidget(lineOriginal);


        verticalLayout->addLayout(horizontalLayoutOriginal);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelAxis = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        labelAxis->setObjectName(QString::fromUtf8("labelAxis"));

        horizontalLayout_3->addWidget(labelAxis);

        comboAxis = new QComboBox(PartDesignGui__TaskPolarPatternParameters);
        comboAxis->setObjectName(QString::fromUtf8("comboAxis"));

        horizontalLayout_3->addWidget(comboAxis);


        verticalLayout->addLayout(horizontalLayout_3);

        checkReverse = new QCheckBox(PartDesignGui__TaskPolarPatternParameters);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));

        verticalLayout->addWidget(checkReverse);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinAngle = new QDoubleSpinBox(PartDesignGui__TaskPolarPatternParameters);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setDecimals(2);
        spinAngle->setMaximum(360);
        spinAngle->setValue(360);

        horizontalLayout_2->addWidget(spinAngle);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PartDesignGui__TaskPolarPatternParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinOccurrences = new QSpinBox(PartDesignGui__TaskPolarPatternParameters);
        spinOccurrences->setObjectName(QString::fromUtf8("spinOccurrences"));
        spinOccurrences->setMinimum(2);
        spinOccurrences->setMaximum(99999);

        horizontalLayout->addWidget(spinOccurrences);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        buttonOK = new QPushButton(PartDesignGui__TaskPolarPatternParameters);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));

        horizontalLayout_5->addWidget(buttonOK);


        verticalLayout->addLayout(horizontalLayout_5);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskPolarPatternParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PartDesignGui__TaskPolarPatternParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskPolarPatternParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPolarPatternParameters)
    {
        PartDesignGui__TaskPolarPatternParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Form", 0, QApplication::UnicodeUTF8));
        labelOriginal->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Original feature", 0, QApplication::UnicodeUTF8));
        labelAxis->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Axis", 0, QApplication::UnicodeUTF8));
        comboAxis->clear();
        comboAxis->insertItems(0, QStringList()
         << QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Normal sketch axis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Select reference...", 0, QApplication::UnicodeUTF8)
        );
        checkReverse->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Reverse direction", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Angle", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Occurrences", 0, QApplication::UnicodeUTF8));
        buttonOK->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "OK", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskPolarPatternParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPolarPatternParameters: public Ui_TaskPolarPatternParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPOLARPATTERNPARAMETERS_H
