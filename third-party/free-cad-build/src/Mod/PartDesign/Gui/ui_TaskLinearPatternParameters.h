/********************************************************************************
** Form generated from reading UI file 'TaskLinearPatternParameters.ui'
**
** Created: Thu Apr 18 22:35:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLINEARPATTERNPARAMETERS_H
#define UI_TASKLINEARPATTERNPARAMETERS_H

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

class Ui_TaskLinearPatternParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutOriginal;
    QLabel *labelOriginal;
    QLineEdit *lineOriginal;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDirection;
    QComboBox *comboDirection;
    QCheckBox *checkReverse;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinLength;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinOccurrences;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonOK;
    QCheckBox *checkBoxUpdateView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PartDesignGui__TaskLinearPatternParameters)
    {
        if (PartDesignGui__TaskLinearPatternParameters->objectName().isEmpty())
            PartDesignGui__TaskLinearPatternParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskLinearPatternParameters"));
        PartDesignGui__TaskLinearPatternParameters->resize(260, 402);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskLinearPatternParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutOriginal = new QHBoxLayout();
        horizontalLayoutOriginal->setObjectName(QString::fromUtf8("horizontalLayoutOriginal"));
        labelOriginal = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        labelOriginal->setObjectName(QString::fromUtf8("labelOriginal"));

        horizontalLayoutOriginal->addWidget(labelOriginal);

        lineOriginal = new QLineEdit(PartDesignGui__TaskLinearPatternParameters);
        lineOriginal->setObjectName(QString::fromUtf8("lineOriginal"));

        horizontalLayoutOriginal->addWidget(lineOriginal);


        verticalLayout->addLayout(horizontalLayoutOriginal);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelDirection = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        labelDirection->setObjectName(QString::fromUtf8("labelDirection"));

        horizontalLayout_3->addWidget(labelDirection);

        comboDirection = new QComboBox(PartDesignGui__TaskLinearPatternParameters);
        comboDirection->setObjectName(QString::fromUtf8("comboDirection"));

        horizontalLayout_3->addWidget(comboDirection);


        verticalLayout->addLayout(horizontalLayout_3);

        checkReverse = new QCheckBox(PartDesignGui__TaskLinearPatternParameters);
        checkReverse->setObjectName(QString::fromUtf8("checkReverse"));

        verticalLayout->addWidget(checkReverse);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinLength = new QDoubleSpinBox(PartDesignGui__TaskLinearPatternParameters);
        spinLength->setObjectName(QString::fromUtf8("spinLength"));
        spinLength->setDecimals(3);
        spinLength->setMaximum(999999);
        spinLength->setValue(100);

        horizontalLayout_2->addWidget(spinLength);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PartDesignGui__TaskLinearPatternParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinOccurrences = new QSpinBox(PartDesignGui__TaskLinearPatternParameters);
        spinOccurrences->setObjectName(QString::fromUtf8("spinOccurrences"));
        spinOccurrences->setMinimum(2);
        spinOccurrences->setMaximum(99999);

        horizontalLayout->addWidget(spinOccurrences);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        buttonOK = new QPushButton(PartDesignGui__TaskLinearPatternParameters);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));

        horizontalLayout_5->addWidget(buttonOK);


        verticalLayout->addLayout(horizontalLayout_5);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskLinearPatternParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PartDesignGui__TaskLinearPatternParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskLinearPatternParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskLinearPatternParameters)
    {
        PartDesignGui__TaskLinearPatternParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Form", 0, QApplication::UnicodeUTF8));
        labelOriginal->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Original feature", 0, QApplication::UnicodeUTF8));
        labelDirection->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Direction", 0, QApplication::UnicodeUTF8));
        comboDirection->clear();
        comboDirection->insertItems(0, QStringList()
         << QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Horizontal sketch axis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Vertical sketch axis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Select reference...", 0, QApplication::UnicodeUTF8)
        );
        checkReverse->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Reverse direction", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Length", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Occurrences", 0, QApplication::UnicodeUTF8));
        buttonOK->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "OK", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskLinearPatternParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskLinearPatternParameters: public Ui_TaskLinearPatternParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKLINEARPATTERNPARAMETERS_H
