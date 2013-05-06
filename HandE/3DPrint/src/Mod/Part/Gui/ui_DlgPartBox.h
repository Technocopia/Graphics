/********************************************************************************
** Form generated from reading UI file 'DlgPartBox.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPARTBOX_H
#define UI_DLGPARTBOX_H

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

class Ui_DlgPartBox
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox5_2;
    QGridLayout *gridLayout1;
    QDoubleSpinBox *wLength;
    QDoubleSpinBox *vLength;
    QDoubleSpinBox *uLength;
    QLabel *TextLabel3_2;
    QLabel *TextLabel2_2;
    QLabel *TextLabel1_2;
    QGroupBox *GroupBox5;
    QGridLayout *gridLayout2;
    QDoubleSpinBox *xPos;
    QComboBox *direction;
    QDoubleSpinBox *yPos;
    QDoubleSpinBox *zPos;
    QLabel *TextLabel1_3;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QLabel *TextLabel3;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *OKButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *PartGui__DlgPartBox)
    {
        if (PartGui__DlgPartBox->objectName().isEmpty())
            PartGui__DlgPartBox->setObjectName(QString::fromUtf8("PartGui__DlgPartBox"));
        PartGui__DlgPartBox->resize(257, 323);
        gridLayout = new QGridLayout(PartGui__DlgPartBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox5_2 = new QGroupBox(PartGui__DlgPartBox);
        GroupBox5_2->setObjectName(QString::fromUtf8("GroupBox5_2"));
        gridLayout1 = new QGridLayout(GroupBox5_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        wLength = new QDoubleSpinBox(GroupBox5_2);
        wLength->setObjectName(QString::fromUtf8("wLength"));
        wLength->setMaximum(2.14748e+09);
        wLength->setValue(100);

        gridLayout1->addWidget(wLength, 2, 1, 1, 1);

        vLength = new QDoubleSpinBox(GroupBox5_2);
        vLength->setObjectName(QString::fromUtf8("vLength"));
        vLength->setMaximum(2.14748e+09);
        vLength->setValue(100);

        gridLayout1->addWidget(vLength, 1, 1, 1, 1);

        uLength = new QDoubleSpinBox(GroupBox5_2);
        uLength->setObjectName(QString::fromUtf8("uLength"));
        uLength->setMaximum(2.14748e+09);
        uLength->setValue(100);

        gridLayout1->addWidget(uLength, 0, 1, 1, 1);

        TextLabel3_2 = new QLabel(GroupBox5_2);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        gridLayout1->addWidget(TextLabel3_2, 2, 0, 1, 1);

        TextLabel2_2 = new QLabel(GroupBox5_2);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout1->addWidget(TextLabel2_2, 1, 0, 1, 1);

        TextLabel1_2 = new QLabel(GroupBox5_2);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);


        gridLayout->addWidget(GroupBox5_2, 1, 0, 1, 1);

        GroupBox5 = new QGroupBox(PartGui__DlgPartBox);
        GroupBox5->setObjectName(QString::fromUtf8("GroupBox5"));
        gridLayout2 = new QGridLayout(GroupBox5);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        xPos = new QDoubleSpinBox(GroupBox5);
        xPos->setObjectName(QString::fromUtf8("xPos"));
        xPos->setMaximum(2.14748e+09);
        xPos->setMinimum(-2.14748e+09);

        gridLayout2->addWidget(xPos, 0, 1, 1, 1);

        direction = new QComboBox(GroupBox5);
        direction->setObjectName(QString::fromUtf8("direction"));

        gridLayout2->addWidget(direction, 3, 1, 1, 1);

        yPos = new QDoubleSpinBox(GroupBox5);
        yPos->setObjectName(QString::fromUtf8("yPos"));
        yPos->setMaximum(2.14748e+09);
        yPos->setMinimum(-2.14748e+09);

        gridLayout2->addWidget(yPos, 1, 1, 1, 1);

        zPos = new QDoubleSpinBox(GroupBox5);
        zPos->setObjectName(QString::fromUtf8("zPos"));
        zPos->setMaximum(2.14748e+09);
        zPos->setMinimum(-2.14748e+09);

        gridLayout2->addWidget(zPos, 2, 1, 1, 1);

        TextLabel1_3 = new QLabel(GroupBox5);
        TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));

        gridLayout2->addWidget(TextLabel1_3, 3, 0, 1, 1);

        TextLabel1 = new QLabel(GroupBox5);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout2->addWidget(TextLabel1, 0, 0, 1, 1);

        TextLabel2 = new QLabel(GroupBox5);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout2->addWidget(TextLabel2, 1, 0, 1, 1);

        TextLabel3 = new QLabel(GroupBox5);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout2->addWidget(TextLabel3, 2, 0, 1, 1);


        gridLayout->addWidget(GroupBox5, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(16, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        OKButton = new QPushButton(PartGui__DlgPartBox);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));

        hboxLayout->addWidget(OKButton);

        CancelButton = new QPushButton(PartGui__DlgPartBox);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        hboxLayout->addWidget(CancelButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        QWidget::setTabOrder(xPos, yPos);
        QWidget::setTabOrder(yPos, zPos);
        QWidget::setTabOrder(zPos, direction);
        QWidget::setTabOrder(direction, uLength);
        QWidget::setTabOrder(uLength, vLength);
        QWidget::setTabOrder(vLength, wLength);
        QWidget::setTabOrder(wLength, OKButton);
        QWidget::setTabOrder(OKButton, CancelButton);

        retranslateUi(PartGui__DlgPartBox);
        QObject::connect(OKButton, SIGNAL(clicked()), PartGui__DlgPartBox, SLOT(accept()));
        QObject::connect(CancelButton, SIGNAL(clicked()), PartGui__DlgPartBox, SLOT(reject()));

        direction->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PartGui__DlgPartBox);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgPartBox)
    {
        PartGui__DlgPartBox->setWindowTitle(QApplication::translate("PartGui::DlgPartBox", "Box definition", 0, QApplication::UnicodeUTF8));
        GroupBox5_2->setTitle(QApplication::translate("PartGui::DlgPartBox", "Size:", 0, QApplication::UnicodeUTF8));
        TextLabel3_2->setText(QApplication::translate("PartGui::DlgPartBox", "Height:", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("PartGui::DlgPartBox", "Width:", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("PartGui::DlgPartBox", "Length:", 0, QApplication::UnicodeUTF8));
        GroupBox5->setTitle(QApplication::translate("PartGui::DlgPartBox", "Position:", 0, QApplication::UnicodeUTF8));
        TextLabel1_3->setText(QApplication::translate("PartGui::DlgPartBox", "Direction:", 0, QApplication::UnicodeUTF8));
        TextLabel1->setText(QApplication::translate("PartGui::DlgPartBox", "X:", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("PartGui::DlgPartBox", "Y:", 0, QApplication::UnicodeUTF8));
        TextLabel3->setText(QApplication::translate("PartGui::DlgPartBox", "Z:", 0, QApplication::UnicodeUTF8));
        OKButton->setText(QApplication::translate("PartGui::DlgPartBox", "OK", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("PartGui::DlgPartBox", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPartBox: public Ui_DlgPartBox {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPARTBOX_H
