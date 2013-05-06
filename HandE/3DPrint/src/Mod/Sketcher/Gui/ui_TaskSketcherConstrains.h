/********************************************************************************
** Form generated from reading UI file 'TaskSketcherConstrains.ui'
**
** Created: Thu Apr 18 22:40:34 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSKETCHERCONSTRAINS_H
#define UI_TASKSKETCHERCONSTRAINS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace SketcherGui {

class Ui_TaskSketcherConstrains
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxFilter;
    QListWidget *listWidgetConstraints;

    void setupUi(QWidget *SketcherGui__TaskSketcherConstrains)
    {
        if (SketcherGui__TaskSketcherConstrains->objectName().isEmpty())
            SketcherGui__TaskSketcherConstrains->setObjectName(QString::fromUtf8("SketcherGui__TaskSketcherConstrains"));
        SketcherGui__TaskSketcherConstrains->resize(176, 288);
        verticalLayout = new QVBoxLayout(SketcherGui__TaskSketcherConstrains);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SketcherGui__TaskSketcherConstrains);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxFilter = new QComboBox(SketcherGui__TaskSketcherConstrains);
        comboBoxFilter->setObjectName(QString::fromUtf8("comboBoxFilter"));

        horizontalLayout->addWidget(comboBoxFilter);


        verticalLayout->addLayout(horizontalLayout);

        listWidgetConstraints = new QListWidget(SketcherGui__TaskSketcherConstrains);
        listWidgetConstraints->setObjectName(QString::fromUtf8("listWidgetConstraints"));
        listWidgetConstraints->setModelColumn(0);

        verticalLayout->addWidget(listWidgetConstraints);


        retranslateUi(SketcherGui__TaskSketcherConstrains);

        comboBoxFilter->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SketcherGui__TaskSketcherConstrains);
    } // setupUi

    void retranslateUi(QWidget *SketcherGui__TaskSketcherConstrains)
    {
        SketcherGui__TaskSketcherConstrains->setWindowTitle(QApplication::translate("SketcherGui::TaskSketcherConstrains", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SketcherGui::TaskSketcherConstrains", "Filter:", 0, QApplication::UnicodeUTF8));
        comboBoxFilter->clear();
        comboBoxFilter->insertItems(0, QStringList()
         << QApplication::translate("SketcherGui::TaskSketcherConstrains", "All", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SketcherGui::TaskSketcherConstrains", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SketcherGui::TaskSketcherConstrains", "Datums", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SketcherGui::TaskSketcherConstrains", "Named", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class TaskSketcherConstrains: public Ui_TaskSketcherConstrains {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_TASKSKETCHERCONSTRAINS_H
