/********************************************************************************
** Form generated from reading UI file 'TaskRobotControl.ui'
**
** Created: Thu Apr 18 22:43:15 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKROBOTCONTROL_H
#define UI_TASKROBOTCONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskRobotControl
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButtonXP;
    QPushButton *pushButtonYP;
    QPushButton *pushButtonZP;
    QPushButton *pushButtonAP;
    QPushButton *pushButtonBP;
    QPushButton *pushButtonCP;
    QPushButton *pushButtonXN;
    QPushButton *pushButtonYN;
    QPushButton *pushButtonZN;
    QPushButton *pushButtonaAN;
    QPushButton *pushButtonBN;
    QPushButton *pushButtonCN;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxMoveFrame;
    QComboBox *comboBoxStepSize;

    void setupUi(QWidget *TaskRobotControl)
    {
        if (TaskRobotControl->objectName().isEmpty())
            TaskRobotControl->setObjectName(QString::fromUtf8("TaskRobotControl"));
        TaskRobotControl->resize(200, 107);
        verticalLayout = new QVBoxLayout(TaskRobotControl);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonXP = new QPushButton(TaskRobotControl);
        pushButtonXP->setObjectName(QString::fromUtf8("pushButtonXP"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonXP->sizePolicy().hasHeightForWidth());
        pushButtonXP->setSizePolicy(sizePolicy);
        pushButtonXP->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonXP, 0, 0, 1, 1);

        pushButtonYP = new QPushButton(TaskRobotControl);
        pushButtonYP->setObjectName(QString::fromUtf8("pushButtonYP"));
        sizePolicy.setHeightForWidth(pushButtonYP->sizePolicy().hasHeightForWidth());
        pushButtonYP->setSizePolicy(sizePolicy);
        pushButtonYP->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonYP, 0, 1, 1, 1);

        pushButtonZP = new QPushButton(TaskRobotControl);
        pushButtonZP->setObjectName(QString::fromUtf8("pushButtonZP"));
        sizePolicy.setHeightForWidth(pushButtonZP->sizePolicy().hasHeightForWidth());
        pushButtonZP->setSizePolicy(sizePolicy);
        pushButtonZP->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonZP, 0, 2, 1, 1);

        pushButtonAP = new QPushButton(TaskRobotControl);
        pushButtonAP->setObjectName(QString::fromUtf8("pushButtonAP"));
        sizePolicy.setHeightForWidth(pushButtonAP->sizePolicy().hasHeightForWidth());
        pushButtonAP->setSizePolicy(sizePolicy);
        pushButtonAP->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonAP, 0, 3, 1, 1);

        pushButtonBP = new QPushButton(TaskRobotControl);
        pushButtonBP->setObjectName(QString::fromUtf8("pushButtonBP"));
        sizePolicy.setHeightForWidth(pushButtonBP->sizePolicy().hasHeightForWidth());
        pushButtonBP->setSizePolicy(sizePolicy);
        pushButtonBP->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonBP, 0, 4, 1, 1);

        pushButtonCP = new QPushButton(TaskRobotControl);
        pushButtonCP->setObjectName(QString::fromUtf8("pushButtonCP"));
        sizePolicy.setHeightForWidth(pushButtonCP->sizePolicy().hasHeightForWidth());
        pushButtonCP->setSizePolicy(sizePolicy);
        pushButtonCP->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonCP, 0, 5, 1, 1);

        pushButtonXN = new QPushButton(TaskRobotControl);
        pushButtonXN->setObjectName(QString::fromUtf8("pushButtonXN"));
        sizePolicy.setHeightForWidth(pushButtonXN->sizePolicy().hasHeightForWidth());
        pushButtonXN->setSizePolicy(sizePolicy);
        pushButtonXN->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonXN, 1, 0, 1, 1);

        pushButtonYN = new QPushButton(TaskRobotControl);
        pushButtonYN->setObjectName(QString::fromUtf8("pushButtonYN"));
        sizePolicy.setHeightForWidth(pushButtonYN->sizePolicy().hasHeightForWidth());
        pushButtonYN->setSizePolicy(sizePolicy);
        pushButtonYN->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonYN, 1, 1, 1, 1);

        pushButtonZN = new QPushButton(TaskRobotControl);
        pushButtonZN->setObjectName(QString::fromUtf8("pushButtonZN"));
        sizePolicy.setHeightForWidth(pushButtonZN->sizePolicy().hasHeightForWidth());
        pushButtonZN->setSizePolicy(sizePolicy);
        pushButtonZN->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonZN, 1, 2, 1, 1);

        pushButtonaAN = new QPushButton(TaskRobotControl);
        pushButtonaAN->setObjectName(QString::fromUtf8("pushButtonaAN"));
        sizePolicy.setHeightForWidth(pushButtonaAN->sizePolicy().hasHeightForWidth());
        pushButtonaAN->setSizePolicy(sizePolicy);
        pushButtonaAN->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonaAN, 1, 3, 1, 1);

        pushButtonBN = new QPushButton(TaskRobotControl);
        pushButtonBN->setObjectName(QString::fromUtf8("pushButtonBN"));
        sizePolicy.setHeightForWidth(pushButtonBN->sizePolicy().hasHeightForWidth());
        pushButtonBN->setSizePolicy(sizePolicy);
        pushButtonBN->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonBN, 1, 4, 1, 1);

        pushButtonCN = new QPushButton(TaskRobotControl);
        pushButtonCN->setObjectName(QString::fromUtf8("pushButtonCN"));
        sizePolicy.setHeightForWidth(pushButtonCN->sizePolicy().hasHeightForWidth());
        pushButtonCN->setSizePolicy(sizePolicy);
        pushButtonCN->setMaximumSize(QSize(25, 25));

        gridLayout->addWidget(pushButtonCN, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxMoveFrame = new QComboBox(TaskRobotControl);
        comboBoxMoveFrame->setObjectName(QString::fromUtf8("comboBoxMoveFrame"));

        horizontalLayout->addWidget(comboBoxMoveFrame);

        comboBoxStepSize = new QComboBox(TaskRobotControl);
        comboBoxStepSize->setObjectName(QString::fromUtf8("comboBoxStepSize"));

        horizontalLayout->addWidget(comboBoxStepSize);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TaskRobotControl);

        QMetaObject::connectSlotsByName(TaskRobotControl);
    } // setupUi

    void retranslateUi(QWidget *TaskRobotControl)
    {
        TaskRobotControl->setWindowTitle(QApplication::translate("TaskRobotControl", "Form", 0, QApplication::UnicodeUTF8));
        pushButtonXP->setText(QApplication::translate("TaskRobotControl", "X+", 0, QApplication::UnicodeUTF8));
        pushButtonYP->setText(QApplication::translate("TaskRobotControl", "Y+", 0, QApplication::UnicodeUTF8));
        pushButtonZP->setText(QApplication::translate("TaskRobotControl", "Z+", 0, QApplication::UnicodeUTF8));
        pushButtonAP->setText(QApplication::translate("TaskRobotControl", "A+", 0, QApplication::UnicodeUTF8));
        pushButtonBP->setText(QApplication::translate("TaskRobotControl", "B+", 0, QApplication::UnicodeUTF8));
        pushButtonCP->setText(QApplication::translate("TaskRobotControl", "C+", 0, QApplication::UnicodeUTF8));
        pushButtonXN->setText(QApplication::translate("TaskRobotControl", "X-", 0, QApplication::UnicodeUTF8));
        pushButtonYN->setText(QApplication::translate("TaskRobotControl", "Y-", 0, QApplication::UnicodeUTF8));
        pushButtonZN->setText(QApplication::translate("TaskRobotControl", "Z-", 0, QApplication::UnicodeUTF8));
        pushButtonaAN->setText(QApplication::translate("TaskRobotControl", "A-", 0, QApplication::UnicodeUTF8));
        pushButtonBN->setText(QApplication::translate("TaskRobotControl", "B-", 0, QApplication::UnicodeUTF8));
        pushButtonCN->setText(QApplication::translate("TaskRobotControl", "C-", 0, QApplication::UnicodeUTF8));
        comboBoxMoveFrame->clear();
        comboBoxMoveFrame->insertItems(0, QStringList()
         << QApplication::translate("TaskRobotControl", "Tool 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "Tool", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "Base 0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "Base", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "World", 0, QApplication::UnicodeUTF8)
        );
        comboBoxStepSize->clear();
        comboBoxStepSize->insertItems(0, QStringList()
         << QApplication::translate("TaskRobotControl", "50mm / 5\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "20mm / 2\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "10mm / 1\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "5mm / 0.5\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TaskRobotControl", "1mm / 0.1\302\260", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class TaskRobotControl: public Ui_TaskRobotControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKROBOTCONTROL_H
