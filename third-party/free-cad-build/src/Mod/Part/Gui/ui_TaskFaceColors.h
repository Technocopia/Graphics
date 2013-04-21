/********************************************************************************
** Form generated from reading UI file 'TaskFaceColors.ui'
**
** Created: Thu Apr 18 22:32:07 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFACECOLORS_H
#define UI_TASKFACECOLORS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/Widgets.h"

namespace PartGui {

class Ui_TaskFaceColors
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *faceLabel;
    QLabel *labelElement;
    Gui::ColorButton *colorButton;
    QPushButton *defaultButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PartGui__TaskFaceColors)
    {
        if (PartGui__TaskFaceColors->objectName().isEmpty())
            PartGui__TaskFaceColors->setObjectName(QString::fromUtf8("PartGui__TaskFaceColors"));
        PartGui__TaskFaceColors->resize(247, 219);
        gridLayout_2 = new QGridLayout(PartGui__TaskFaceColors);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(PartGui__TaskFaceColors);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        groupBox = new QGroupBox(PartGui__TaskFaceColors);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setTitle(QString::fromUtf8("Group box"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        faceLabel = new QLabel(groupBox);
        faceLabel->setObjectName(QString::fromUtf8("faceLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(faceLabel->sizePolicy().hasHeightForWidth());
        faceLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(faceLabel, 0, 0, 1, 1);

        labelElement = new QLabel(groupBox);
        labelElement->setObjectName(QString::fromUtf8("labelElement"));
        labelElement->setText(QString::fromUtf8("[]"));

        gridLayout->addWidget(labelElement, 0, 1, 1, 1);

        colorButton = new Gui::ColorButton(groupBox);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));

        gridLayout->addWidget(colorButton, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 2);

        defaultButton = new QPushButton(PartGui__TaskFaceColors);
        defaultButton->setObjectName(QString::fromUtf8("defaultButton"));

        gridLayout_2->addWidget(defaultButton, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 135, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(PartGui__TaskFaceColors);

        QMetaObject::connectSlotsByName(PartGui__TaskFaceColors);
    } // setupUi

    void retranslateUi(QWidget *PartGui__TaskFaceColors)
    {
        PartGui__TaskFaceColors->setWindowTitle(QApplication::translate("PartGui::TaskFaceColors", "Set color per face", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::TaskFaceColors", "Click on the faces in the 3d view to select them.", 0, QApplication::UnicodeUTF8));
        faceLabel->setText(QApplication::translate("PartGui::TaskFaceColors", "Faces:", 0, QApplication::UnicodeUTF8));
        defaultButton->setText(QApplication::translate("PartGui::TaskFaceColors", "Set to default", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class TaskFaceColors: public Ui_TaskFaceColors {};
} // namespace Ui
} // namespace PartGui

#endif // UI_TASKFACECOLORS_H
