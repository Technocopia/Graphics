/********************************************************************************
** Form generated from reading UI file 'TaskShapeBuilder.ui'
**
** Created: Thu Apr 18 22:32:07 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSHAPEBUILDER_H
#define UI_TASKSHAPEBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

namespace PartGui {

class Ui_TaskShapeBuilder
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonEdge;
    QRadioButton *radioButtonFace;
    QCheckBox *checkPlanar;
    QRadioButton *radioButtonShell;
    QRadioButton *radioButtonSolid;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *createButton;
    QCheckBox *checkFaces;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QWidget *PartGui__TaskShapeBuilder)
    {
        if (PartGui__TaskShapeBuilder->objectName().isEmpty())
            PartGui__TaskShapeBuilder->setObjectName(QString::fromUtf8("PartGui__TaskShapeBuilder"));
        PartGui__TaskShapeBuilder->resize(220, 259);
        gridLayout_2 = new QGridLayout(PartGui__TaskShapeBuilder);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(PartGui__TaskShapeBuilder);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButtonEdge = new QRadioButton(groupBox);
        radioButtonEdge->setObjectName(QString::fromUtf8("radioButtonEdge"));

        gridLayout->addWidget(radioButtonEdge, 0, 0, 1, 2);

        radioButtonFace = new QRadioButton(groupBox);
        radioButtonFace->setObjectName(QString::fromUtf8("radioButtonFace"));

        gridLayout->addWidget(radioButtonFace, 1, 0, 1, 1);

        checkPlanar = new QCheckBox(groupBox);
        checkPlanar->setObjectName(QString::fromUtf8("checkPlanar"));

        gridLayout->addWidget(checkPlanar, 1, 1, 1, 1);

        radioButtonShell = new QRadioButton(groupBox);
        radioButtonShell->setObjectName(QString::fromUtf8("radioButtonShell"));

        gridLayout->addWidget(radioButtonShell, 2, 0, 1, 1);

        radioButtonSolid = new QRadioButton(groupBox);
        radioButtonSolid->setObjectName(QString::fromUtf8("radioButtonSolid"));

        gridLayout->addWidget(radioButtonSolid, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        createButton = new QPushButton(groupBox);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        horizontalLayout->addWidget(createButton);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        checkFaces = new QCheckBox(groupBox);
        checkFaces->setObjectName(QString::fromUtf8("checkFaces"));

        gridLayout->addWidget(checkFaces, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        label = new QLabel(PartGui__TaskShapeBuilder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("TextLabel"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);


        retranslateUi(PartGui__TaskShapeBuilder);

        QMetaObject::connectSlotsByName(PartGui__TaskShapeBuilder);
    } // setupUi

    void retranslateUi(QWidget *PartGui__TaskShapeBuilder)
    {
        PartGui__TaskShapeBuilder->setWindowTitle(QApplication::translate("PartGui::TaskShapeBuilder", "Create shape", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PartGui::TaskShapeBuilder", "Create shape", 0, QApplication::UnicodeUTF8));
        radioButtonEdge->setText(QApplication::translate("PartGui::TaskShapeBuilder", "Edge from vertices", 0, QApplication::UnicodeUTF8));
        radioButtonFace->setText(QApplication::translate("PartGui::TaskShapeBuilder", "Face from edges", 0, QApplication::UnicodeUTF8));
        checkPlanar->setText(QApplication::translate("PartGui::TaskShapeBuilder", "Planar", 0, QApplication::UnicodeUTF8));
        radioButtonShell->setText(QApplication::translate("PartGui::TaskShapeBuilder", "Shell from faces", 0, QApplication::UnicodeUTF8));
        radioButtonSolid->setText(QApplication::translate("PartGui::TaskShapeBuilder", "Solid from shell", 0, QApplication::UnicodeUTF8));
        createButton->setText(QApplication::translate("PartGui::TaskShapeBuilder", "Create", 0, QApplication::UnicodeUTF8));
        checkFaces->setText(QApplication::translate("PartGui::TaskShapeBuilder", "All faces", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class TaskShapeBuilder: public Ui_TaskShapeBuilder {};
} // namespace Ui
} // namespace PartGui

#endif // UI_TASKSHAPEBUILDER_H
