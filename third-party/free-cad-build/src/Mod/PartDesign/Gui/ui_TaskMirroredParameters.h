/********************************************************************************
** Form generated from reading UI file 'TaskMirroredParameters.ui'
**
** Created: Thu Apr 18 22:35:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMIRROREDPARAMETERS_H
#define UI_TASKMIRROREDPARAMETERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace PartDesignGui {

class Ui_TaskMirroredParameters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutOriginal;
    QLabel *labelOriginal;
    QLineEdit *lineOriginal;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPlane;
    QComboBox *comboPlane;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonOK;
    QCheckBox *checkBoxUpdateView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PartDesignGui__TaskMirroredParameters)
    {
        if (PartDesignGui__TaskMirroredParameters->objectName().isEmpty())
            PartDesignGui__TaskMirroredParameters->setObjectName(QString::fromUtf8("PartDesignGui__TaskMirroredParameters"));
        PartDesignGui__TaskMirroredParameters->resize(218, 290);
        verticalLayout = new QVBoxLayout(PartDesignGui__TaskMirroredParameters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutOriginal = new QHBoxLayout();
        horizontalLayoutOriginal->setObjectName(QString::fromUtf8("horizontalLayoutOriginal"));
        labelOriginal = new QLabel(PartDesignGui__TaskMirroredParameters);
        labelOriginal->setObjectName(QString::fromUtf8("labelOriginal"));

        horizontalLayoutOriginal->addWidget(labelOriginal);

        lineOriginal = new QLineEdit(PartDesignGui__TaskMirroredParameters);
        lineOriginal->setObjectName(QString::fromUtf8("lineOriginal"));

        horizontalLayoutOriginal->addWidget(lineOriginal);


        verticalLayout->addLayout(horizontalLayoutOriginal);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPlane = new QLabel(PartDesignGui__TaskMirroredParameters);
        labelPlane->setObjectName(QString::fromUtf8("labelPlane"));

        horizontalLayout->addWidget(labelPlane);

        comboPlane = new QComboBox(PartDesignGui__TaskMirroredParameters);
        comboPlane->setObjectName(QString::fromUtf8("comboPlane"));

        horizontalLayout->addWidget(comboPlane);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonOK = new QPushButton(PartDesignGui__TaskMirroredParameters);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));

        horizontalLayout_3->addWidget(buttonOK);


        verticalLayout->addLayout(horizontalLayout_3);

        checkBoxUpdateView = new QCheckBox(PartDesignGui__TaskMirroredParameters);
        checkBoxUpdateView->setObjectName(QString::fromUtf8("checkBoxUpdateView"));
        checkBoxUpdateView->setChecked(true);

        verticalLayout->addWidget(checkBoxUpdateView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PartDesignGui__TaskMirroredParameters);

        QMetaObject::connectSlotsByName(PartDesignGui__TaskMirroredParameters);
    } // setupUi

    void retranslateUi(QWidget *PartDesignGui__TaskMirroredParameters)
    {
        PartDesignGui__TaskMirroredParameters->setWindowTitle(QApplication::translate("PartDesignGui::TaskMirroredParameters", "Form", 0, QApplication::UnicodeUTF8));
        labelOriginal->setText(QApplication::translate("PartDesignGui::TaskMirroredParameters", "Original feature", 0, QApplication::UnicodeUTF8));
        labelPlane->setText(QApplication::translate("PartDesignGui::TaskMirroredParameters", "Plane", 0, QApplication::UnicodeUTF8));
        comboPlane->clear();
        comboPlane->insertItems(0, QStringList()
         << QApplication::translate("PartDesignGui::TaskMirroredParameters", "Horizontal sketch axis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskMirroredParameters", "Vertical sketch axis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartDesignGui::TaskMirroredParameters", "Select reference...", 0, QApplication::UnicodeUTF8)
        );
        buttonOK->setText(QApplication::translate("PartDesignGui::TaskMirroredParameters", "OK", 0, QApplication::UnicodeUTF8));
        checkBoxUpdateView->setText(QApplication::translate("PartDesignGui::TaskMirroredParameters", "Update view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartDesignGui

namespace PartDesignGui {
namespace Ui {
    class TaskMirroredParameters: public Ui_TaskMirroredParameters {};
} // namespace Ui
} // namespace PartDesignGui

#endif // UI_TASKMIRROREDPARAMETERS_H
