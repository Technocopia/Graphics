/********************************************************************************
** Form generated from reading UI file 'TaskSketcherMessages.ui'
**
** Created: Thu Apr 18 22:40:34 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSKETCHERMESSAGES_H
#define UI_TASKSKETCHERMESSAGES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskSketcherMessages
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelConstrainStatus;
    QLabel *labelSolverStatus;

    void setupUi(QWidget *TaskSketcherMessages)
    {
        if (TaskSketcherMessages->objectName().isEmpty())
            TaskSketcherMessages->setObjectName(QString::fromUtf8("TaskSketcherMessages"));
        TaskSketcherMessages->resize(228, 89);
        verticalLayout = new QVBoxLayout(TaskSketcherMessages);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelConstrainStatus = new QLabel(TaskSketcherMessages);
        labelConstrainStatus->setObjectName(QString::fromUtf8("labelConstrainStatus"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(9);
        labelConstrainStatus->setFont(font);
        labelConstrainStatus->setWordWrap(true);

        verticalLayout->addWidget(labelConstrainStatus);

        labelSolverStatus = new QLabel(TaskSketcherMessages);
        labelSolverStatus->setObjectName(QString::fromUtf8("labelSolverStatus"));
        labelSolverStatus->setFont(font);
        labelSolverStatus->setWordWrap(true);

        verticalLayout->addWidget(labelSolverStatus);


        retranslateUi(TaskSketcherMessages);

        QMetaObject::connectSlotsByName(TaskSketcherMessages);
    } // setupUi

    void retranslateUi(QWidget *TaskSketcherMessages)
    {
        TaskSketcherMessages->setWindowTitle(QApplication::translate("TaskSketcherMessages", "Form", 0, QApplication::UnicodeUTF8));
        labelConstrainStatus->setText(QApplication::translate("TaskSketcherMessages", "Undefined degrees of freedom", 0, QApplication::UnicodeUTF8));
        labelSolverStatus->setText(QApplication::translate("TaskSketcherMessages", "Not solved yet", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskSketcherMessages: public Ui_TaskSketcherMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSKETCHERMESSAGES_H
