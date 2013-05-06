/********************************************************************************
** Form generated from reading UI file 'DlgDisplayProperties.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGDISPLAYPROPERTIES_H
#define UI_DLGDISPLAYPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgDisplayProperties
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout_3;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QComboBox *changeMode;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1_3;
    QComboBox *changePlot;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *hboxLayout2;
    QComboBox *changeMaterial;
    QPushButton *buttonUserDefinedMaterial;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QPushButton *buttonColorPlot;
    QLabel *label_2;
    Gui::ColorButton *buttonColor;
    QLabel *label_3;
    Gui::ColorButton *buttonLineColor;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLabel *textLabel1_2;
    QHBoxLayout *hboxLayout3;
    QSlider *sliderLineTransparency;
    QSpinBox *spinLineTransparency;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel2;
    QSpacerItem *spacerItem;
    QSpinBox *spinPointSize;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel3;
    QSpacerItem *spacerItem1;
    QSpinBox *spinLineWidth;
    QHBoxLayout *hboxLayout6;
    QSlider *horizontalSlider;
    QSpinBox *spinTransparency;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem2;
    QPushButton *CancelButton;

    void setupUi(QDialog *Gui__Dialog__DlgDisplayProperties)
    {
        if (Gui__Dialog__DlgDisplayProperties->objectName().isEmpty())
            Gui__Dialog__DlgDisplayProperties->setObjectName(QString::fromUtf8("Gui__Dialog__DlgDisplayProperties"));
        Gui__Dialog__DlgDisplayProperties->resize(290, 487);
        gridLayout_4 = new QGridLayout(Gui__Dialog__DlgDisplayProperties);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox1 = new QGroupBox(Gui__Dialog__DlgDisplayProperties);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout_3 = new QGridLayout(groupBox1);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(groupBox1);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        changeMode = new QComboBox(groupBox1);
        changeMode->setObjectName(QString::fromUtf8("changeMode"));

        hboxLayout->addWidget(changeMode);


        gridLayout_3->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel1_3 = new QLabel(groupBox1);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
        textLabel1_3->setEnabled(false);

        hboxLayout1->addWidget(textLabel1_3);

        changePlot = new QComboBox(groupBox1);
        changePlot->setObjectName(QString::fromUtf8("changePlot"));
        changePlot->setEnabled(false);

        hboxLayout1->addWidget(changePlot);


        gridLayout_3->addLayout(hboxLayout1, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox1, 0, 0, 1, 1);

        groupBox3 = new QGroupBox(Gui__Dialog__DlgDisplayProperties);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        gridLayout_2 = new QGridLayout(groupBox3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        changeMaterial = new QComboBox(groupBox3);
        changeMaterial->setObjectName(QString::fromUtf8("changeMaterial"));

        hboxLayout2->addWidget(changeMaterial);

        buttonUserDefinedMaterial = new QPushButton(groupBox3);
        buttonUserDefinedMaterial->setObjectName(QString::fromUtf8("buttonUserDefinedMaterial"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonUserDefinedMaterial->sizePolicy().hasHeightForWidth());
        buttonUserDefinedMaterial->setSizePolicy(sizePolicy);
        buttonUserDefinedMaterial->setMaximumSize(QSize(40, 32767));

        hboxLayout2->addWidget(buttonUserDefinedMaterial);


        gridLayout_2->addLayout(hboxLayout2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        buttonColorPlot = new QPushButton(groupBox3);
        buttonColorPlot->setObjectName(QString::fromUtf8("buttonColorPlot"));

        gridLayout->addWidget(buttonColorPlot, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        buttonColor = new Gui::ColorButton(groupBox3);
        buttonColor->setObjectName(QString::fromUtf8("buttonColor"));

        gridLayout->addWidget(buttonColor, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        buttonLineColor = new Gui::ColorButton(groupBox3);
        buttonLineColor->setObjectName(QString::fromUtf8("buttonLineColor"));

        gridLayout->addWidget(buttonLineColor, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox3, 1, 0, 1, 1);

        groupBox2 = new QGroupBox(Gui__Dialog__DlgDisplayProperties);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout1 = new QGridLayout(groupBox2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(groupBox2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 4, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBox2);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout1->addWidget(textLabel1_2, 2, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        sliderLineTransparency = new QSlider(groupBox2);
        sliderLineTransparency->setObjectName(QString::fromUtf8("sliderLineTransparency"));
        sliderLineTransparency->setMaximum(100);
        sliderLineTransparency->setOrientation(Qt::Horizontal);

        hboxLayout3->addWidget(sliderLineTransparency);

        spinLineTransparency = new QSpinBox(groupBox2);
        spinLineTransparency->setObjectName(QString::fromUtf8("spinLineTransparency"));
        spinLineTransparency->setMaximum(100);
        spinLineTransparency->setSingleStep(5);

        hboxLayout3->addWidget(spinLineTransparency);


        gridLayout1->addLayout(hboxLayout3, 5, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel2 = new QLabel(groupBox2);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        hboxLayout4->addWidget(textLabel2);

        spacerItem = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem);

        spinPointSize = new QSpinBox(groupBox2);
        spinPointSize->setObjectName(QString::fromUtf8("spinPointSize"));
        spinPointSize->setMinimum(1);
        spinPointSize->setMaximum(64);
        spinPointSize->setValue(2);

        hboxLayout4->addWidget(spinPointSize);


        gridLayout1->addLayout(hboxLayout4, 0, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabel3 = new QLabel(groupBox2);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        hboxLayout5->addWidget(textLabel3);

        spacerItem1 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem1);

        spinLineWidth = new QSpinBox(groupBox2);
        spinLineWidth->setObjectName(QString::fromUtf8("spinLineWidth"));
        spinLineWidth->setMinimum(1);
        spinLineWidth->setMaximum(64);
        spinLineWidth->setValue(2);

        hboxLayout5->addWidget(spinLineWidth);


        gridLayout1->addLayout(hboxLayout5, 1, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        horizontalSlider = new QSlider(groupBox2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        hboxLayout6->addWidget(horizontalSlider);

        spinTransparency = new QSpinBox(groupBox2);
        spinTransparency->setObjectName(QString::fromUtf8("spinTransparency"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinTransparency->sizePolicy().hasHeightForWidth());
        spinTransparency->setSizePolicy(sizePolicy1);
        spinTransparency->setMaximum(100);
        spinTransparency->setSingleStep(5);

        hboxLayout6->addWidget(spinTransparency);


        gridLayout1->addLayout(hboxLayout6, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox2, 2, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        spacerItem2 = new QSpacerItem(81, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem2);

        CancelButton = new QPushButton(Gui__Dialog__DlgDisplayProperties);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        hboxLayout7->addWidget(CancelButton);


        gridLayout_4->addLayout(hboxLayout7, 3, 0, 1, 1);

        groupBox2->raise();
        groupBox3->raise();
        groupBox1->raise();
        QWidget::setTabOrder(changeMode, changePlot);
        QWidget::setTabOrder(changePlot, changeMaterial);
        QWidget::setTabOrder(changeMaterial, buttonUserDefinedMaterial);
        QWidget::setTabOrder(buttonUserDefinedMaterial, buttonColor);
        QWidget::setTabOrder(buttonColor, buttonLineColor);
        QWidget::setTabOrder(buttonLineColor, spinPointSize);
        QWidget::setTabOrder(spinPointSize, spinLineWidth);
        QWidget::setTabOrder(spinLineWidth, horizontalSlider);
        QWidget::setTabOrder(horizontalSlider, spinTransparency);
        QWidget::setTabOrder(spinTransparency, sliderLineTransparency);
        QWidget::setTabOrder(sliderLineTransparency, spinLineTransparency);
        QWidget::setTabOrder(spinLineTransparency, CancelButton);

        retranslateUi(Gui__Dialog__DlgDisplayProperties);
        QObject::connect(CancelButton, SIGNAL(clicked()), Gui__Dialog__DlgDisplayProperties, SLOT(reject()));
        QObject::connect(spinTransparency, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinTransparency, SLOT(setValue(int)));
        QObject::connect(sliderLineTransparency, SIGNAL(valueChanged(int)), spinLineTransparency, SLOT(setValue(int)));
        QObject::connect(spinLineTransparency, SIGNAL(valueChanged(int)), sliderLineTransparency, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgDisplayProperties);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgDisplayProperties)
    {
        Gui__Dialog__DlgDisplayProperties->setWindowTitle(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Display properties", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Viewing mode", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Document window:", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Plot mode:", 0, QApplication::UnicodeUTF8));
        groupBox3->setTitle(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Material", 0, QApplication::UnicodeUTF8));
        buttonUserDefinedMaterial->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Color plot:", 0, QApplication::UnicodeUTF8));
        buttonColorPlot->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Shape color:", 0, QApplication::UnicodeUTF8));
        buttonColor->setText(QString());
        label_3->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Line color:", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Display", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Line transparency:", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Transparency:", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Point size:", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Line width:", 0, QApplication::UnicodeUTF8));
        CancelButton->setText(QApplication::translate("Gui::Dialog::DlgDisplayProperties", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgDisplayProperties: public Ui_DlgDisplayProperties {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGDISPLAYPROPERTIES_H
