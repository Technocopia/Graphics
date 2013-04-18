/********************************************************************************
** Form generated from reading UI file 'TaskPadParameters.ui'
**
** Created: Thu Apr 18 07:20:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKPADPARAMETERS_H
#define UI_TASKPADPARAMETERS_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskPadParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *textLabel1;
    QComboBox *changeMode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QCheckBox *checkBoxMidplane;
    QCheckBox *checkBoxReversed;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonFace;
    QLineEdit *lineFaceName;
    QFrame *line;
    QCheckBox *checkBoxUpdateView;

    void setupUi(QWidget *PartDesignGui__TaskPadParameters)
    {
        if (PartDesignGui__TaskPadParameters->objectName().isEmpty())
            PartDesignGui__TaskPadParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskPadParameters"));
        PartDesignGui__TaskPadParameters->resize(272, 271);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskPadParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textLabel1 = new QLabel(PartDesignGui__TaskPadParameters);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        horizontalLayout->addWidget(textLabel1);

        changeMode = new QComboBox(PartDesignGui__TaskPadParameters);
        changeMode->setObjectName(QString::fromUtf8("changeMode"));

        horizontalLayout->addWidget(changeMode);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PartDesignGui__TaskPadParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(PartDesignGui__TaskPadParameters);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(0);
        doubleSpinBox->setMaximum(1e+09);
        doubleSpinBox->setSingleStep(5);
        doubleSpinBox->setValue(10);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBoxMidplane = new QCheckBox(PartDesignGui__TaskPadParameters);
        checkBoxMidplane->setObjectName(QString::fromUtf8("checkBoxMidplane"));
        checkBoxMidplane->setEnabled(true);

        verticalLayout->addWidget(checkBoxMidplane);

        checkBoxReversed = new QCheckBox(PartDesignGui__TaskPadParameters);
        checkBoxReversed->setObjectName(QString::fromUtf8("checkBoxReversed"));

        verticalLayout->addWidget(checkBoxReversed);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(PartDesignGui__TaskPadParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        doubleSpinBox2 = new QDoubleSpinBox(PartDesignGui__TaskPadParameters);
        doubleSpinBox2->setObjectName(QString::fromUtf8("doubleSpinBox2"));
        doubleSpinBox2->setMinimum(0);
        doubleSpinBox2->setMaximum(1e+09);
        doubleSpinBox2->setSingleStep(5);
        doubleSpinBox2->setValue(0);

        horizontalLayout_4->addWidget(doubleSpinBox2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonFace = new QPushButton(PartDesignGui__TaskPadParameters);
        buttonFace->setObjectName(QString::fromUtf8("buttonFace"));

        horizontalLayout_3->addWidget(buttonFace);

        lineFaceName = new QLineEdit(PartDesignGui__TaskPadParameters);
        lineFaceName->setObjectName(QString::fromUtf8("lineFaceName"));

        horizontalLayout_3->addWidget(lineFaceName);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(PartDesignGui__TaskPadParameters);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskPadParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);


        retranslateUi(PartDesignGui__TaskPadParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskPadParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskPadParameters)
    {
        PartDesignGui__TaskPadParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskPadParameters", "Form", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "Type", 0, QApplication::UnicodeUTF8));
        changeMode->clear();
        changeMode->insertItems(0, QStringList()
         << QApplication::translate("PartDesignGui::TaskPadParameters", "Dimension", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "Length", 0, QApplication::UnicodeUTF8));
        checkBoxMidplane->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "Symmetric to plane", 0, QApplication::UnicodeUTF8));
        checkBoxReversed->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "Reversed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "2nd length", 0, QApplication::UnicodeUTF8));
        buttonFace->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "Face", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskPadParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskPadParameters: public Ui_TaskPadParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKPADPARAMETERS_H
