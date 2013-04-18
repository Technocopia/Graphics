/********************************************************************************
** Form generated from reading UI file 'TaskTransformedMessages.ui'
**
** Created: Thu Apr 18 07:20:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKTRANSFORMEDMESSAGES_H
#define UI_TASKTRANSFORMEDMESSAGES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskTransformedMessages
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTransformationStatus;

    void setupUi(QWidget *TaskTransformedMessages)
    {
        if (TaskTransformedMessages->objectName().isEmpty())
            TaskTransformedMessages->setObjectName(QString::fromUtf8("TaskTransformedMessages"));
        TaskTransformedMessages->resize(228, 89);
        verticalLayout = new QVBoxLayout(TaskTransformedMessages);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTransformationStatus = new QLabel(TaskTransformedMessages);
        labelTransformationStatus->setObjectName(QString::fromUtf8("labelTransformationStatus"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(9);
        labelTransformationStatus->setFont(font);
        labelTransformationStatus->setWordWrap(true);

        verticalLayout->addWidget(labelTransformationStatus);


        retranslateUi(TaskTransformedMessages);

        QMetaObject::connectSlotsByName(TaskTransformedMessages);
    } // setupUi

    void retranslateUi(QWidget *TaskTransformedMessages)
    {
        TaskTransformedMessages->setWindowTitle(QApplication::translate("TaskTransformedMessages", "Form", 0, QApplication::UnicodeUTF8));
        labelTransformationStatus->setText(QApplication::translate("TaskTransformedMessages", "No message", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskTransformedMessages: public Ui_TaskTransformedMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKTRANSFORMEDMESSAGES_H
