/********************************************************************************
** Form generated from reading UI file 'TaskSketcherGeneral.ui'
**
** Created: Thu Apr 18 07:24:49 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSKETCHERGENERAL_H
#define UI_TASKSKETCHERGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace SketcherGui {

class Ui_TaskSketcherGeneral
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxGridSize;
    QCheckBox *checkBoxGridSnap;
    QCheckBox *checkBoxAutoconstraints;

    void setupUi(QWidget *SketcherGui__TaskSketcherGeneral)
    {
        if (SketcherGui__TaskSketcherGeneral->objectName().isEmpty())
            SketcherGui__TaskSketcherGeneral->setObjectName(QString::fromUtf8("SketcherGui__TaskSketcherGeneral"));
        SketcherGui__TaskSketcherGeneral->resize(153, 88);
        verticalLayout = new QVBoxLayout(SketcherGui__TaskSketcherGeneral);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SketcherGui__TaskSketcherGeneral);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxGridSize = new QComboBox(SketcherGui__TaskSketcherGeneral);
        comboBoxGridSize->insertItems(0, QStringList()
         << QString::fromUtf8("0.1 mm")
         << QString::fromUtf8("0.2 mm")
         << QString::fromUtf8("0.5 mm")
         << QString::fromUtf8("1 mm")
         << QString::fromUtf8("2 mm")
         << QString::fromUtf8("5 mm")
         << QString::fromUtf8("10 mm")
         << QString::fromUtf8("20 mm")
         << QString::fromUtf8("50 mm")
         << QString::fromUtf8("100 mm")
         << QString::fromUtf8("200 mm")
         << QString::fromUtf8("500 mm")
         << QString::fromUtf8("1 m")
         << QString::fromUtf8("2 m")
         << QString::fromUtf8("5 m")
         << QString::fromUtf8("10 m")
         << QString::fromUtf8("20 m")
        );
        comboBoxGridSize->setObjectName(QString::fromUtf8("comboBoxGridSize"));
        comboBoxGridSize->setEnabled(true);

        horizontalLayout->addWidget(comboBoxGridSize);


        verticalLayout->addLayout(horizontalLayout);

        checkBoxGridSnap = new QCheckBox(SketcherGui__TaskSketcherGeneral);
        checkBoxGridSnap->setObjectName(QString::fromUtf8("checkBoxGridSnap"));
        checkBoxGridSnap->setEnabled(true);

        verticalLayout->addWidget(checkBoxGridSnap);

        checkBoxAutoconstraints = new QCheckBox(SketcherGui__TaskSketcherGeneral);
        checkBoxAutoconstraints->setObjectName(QString::fromUtf8("checkBoxAutoconstraints"));
        checkBoxAutoconstraints->setEnabled(true);
        checkBoxAutoconstraints->setChecked(true);

        verticalLayout->addWidget(checkBoxAutoconstraints);


        retranslateUi(SketcherGui__TaskSketcherGeneral);

        comboBoxGridSize->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(SketcherGui__TaskSketcherGeneral);
    } // setupUi

    void retranslateUi(QWidget *SketcherGui__TaskSketcherGeneral)
    {
        SketcherGui__TaskSketcherGeneral->setWindowTitle(QApplication::translate("SketcherGui::TaskSketcherGeneral", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SketcherGui::TaskSketcherGeneral", "Grid size:", 0, QApplication::UnicodeUTF8));
        checkBoxGridSnap->setText(QApplication::translate("SketcherGui::TaskSketcherGeneral", "Grid snap", 0, QApplication::UnicodeUTF8));
        checkBoxAutoconstraints->setText(QApplication::translate("SketcherGui::TaskSketcherGeneral", "Auto constraints", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace SketcherGui

namespace SketcherGui {
namespace Ui {
    class TaskSketcherGeneral: public Ui_TaskSketcherGeneral {};
} // namespace Ui
} // namespace SketcherGui

#endif // UI_TASKSKETCHERGENERAL_H
