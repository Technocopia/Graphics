/********************************************************************************
** Form generated from reading UI file 'TaskEdge2TracParameter.ui'
**
** Created: Thu Apr 18 07:26:56 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKEDGE2TRACPARAMETER_H
#define UI_TASKEDGE2TRACPARAMETER_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskEdge2TracParameter
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_ObjectName;
    QPushButton *pushButton_HideShow;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Edges;
    QLabel *label_Cluster;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxSizing;
    QCheckBox *checkBoxOrientation;

    void setupUi(QWidget *TaskEdge2TracParameter)
    {
        if (TaskEdge2TracParameter->objectName().isEmpty())
            TaskEdge2TracParameter->setObjectName(QString::fromUtf8("TaskEdge2TracParameter"));
        TaskEdge2TracParameter->resize(200, 131);
        verticalLayout = new QVBoxLayout(TaskEdge2TracParameter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_ObjectName = new QLineEdit(TaskEdge2TracParameter);
        lineEdit_ObjectName->setObjectName(QString::fromUtf8("lineEdit_ObjectName"));
        lineEdit_ObjectName->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_ObjectName);

        pushButton_HideShow = new QPushButton(TaskEdge2TracParameter);
        pushButton_HideShow->setObjectName(QString::fromUtf8("pushButton_HideShow"));

        horizontalLayout->addWidget(pushButton_HideShow);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Edges = new QLabel(TaskEdge2TracParameter);
        label_Edges->setObjectName(QString::fromUtf8("label_Edges"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_Edges->setFont(font);

        horizontalLayout_3->addWidget(label_Edges);

        label_Cluster = new QLabel(TaskEdge2TracParameter);
        label_Cluster->setObjectName(QString::fromUtf8("label_Cluster"));
        label_Cluster->setFont(font);

        horizontalLayout_3->addWidget(label_Cluster);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(TaskEdge2TracParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBoxSizing = new QDoubleSpinBox(TaskEdge2TracParameter);
        doubleSpinBoxSizing->setObjectName(QString::fromUtf8("doubleSpinBoxSizing"));
        doubleSpinBoxSizing->setDecimals(1);
        doubleSpinBoxSizing->setMinimum(0.1);
        doubleSpinBoxSizing->setMaximum(10000);
        doubleSpinBoxSizing->setSingleStep(0.1);
        doubleSpinBoxSizing->setValue(0.5);

        horizontalLayout_2->addWidget(doubleSpinBoxSizing);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBoxOrientation = new QCheckBox(TaskEdge2TracParameter);
        checkBoxOrientation->setObjectName(QString::fromUtf8("checkBoxOrientation"));

        verticalLayout->addWidget(checkBoxOrientation);


        retranslateUi(TaskEdge2TracParameter);

        QMetaObject::connectSlotsByName(TaskEdge2TracParameter);
    } // setupUi

    void retranslateUi(QWidget *TaskEdge2TracParameter)
    {
        TaskEdge2TracParameter->setWindowTitle(QApplication::translate("TaskEdge2TracParameter", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_HideShow->setText(QApplication::translate("TaskEdge2TracParameter", "Hide / Show", 0, QApplication::UnicodeUTF8));
        label_Edges->setText(QApplication::translate("TaskEdge2TracParameter", "Edges: 0", 0, QApplication::UnicodeUTF8));
        label_Cluster->setText(QApplication::translate("TaskEdge2TracParameter", "Cluster: 0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TaskEdge2TracParameter", "Sizing Value:", 0, QApplication::UnicodeUTF8));
        doubleSpinBoxSizing->setSuffix(QString());
        checkBoxOrientation->setText(QApplication::translate("TaskEdge2TracParameter", "Use orientation of edge", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskEdge2TracParameter: public Ui_TaskEdge2TracParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKEDGE2TRACPARAMETER_H
