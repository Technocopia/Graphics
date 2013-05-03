/********************************************************************************
** Form generated from reading UI file 'testwidget.ui'
**
** Created: Sun Apr 28 13:46:31 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWIDGET_H
#define UI_TESTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testwidget
{
public:

    void setupUi(QWidget *testwidget)
    {
        if (testwidget->objectName().isEmpty())
            testwidget->setObjectName(QString::fromUtf8("testwidget"));
        testwidget->resize(400, 300);

        retranslateUi(testwidget);

        QMetaObject::connectSlotsByName(testwidget);
    } // setupUi

    void retranslateUi(QWidget *testwidget)
    {
        testwidget->setWindowTitle(QApplication::translate("testwidget", "testwidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testwidget: public Ui_testwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWIDGET_H
