/********************************************************************************
** Form generated from reading UI file 'TaskTrajectoryDressUpParameter.ui'
**
** Created: Thu Apr 18 22:43:15 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKTRAJECTORYDRESSUPPARAMETER_H
#define UI_TASKTRAJECTORYDRESSUPPARAMETER_H

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
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskTrajectoryDressUpParameter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxSpeed;
    QCheckBox *checkBoxUseSpeed;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxAccel;
    QCheckBox *checkBoxUseAccel;
    QComboBox *comboBoxCont;
    QFrame *line;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditPlacement;
    QToolButton *toolButtonChoosePlacement;
    QComboBox *comboBoxOrientation;

    void setupUi(QWidget *TaskTrajectoryDressUpParameter)
    {
        if (TaskTrajectoryDressUpParameter->objectName().isEmpty())
            TaskTrajectoryDressUpParameter->setObjectName(QString::fromUtf8("TaskTrajectoryDressUpParameter"));
        TaskTrajectoryDressUpParameter->resize(215, 197);
        verticalLayout = new QVBoxLayout(TaskTrajectoryDressUpParameter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(TaskTrajectoryDressUpParameter);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(TaskTrajectoryDressUpParameter);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBoxSpeed = new QDoubleSpinBox(TaskTrajectoryDressUpParameter);
        doubleSpinBoxSpeed->setObjectName(QString::fromUtf8("doubleSpinBoxSpeed"));
        doubleSpinBoxSpeed->setSuffix(QString::fromUtf8("m/s"));
        doubleSpinBoxSpeed->setMinimum(0);
        doubleSpinBoxSpeed->setMaximum(10);
        doubleSpinBoxSpeed->setSingleStep(0.1);
        doubleSpinBoxSpeed->setValue(1);

        horizontalLayout->addWidget(doubleSpinBoxSpeed);

        checkBoxUseSpeed = new QCheckBox(TaskTrajectoryDressUpParameter);
        checkBoxUseSpeed->setObjectName(QString::fromUtf8("checkBoxUseSpeed"));

        horizontalLayout->addWidget(checkBoxUseSpeed);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(TaskTrajectoryDressUpParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxAccel = new QDoubleSpinBox(TaskTrajectoryDressUpParameter);
        doubleSpinBoxAccel->setObjectName(QString::fromUtf8("doubleSpinBoxAccel"));
        doubleSpinBoxAccel->setSuffix(QString::fromUtf8("m/s^2"));
        doubleSpinBoxAccel->setMinimum(0);
        doubleSpinBoxAccel->setMaximum(10);
        doubleSpinBoxAccel->setSingleStep(0.1);
        doubleSpinBoxAccel->setValue(1);

        horizontalLayout_2->addWidget(doubleSpinBoxAccel);

        checkBoxUseAccel = new QCheckBox(TaskTrajectoryDressUpParameter);
        checkBoxUseAccel->setObjectName(QString::fromUtf8("checkBoxUseAccel"));

        horizontalLayout_2->addWidget(checkBoxUseAccel);


        verticalLayout->addLayout(horizontalLayout_2);

        comboBoxCont = new QComboBox(TaskTrajectoryDressUpParameter);
        comboBoxCont->setObjectName(QString::fromUtf8("comboBoxCont"));

        verticalLayout->addWidget(comboBoxCont);

        line = new QFrame(TaskTrajectoryDressUpParameter);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(TaskTrajectoryDressUpParameter);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditPlacement = new QLineEdit(TaskTrajectoryDressUpParameter);
        lineEditPlacement->setObjectName(QString::fromUtf8("lineEditPlacement"));
        lineEditPlacement->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditPlacement);

        toolButtonChoosePlacement = new QToolButton(TaskTrajectoryDressUpParameter);
        toolButtonChoosePlacement->setObjectName(QString::fromUtf8("toolButtonChoosePlacement"));
        toolButtonChoosePlacement->setEnabled(false);

        horizontalLayout_3->addWidget(toolButtonChoosePlacement);


        verticalLayout->addLayout(horizontalLayout_3);

        comboBoxOrientation = new QComboBox(TaskTrajectoryDressUpParameter);
        comboBoxOrientation->setObjectName(QString::fromUtf8("comboBoxOrientation"));

        verticalLayout->addWidget(comboBoxOrientation);


        retranslateUi(TaskTrajectoryDressUpParameter);

        QMetaObject::connectSlotsByName(TaskTrajectoryDressUpParameter);
    } // setupUi

    void retranslateUi(QWidget *TaskTrajectoryDressUpParameter)
    {
        TaskTrajectoryDressUpParameter->setWindowTitle(QApplication::translate("TaskTrajectoryDressUpParameter", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "Speed & Acceleration:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "Speed:", 0, QApplication::UnicodeUTF8));
        checkBoxUseSpeed->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "Use", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "Accel:", 0, QApplication::UnicodeUTF8));
        checkBoxUseAccel->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "Use", 0, QApplication::UnicodeUTF8));
        comboBoxCont->clear();
        comboBoxCont->insertItems(0, QStringList()
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Don't change Cont", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Continues", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Discontinues", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "Position and Orientation:", 0, QApplication::UnicodeUTF8));
        lineEditPlacement->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "(0,0,0),(0,0,0)", 0, QApplication::UnicodeUTF8));
        toolButtonChoosePlacement->setText(QApplication::translate("TaskTrajectoryDressUpParameter", "...", 0, QApplication::UnicodeUTF8));
        comboBoxOrientation->clear();
        comboBoxOrientation->insertItems(0, QStringList()
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Don't change Position & Orientation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Use Orientation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Add Position", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskTrajectoryDressUpParameter", "Add Orientation", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class TaskTrajectoryDressUpParameter: public Ui_TaskTrajectoryDressUpParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKTRAJECTORYDRESSUPPARAMETER_H
