/********************************************************************************
** Form generated from reading UI file 'DlgPartCylinder.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARTCYLINDER_H
#define UI_DLGPARTCYLINDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

namespace PartGui {

class Ui_DlgPartCylinder
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLabel *TextLabel1_2;
    QDoubleSpinBox *length;
    QDoubleSpinBox *radius;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout2;
    QComboBox *direction;
    QLabel *TextLabel1_3;
    QLabel *TextLabel1;
    QLabel *TextLabel3;
    QLabel *TextLabel2;
    QDoubleSpinBox *zPos;
    QDoubleSpinBox *yPos;
    QDoubleSpinBox *xPos;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *OKButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *PartGui__DlgPartCylinder)
    {
        if (PartGui__DlgPartCylinder->objectName().isEmpty())
            PartGui__DlgPartCylinder->setObjectName(QString::fromUtf8("PartGui__DlgPartCylinder"));
        PartGui__DlgPartCylinder->resize(296, 323);
        gridLayout = new QGridLayout(PartGui__DlgPartCylinder);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(PartGui__DlgPartCylinder);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 1, 0, 1, 1);

        TextLabel1_2 = new QLabel(groupBox);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);

        length = new QDoubleSpinBox(groupBox);
        length->setObjectName(QString::fromUtf8("length"));
        length->setMaximum(2.14748e+09);
        length->setValue(100);

        gridLayout1->addWidget(length, 1, 1, 1, 1);

        radius = new QDoubleSpinBox(groupBox);
        radius->setObjectName(QString::fromUtf8("radius"));
        radius->setMaximum(2.14748e+09);
        radius->setValue(10);

        gridLayout1->addWidget(radius, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        GroupBox5 = new QGroupBox(PartGui__DlgPartCylinder);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        gridLayout2 = new QGridLayout(GroupBox5);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        direction = new QComboBox(GroupBox5);
        direction->setObjectName(QString::fromUtf8("direction"));

        gridLayout2->addWidget(direction, 3, 1, 1, 1);

        TextLabel1_3 = new QLabel(GroupBox5);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        gridLayout2->addWidget(TextLabel1_3, 3, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox5);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout2->addWidget(TextLabel1, 0, 0, 1, 1);

        TextLabel3 = new QLabel(GroupBox5);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout2->addWidget(TextLabel3, 2, 0, 1, 1);

        TextLabel2 = new QLabel(GroupBox5);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout2->addWidget(TextLabel2, 1, 0, 1, 1);

        zPos = new QDoubleSpinBox(GroupBox5);
        zPos->setObjectName(QString::fromUtf8("zPos"));
        zPos->setMaximum(2.14748e+09);
        zPos->setMinimum(-2.14748e+09);

        gridLayout2->addWidget(zPos, 2, 1, 1, 1);

        yPos = new QDoubleSpinBox(GroupBox5);
        yPos->setObjectName(QString::fromUtf8("yPos"));
        yPos->setMaximum(2.14748e+09);
        yPos->setMinimum(-2.14748e+09);

        gridLayout2->addWidget(yPos, 1, 1, 1, 1);

        xPos = new QDoubleSpinBox(GroupBox5);
        xPos->setObjectName(QString::fromUtf8("xPos"));
        xPos->setMaximum(2.14748e+09);
        xPos->setMinimum(-2.14748e+09);

        gridLayout2->addWidget(xPos, 0, 1, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(88, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        OKButton = new QPushButton(PartGui__DlgPartCylinder);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));

        hboxLayout->addWidget(OKButton);

        CancelButton = new QPushButton(PartGui__DlgPartCylinder);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        hboxLayout->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(xPos, yPos);
        QWidget::setTabOrder(yPos, zPos);
        QWidget::setTabOrder(zPos, direction);
        QWidget::setTabOrder(direction, radius);
        QWidget::setTabOrder(radius, length);
        QWidget::setTabOrder(length, OKButton);
        QWidget::setTabOrder(OKButton, CancelButton);

        retranslateUi(PartGui__DlgPartCylinder);
        QObject::connect(OKButton, SIGNAL(clicked()), PartGui__DlgPartCylinder, SLOT(accept()));
        QObject::connect(CancelButton, SIGNAL(clicked()), PartGui__DlgPartCylinder, SLOT(reject()));

        direction->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PartGui__DlgPartCylinder);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgPartCylinder)
    {
        PartGui__DlgPartCylinder->setWindowTitle(QApplication::translate("PartGui::DlgPartCylinder", "Cylinder definition", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PartGui::DlgPartCylinder", "Parameter", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::DlgPartCylinder", "Height:", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("PartGui::DlgPartCylinder", "Radius:", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("PartGui::DlgPartCylinder", "Position:", 0, QApplication::UnicodeUTF8));
        TextLabel1_3->setText(QApplication::translate("PartGui::DlgPartCylinder", "Direction:", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("PartGui::DlgPartCylinder", "X:", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("PartGui::DlgPartCylinder", "Z:", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("PartGui::DlgPartCylinder", "Y:", 0, QApplication::UnicodeUTF8));
        OKButton->setText(QApplication::translate("PartGui::DlgPartCylinder", "OK", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("PartGui::DlgPartCylinder", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPartCylinder: public Ui_DlgPartCylinder {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPARTCYLINDER_H
