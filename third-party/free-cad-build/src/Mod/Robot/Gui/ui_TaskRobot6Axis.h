/********************************************************************************
** Form generated from reading UI file 'TaskRobot6Axis.ui'
**
** Created: Thu Apr 18 07:26:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKROBOT6AXIS_H
#define UI_TASKROBOT6AXIS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace RobotGui {

class Ui_TaskRobot6Axis
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *horizontalSlider_Axis1;
    QLineEdit *lineEdit_Axis1;
    QLabel *label_2;
    QSlider *horizontalSlider_Axis2;
    QLineEdit *lineEdit_Axis2;
    QLabel *label_3;
    QSlider *horizontalSlider_Axis3;
    QLineEdit *lineEdit_Axis3;
    QLabel *label_4;
    QSlider *horizontalSlider_Axis4;
    QLineEdit *lineEdit_Axis4;
    QLabel *label_5;
    QSlider *horizontalSlider_Axis5;
    QLineEdit *lineEdit_Axis5;
    QLabel *label_6;
    QSlider *horizontalSlider_Axis6;
    QLineEdit *lineEdit_Axis6;
    QLabel *label_TCP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Tool;
    QPushButton *pushButtonChooseTool;

    void setupUi(QWidget *RobotGui__TaskRobot6Axis)
    {
        if (RobotGui__TaskRobot6Axis->objectName().isEmpty())
            RobotGui__TaskRobot6Axis->setObjectName(QString::fromUtf8("RobotGui__TaskRobot6Axis"));
        RobotGui__TaskRobot6Axis->resize(222, 196);
        verticalLayout = new QVBoxLayout(RobotGui__TaskRobot6Axis);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(RobotGui__TaskRobot6Axis);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_Axis1 = new QSlider(RobotGui__TaskRobot6Axis);
        horizontalSlider_Axis1->setObjectName(QString::fromUtf8("horizontalSlider_Axis1"));
        horizontalSlider_Axis1->setMaximumSize(QSize(16777215, 16));
        horizontalSlider_Axis1->setMinimum(-180);
        horizontalSlider_Axis1->setMaximum(180);
        horizontalSlider_Axis1->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Axis1, 0, 1, 1, 1);

        lineEdit_Axis1 = new QLineEdit(RobotGui__TaskRobot6Axis);
        lineEdit_Axis1->setObjectName(QString::fromUtf8("lineEdit_Axis1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Axis1->sizePolicy().hasHeightForWidth());
        lineEdit_Axis1->setSizePolicy(sizePolicy);
        lineEdit_Axis1->setMaximumSize(QSize(40, 16));
        QFont font;
        font.setPointSize(7);
        lineEdit_Axis1->setFont(font);

        gridLayout->addWidget(lineEdit_Axis1, 0, 2, 1, 1);

        label_2 = new QLabel(RobotGui__TaskRobot6Axis);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSlider_Axis2 = new QSlider(RobotGui__TaskRobot6Axis);
        horizontalSlider_Axis2->setObjectName(QString::fromUtf8("horizontalSlider_Axis2"));
        horizontalSlider_Axis2->setMaximumSize(QSize(16777215, 16));
        horizontalSlider_Axis2->setMinimum(-180);
        horizontalSlider_Axis2->setMaximum(180);
        horizontalSlider_Axis2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Axis2, 1, 1, 1, 1);

        lineEdit_Axis2 = new QLineEdit(RobotGui__TaskRobot6Axis);
        lineEdit_Axis2->setObjectName(QString::fromUtf8("lineEdit_Axis2"));
        sizePolicy.setHeightForWidth(lineEdit_Axis2->sizePolicy().hasHeightForWidth());
        lineEdit_Axis2->setSizePolicy(sizePolicy);
        lineEdit_Axis2->setMaximumSize(QSize(40, 16));
        lineEdit_Axis2->setFont(font);

        gridLayout->addWidget(lineEdit_Axis2, 1, 2, 1, 1);

        label_3 = new QLabel(RobotGui__TaskRobot6Axis);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSlider_Axis3 = new QSlider(RobotGui__TaskRobot6Axis);
        horizontalSlider_Axis3->setObjectName(QString::fromUtf8("horizontalSlider_Axis3"));
        horizontalSlider_Axis3->setMaximumSize(QSize(16777215, 16));
        horizontalSlider_Axis3->setMinimum(-180);
        horizontalSlider_Axis3->setMaximum(180);
        horizontalSlider_Axis3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Axis3, 2, 1, 1, 1);

        lineEdit_Axis3 = new QLineEdit(RobotGui__TaskRobot6Axis);
        lineEdit_Axis3->setObjectName(QString::fromUtf8("lineEdit_Axis3"));
        sizePolicy.setHeightForWidth(lineEdit_Axis3->sizePolicy().hasHeightForWidth());
        lineEdit_Axis3->setSizePolicy(sizePolicy);
        lineEdit_Axis3->setMaximumSize(QSize(40, 16));
        lineEdit_Axis3->setFont(font);

        gridLayout->addWidget(lineEdit_Axis3, 2, 2, 1, 1);

        label_4 = new QLabel(RobotGui__TaskRobot6Axis);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSlider_Axis4 = new QSlider(RobotGui__TaskRobot6Axis);
        horizontalSlider_Axis4->setObjectName(QString::fromUtf8("horizontalSlider_Axis4"));
        horizontalSlider_Axis4->setMaximumSize(QSize(16777215, 16));
        horizontalSlider_Axis4->setMinimum(-180);
        horizontalSlider_Axis4->setMaximum(180);
        horizontalSlider_Axis4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Axis4, 3, 1, 1, 1);

        lineEdit_Axis4 = new QLineEdit(RobotGui__TaskRobot6Axis);
        lineEdit_Axis4->setObjectName(QString::fromUtf8("lineEdit_Axis4"));
        sizePolicy.setHeightForWidth(lineEdit_Axis4->sizePolicy().hasHeightForWidth());
        lineEdit_Axis4->setSizePolicy(sizePolicy);
        lineEdit_Axis4->setMaximumSize(QSize(40, 16));
        lineEdit_Axis4->setFont(font);

        gridLayout->addWidget(lineEdit_Axis4, 3, 2, 1, 1);

        label_5 = new QLabel(RobotGui__TaskRobot6Axis);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        horizontalSlider_Axis5 = new QSlider(RobotGui__TaskRobot6Axis);
        horizontalSlider_Axis5->setObjectName(QString::fromUtf8("horizontalSlider_Axis5"));
        horizontalSlider_Axis5->setMaximumSize(QSize(16777215, 16));
        horizontalSlider_Axis5->setMinimum(-180);
        horizontalSlider_Axis5->setMaximum(180);
        horizontalSlider_Axis5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Axis5, 4, 1, 1, 1);

        lineEdit_Axis5 = new QLineEdit(RobotGui__TaskRobot6Axis);
        lineEdit_Axis5->setObjectName(QString::fromUtf8("lineEdit_Axis5"));
        sizePolicy.setHeightForWidth(lineEdit_Axis5->sizePolicy().hasHeightForWidth());
        lineEdit_Axis5->setSizePolicy(sizePolicy);
        lineEdit_Axis5->setMaximumSize(QSize(40, 16));
        lineEdit_Axis5->setFont(font);

        gridLayout->addWidget(lineEdit_Axis5, 4, 2, 1, 1);

        label_6 = new QLabel(RobotGui__TaskRobot6Axis);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        horizontalSlider_Axis6 = new QSlider(RobotGui__TaskRobot6Axis);
        horizontalSlider_Axis6->setObjectName(QString::fromUtf8("horizontalSlider_Axis6"));
        horizontalSlider_Axis6->setMaximumSize(QSize(16777215, 16));
        horizontalSlider_Axis6->setMinimum(-180);
        horizontalSlider_Axis6->setMaximum(180);
        horizontalSlider_Axis6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Axis6, 5, 1, 1, 1);

        lineEdit_Axis6 = new QLineEdit(RobotGui__TaskRobot6Axis);
        lineEdit_Axis6->setObjectName(QString::fromUtf8("lineEdit_Axis6"));
        sizePolicy.setHeightForWidth(lineEdit_Axis6->sizePolicy().hasHeightForWidth());
        lineEdit_Axis6->setSizePolicy(sizePolicy);
        lineEdit_Axis6->setMaximumSize(QSize(40, 16));
        lineEdit_Axis6->setFont(font);

        gridLayout->addWidget(lineEdit_Axis6, 5, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_TCP = new QLabel(RobotGui__TaskRobot6Axis);
        label_TCP->setObjectName(QString::fromUtf8("label_TCP"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(7);
        font1.setBold(true);
        font1.setWeight(75);
        label_TCP->setFont(font1);

        verticalLayout->addWidget(label_TCP);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Tool = new QLabel(RobotGui__TaskRobot6Axis);
        label_Tool->setObjectName(QString::fromUtf8("label_Tool"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        label_Tool->setFont(font2);

        horizontalLayout_2->addWidget(label_Tool);

        pushButtonChooseTool = new QPushButton(RobotGui__TaskRobot6Axis);
        pushButtonChooseTool->setObjectName(QString::fromUtf8("pushButtonChooseTool"));
        pushButtonChooseTool->setEnabled(false);
        pushButtonChooseTool->setMaximumSize(QSize(30, 20));

        horizontalLayout_2->addWidget(pushButtonChooseTool);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(RobotGui__TaskRobot6Axis);

        QMetaObject::connectSlotsByName(RobotGui__TaskRobot6Axis);
    } // setupUi

    void retranslateUi(QWidget *RobotGui__TaskRobot6Axis)
    {
        RobotGui__TaskRobot6Axis->setWindowTitle(QApplication::translate("RobotGui::TaskRobot6Axis", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "A1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "A2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "A3", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "A4", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "A5", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "A6", 0, QApplication::UnicodeUTF8));
        label_TCP->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "TCP: (200.23,300.23,400.23,234,343,343)", 0, QApplication::UnicodeUTF8));
        label_Tool->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "Tool: (0,0,400,0,0,0)", 0, QApplication::UnicodeUTF8));
        pushButtonChooseTool->setText(QApplication::translate("RobotGui::TaskRobot6Axis", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace RobotGui

namespace RobotGui {
namespace Ui {
    class TaskRobot6Axis: public Ui_TaskRobot6Axis {};
} // namespace Ui
} // namespace RobotGui

#endif // UI_TASKROBOT6AXIS_H
