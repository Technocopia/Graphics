/********************************************************************************
** Form generated from reading UI file 'TaskRobotMessages.ui'
**
** Created: Thu Apr 18 22:43:15 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKROBOTMESSAGES_H
#define UI_TASKROBOTMESSAGES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskRobotMessages
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonClear;
    QTextEdit *textEditMessages;

    void setupUi(QWidget *TaskRobotMessages)
    {
        if (TaskRobotMessages->objectName().isEmpty())
            TaskRobotMessages->setObjectName(QString::fromUtf8("TaskRobotMessages"));
        TaskRobotMessages->resize(252, 300);
        verticalLayout = new QVBoxLayout(TaskRobotMessages);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonClear = new QPushButton(TaskRobotMessages);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        verticalLayout->addWidget(pushButtonClear);

        textEditMessages = new QTextEdit(TaskRobotMessages);
        textEditMessages->setObjectName(QString::fromUtf8("textEditMessages"));

        verticalLayout->addWidget(textEditMessages);


        retranslateUi(TaskRobotMessages);

        QMetaObject::connectSlotsByName(TaskRobotMessages);
    } // setupUi

    void retranslateUi(QWidget *TaskRobotMessages)
    {
        TaskRobotMessages->setWindowTitle(QApplication::translate("TaskRobotMessages", "Form", 0, QApplication::UnicodeUTF8));
        pushButtonClear->setText(QApplication::translate("TaskRobotMessages", "clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskRobotMessages: public Ui_TaskRobotMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKROBOTMESSAGES_H
