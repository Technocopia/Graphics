/********************************************************************************
** Form generated from reading UI file 'TaskGrooveParameters.ui'
**
** Created: Thu Apr 18 07:20:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKGROOVEPARAMETERS_H
#define UI_TASKGROOVEPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskGrooveParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QComboBox *axis;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QCheckBox *checkBoxMidplane;
    QCheckBox *checkBoxReversed;
    QFrame *line;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskGrooveParameters)
    {
        if (PartDesignGui__TaskGrooveParameters->objectName().isEmpty())
            PartDesignGui__TaskGrooveParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskGrooveParameters"));
        PartDesignGui__TaskGrooveParameters->resize(278, 195);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskGrooveParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabel1 = new QLabel(PartDesignGui__TaskGrooveParameters);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        horizontalLayout->addWidget(textLabel1);

        axis = new QComboBox(PartDesignGui__TaskGrooveParameters);
        axis->setObjectName(QString::fromUtf8("axis"));

        horizontalLayout->addWidget(axis);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(PartDesignGui__TaskGrooveParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(PartDesignGui__TaskGrooveParameters);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(0);
        doubleSpinBox->setMaximum(360);
        doubleSpinBox->setSingleStep(10);
        doubleSpinBox->setValue(360);

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxMidplane = new QCheckBox(PartDesignGui__TaskGrooveParameters);
        checkBoxMidplane->setObjectName(QString::fromUtf8("checkBoxMidplane"));
        checkBoxMidplane->setEnabled(true);

        verticalLayout->addWidget(checkBoxMidplane);

        checkBoxReversed = new QCheckBox(PartDesignGui__TaskGrooveParameters);
        checkBoxReversed->setObjectName(QString::fromUtf8("checkBoxReversed"));

        verticalLayout->addWidget(checkBoxReversed);

        line = new QFrame(PartDesignGui__TaskGrooveParameters);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskGrooveParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);


        retranslateUi(PartDesignGui__TaskGrooveParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskGrooveParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskGrooveParameters)
    {
        PartDesignGui__TaskGrooveParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskGrooveParameters", "Form", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PartDesignGui::TaskGrooveParameters", "Axis:", 0, QApplication::UnicodeUTF8));
        axis->clear();
        axis->insertItems(0, QStringList()
         << QApplication::translate("PartDesignGui::TaskGrooveParameters", "Vertical sketch axis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskGrooveParameters", "Horizontal sketch axis", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PartDesignGui::TaskGrooveParameters", "Angle:", 0, QApplication::UnicodeUTF8));
        checkBoxMidplane->setText(QApplication::translate("PartDesignGui::TaskGrooveParameters", "Symmetric to plane", 0, QApplication::UnicodeUTF8));
        checkBoxReversed->setText(QApplication::translate("PartDesignGui::TaskGrooveParameters", "Reversed", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskGrooveParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskGrooveParameters: public Ui_TaskGrooveParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKGROOVEPARAMETERS_H
