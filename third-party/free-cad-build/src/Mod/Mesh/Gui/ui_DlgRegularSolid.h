/********************************************************************************
** Form generated from reading UI file 'DlgRegularSolid.ui'
**
** Created: Thu Apr 18 07:15:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGREGULARSOLID_H
#define UI_DLGREGULARSOLID_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

namespace MeshGui {

class Ui_DlgRegularSolid
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *createSolidButton;
    QPushButton *buttonClose;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QComboBox *comboBox1;
    QStackedWidget *widgetStack2;
    QWidget *WStackPage1;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QLabel *textLabel4;
    QDoubleSpinBox *boxHeight;
    QDoubleSpinBox *boxLength;
    QLabel *textLabel2;
    QDoubleSpinBox *boxWidth;
    QLabel *textLabel3;
    QSpacerItem *spacerItem1;
    QWidget *WStackPage2;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QLabel *textLabel5;
    QDoubleSpinBox *cylinderRadius;
    QDoubleSpinBox *cylinderLength;
    QLabel *textLabel6;
    QFrame *line1;
    QGridLayout *gridLayout6;
    QCheckBox *cylinderClosed;
    QSpinBox *cylinderCount;
    QLabel *textLabel8;
    QLabel *textLabel7;
    QDoubleSpinBox *cylinderEdgeLength;
    QSpacerItem *spacerItem2;
    QWidget *WStackPage3;
    QGridLayout *gridLayout7;
    QGridLayout *gridLayout8;
    QDoubleSpinBox *coneRadius2;
    QLabel *textLabel11;
    QDoubleSpinBox *coneLength;
    QLabel *textLabel9;
    QLabel *textLabel10;
    QDoubleSpinBox *coneRadius1;
    QFrame *line2;
    QGridLayout *gridLayout9;
    QDoubleSpinBox *coneEdgeLength;
    QLabel *textLabel13;
    QCheckBox *coneClosed;
    QSpinBox *coneCount;
    QLabel *textLabel12;
    QSpacerItem *spacerItem3;
    QWidget *WStackPage4;
    QGridLayout *gridLayout10;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel14;
    QDoubleSpinBox *sphereRadius;
    QFrame *line3;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel15;
    QSpinBox *sphereCount;
    QSpacerItem *spacerItem4;
    QWidget *WStackPage5;
    QGridLayout *gridLayout11;
    QGridLayout *gridLayout12;
    QDoubleSpinBox *ellipsoidRadius2;
    QLabel *textLabel17;
    QDoubleSpinBox *ellipsoidRadius1;
    QLabel *textLabel16;
    QFrame *line4;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel18;
    QSpinBox *ellipsoidCount;
    QSpacerItem *spacerItem5;
    QWidget *WStackPage6;
    QGridLayout *gridLayout13;
    QGridLayout *gridLayout14;
    QLabel *textLabel20;
    QLabel *textLabel19;
    QDoubleSpinBox *toroidRadius2;
    QDoubleSpinBox *toroidRadius1;
    QFrame *line5;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel21;
    QSpinBox *toroidCount;
    QSpacerItem *spacerItem6;

    void setupUi(QDialog *MeshGui__DlgRegularSolid)
    {
        if (MeshGui__DlgRegularSolid->objectName().isEmpty())
            MeshGui__DlgRegularSolid->setObjectName(QString::fromUtf8("MeshGui__DlgRegularSolid"));
        MeshGui__DlgRegularSolid->resize(265, 319);
        MeshGui__DlgRegularSolid->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(MeshGui__DlgRegularSolid);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(10, 10, 10, 10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        createSolidButton = new QPushButton(MeshGui__DlgRegularSolid);
        createSolidButton->setObjectName(QString::fromUtf8("createSolidButton"));
        createSolidButton->setAutoDefault(true);
        createSolidButton->setDefault(true);

        hboxLayout->addWidget(createSolidButton);

        buttonClose = new QPushButton(MeshGui__DlgRegularSolid);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setAutoDefault(true);

        hboxLayout->addWidget(buttonClose);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        groupBox1 = new QGroupBox(MeshGui__DlgRegularSolid);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(10, 10, 10, 10);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        comboBox1 = new QComboBox(groupBox1);
        comboBox1->setObjectName(QString::fromUtf8("comboBox1"));

        gridLayout1->addWidget(comboBox1, 0, 0, 1, 1);

        widgetStack2 = new QStackedWidget(groupBox1);
        widgetStack2->setObjectName(QString::fromUtf8("widgetStack2"));
        WStackPage1 = new QWidget();
        WStackPage1->setObjectName(QString::fromUtf8("WStackPage1"));
        gridLayout2 = new QGridLayout(WStackPage1);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        textLabel4 = new QLabel(WStackPage1);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout3->addWidget(textLabel4, 2, 0, 1, 1);

        boxHeight = new QDoubleSpinBox(WStackPage1);
        boxHeight->setObjectName(QString::fromUtf8("boxHeight"));
        boxHeight->setMaximum(1000);
        boxHeight->setValue(10);

        gridLayout3->addWidget(boxHeight, 2, 1, 1, 1);

        boxLength = new QDoubleSpinBox(WStackPage1);
        boxLength->setObjectName(QString::fromUtf8("boxLength"));
        boxLength->setMaximum(1000);
        boxLength->setMinimum(0);
        boxLength->setValue(10);

        gridLayout3->addWidget(boxLength, 0, 1, 1, 1);

        textLabel2 = new QLabel(WStackPage1);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout3->addWidget(textLabel2, 0, 0, 1, 1);

        boxWidth = new QDoubleSpinBox(WStackPage1);
        boxWidth->setObjectName(QString::fromUtf8("boxWidth"));
        boxWidth->setMaximum(1000);
        boxWidth->setValue(10);

        gridLayout3->addWidget(boxWidth, 1, 1, 1, 1);

        textLabel3 = new QLabel(WStackPage1);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout3->addWidget(textLabel3, 1, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 1, 0, 1, 1);

        widgetStack2->addWidget(WStackPage1);
        WStackPage2 = new QWidget();
        WStackPage2->setObjectName(QString::fromUtf8("WStackPage2"));
        gridLayout4 = new QGridLayout(WStackPage2);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        textLabel5 = new QLabel(WStackPage2);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout5->addWidget(textLabel5, 0, 0, 1, 1);

        cylinderRadius = new QDoubleSpinBox(WStackPage2);
        cylinderRadius->setObjectName(QString::fromUtf8("cylinderRadius"));
        cylinderRadius->setValue(2);

        gridLayout5->addWidget(cylinderRadius, 0, 1, 1, 1);

        cylinderLength = new QDoubleSpinBox(WStackPage2);
        cylinderLength->setObjectName(QString::fromUtf8("cylinderLength"));
        cylinderLength->setValue(10);

        gridLayout5->addWidget(cylinderLength, 1, 1, 1, 1);

        textLabel6 = new QLabel(WStackPage2);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout5->addWidget(textLabel6, 1, 0, 1, 1);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);

        line1 = new QFrame(WStackPage2);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);

        gridLayout4->addWidget(line1, 1, 0, 1, 1);

        gridLayout6 = new QGridLayout();
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(0, 0, 0, 0);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        cylinderClosed = new QCheckBox(WStackPage2);
        cylinderClosed->setObjectName(QString::fromUtf8("cylinderClosed"));
        cylinderClosed->setChecked(true);

        gridLayout6->addWidget(cylinderClosed, 2, 0, 1, 2);

        cylinderCount = new QSpinBox(WStackPage2);
        cylinderCount->setObjectName(QString::fromUtf8("cylinderCount"));
        cylinderCount->setValue(50);

        gridLayout6->addWidget(cylinderCount, 1, 1, 1, 1);

        textLabel8 = new QLabel(WStackPage2);
        textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

        gridLayout6->addWidget(textLabel8, 1, 0, 1, 1);

        textLabel7 = new QLabel(WStackPage2);
        textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

        gridLayout6->addWidget(textLabel7, 0, 0, 1, 1);

        cylinderEdgeLength = new QDoubleSpinBox(WStackPage2);
        cylinderEdgeLength->setObjectName(QString::fromUtf8("cylinderEdgeLength"));
        cylinderEdgeLength->setMaximum(10);
        cylinderEdgeLength->setValue(1);

        gridLayout6->addWidget(cylinderEdgeLength, 0, 1, 1, 1);


        gridLayout4->addLayout(gridLayout6, 2, 0, 1, 1);

        spacerItem2 = new QSpacerItem(31, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem2, 3, 0, 1, 1);

        widgetStack2->addWidget(WStackPage2);
        WStackPage3 = new QWidget();
        WStackPage3->setObjectName(QString::fromUtf8("WStackPage3"));
        gridLayout7 = new QGridLayout(WStackPage3);
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(0, 0, 0, 0);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        gridLayout8 = new QGridLayout();
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(0, 0, 0, 0);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        coneRadius2 = new QDoubleSpinBox(WStackPage3);
        coneRadius2->setObjectName(QString::fromUtf8("coneRadius2"));
        coneRadius2->setValue(4);

        gridLayout8->addWidget(coneRadius2, 1, 1, 2, 1);

        textLabel11 = new QLabel(WStackPage3);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));

        gridLayout8->addWidget(textLabel11, 2, 0, 2, 1);

        coneLength = new QDoubleSpinBox(WStackPage3);
        coneLength->setObjectName(QString::fromUtf8("coneLength"));
        coneLength->setValue(10);

        gridLayout8->addWidget(coneLength, 3, 1, 1, 1);

        textLabel9 = new QLabel(WStackPage3);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));

        gridLayout8->addWidget(textLabel9, 0, 0, 1, 1);

        textLabel10 = new QLabel(WStackPage3);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));

        gridLayout8->addWidget(textLabel10, 1, 0, 1, 1);

        coneRadius1 = new QDoubleSpinBox(WStackPage3);
        coneRadius1->setObjectName(QString::fromUtf8("coneRadius1"));
        coneRadius1->setValue(2);

        gridLayout8->addWidget(coneRadius1, 0, 1, 1, 1);


        gridLayout7->addLayout(gridLayout8, 0, 0, 1, 1);

        line2 = new QFrame(WStackPage3);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);

        gridLayout7->addWidget(line2, 1, 0, 1, 1);

        gridLayout9 = new QGridLayout();
        gridLayout9->setSpacing(6);
        gridLayout9->setContentsMargins(0, 0, 0, 0);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        coneEdgeLength = new QDoubleSpinBox(WStackPage3);
        coneEdgeLength->setObjectName(QString::fromUtf8("coneEdgeLength"));
        coneEdgeLength->setValue(1);

        gridLayout9->addWidget(coneEdgeLength, 0, 1, 1, 1);

        textLabel13 = new QLabel(WStackPage3);
        textLabel13->setObjectName(QString::fromUtf8("textLabel13"));

        gridLayout9->addWidget(textLabel13, 1, 0, 1, 1);

        coneClosed = new QCheckBox(WStackPage3);
        coneClosed->setObjectName(QString::fromUtf8("coneClosed"));
        coneClosed->setChecked(true);

        gridLayout9->addWidget(coneClosed, 2, 0, 1, 1);

        coneCount = new QSpinBox(WStackPage3);
        coneCount->setObjectName(QString::fromUtf8("coneCount"));
        coneCount->setValue(50);

        gridLayout9->addWidget(coneCount, 1, 1, 1, 1);

        textLabel12 = new QLabel(WStackPage3);
        textLabel12->setObjectName(QString::fromUtf8("textLabel12"));

        gridLayout9->addWidget(textLabel12, 0, 0, 1, 1);


        gridLayout7->addLayout(gridLayout9, 2, 0, 1, 1);

        spacerItem3 = new QSpacerItem(31, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout7->addItem(spacerItem3, 3, 0, 1, 1);

        widgetStack2->addWidget(WStackPage3);
        WStackPage4 = new QWidget();
        WStackPage4->setObjectName(QString::fromUtf8("WStackPage4"));
        gridLayout10 = new QGridLayout(WStackPage4);
        gridLayout10->setSpacing(6);
        gridLayout10->setContentsMargins(0, 0, 0, 0);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel14 = new QLabel(WStackPage4);
        textLabel14->setObjectName(QString::fromUtf8("textLabel14"));

        hboxLayout1->addWidget(textLabel14);

        sphereRadius = new QDoubleSpinBox(WStackPage4);
        sphereRadius->setObjectName(QString::fromUtf8("sphereRadius"));
        sphereRadius->setValue(5);

        hboxLayout1->addWidget(sphereRadius);


        gridLayout10->addLayout(hboxLayout1, 0, 0, 1, 1);

        line3 = new QFrame(WStackPage4);
        line3->setObjectName(QString::fromUtf8("line3"));
        line3->setFrameShape(QFrame::HLine);
        line3->setFrameShadow(QFrame::Sunken);

        gridLayout10->addWidget(line3, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel15 = new QLabel(WStackPage4);
        textLabel15->setObjectName(QString::fromUtf8("textLabel15"));

        hboxLayout2->addWidget(textLabel15);

        sphereCount = new QSpinBox(WStackPage4);
        sphereCount->setObjectName(QString::fromUtf8("sphereCount"));
        sphereCount->setValue(50);

        hboxLayout2->addWidget(sphereCount);


        gridLayout10->addLayout(hboxLayout2, 2, 0, 1, 1);

        spacerItem4 = new QSpacerItem(21, 151, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout10->addItem(spacerItem4, 3, 0, 1, 1);

        widgetStack2->addWidget(WStackPage4);
        WStackPage5 = new QWidget();
        WStackPage5->setObjectName(QString::fromUtf8("WStackPage5"));
        gridLayout11 = new QGridLayout(WStackPage5);
        gridLayout11->setSpacing(6);
        gridLayout11->setContentsMargins(0, 0, 0, 0);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        gridLayout12 = new QGridLayout();
        gridLayout12->setSpacing(6);
        gridLayout12->setContentsMargins(0, 0, 0, 0);
        gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
        ellipsoidRadius2 = new QDoubleSpinBox(WStackPage5);
        ellipsoidRadius2->setObjectName(QString::fromUtf8("ellipsoidRadius2"));
        ellipsoidRadius2->setValue(4);

        gridLayout12->addWidget(ellipsoidRadius2, 1, 1, 1, 1);

        textLabel17 = new QLabel(WStackPage5);
        textLabel17->setObjectName(QString::fromUtf8("textLabel17"));

        gridLayout12->addWidget(textLabel17, 1, 0, 1, 1);

        ellipsoidRadius1 = new QDoubleSpinBox(WStackPage5);
        ellipsoidRadius1->setObjectName(QString::fromUtf8("ellipsoidRadius1"));
        ellipsoidRadius1->setValue(2);

        gridLayout12->addWidget(ellipsoidRadius1, 0, 1, 1, 1);

        textLabel16 = new QLabel(WStackPage5);
        textLabel16->setObjectName(QString::fromUtf8("textLabel16"));

        gridLayout12->addWidget(textLabel16, 0, 0, 1, 1);


        gridLayout11->addLayout(gridLayout12, 0, 0, 1, 1);

        line4 = new QFrame(WStackPage5);
        line4->setObjectName(QString::fromUtf8("line4"));
        line4->setFrameShape(QFrame::HLine);
        line4->setFrameShadow(QFrame::Sunken);

        gridLayout11->addWidget(line4, 1, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        textLabel18 = new QLabel(WStackPage5);
        textLabel18->setObjectName(QString::fromUtf8("textLabel18"));

        hboxLayout3->addWidget(textLabel18);

        ellipsoidCount = new QSpinBox(WStackPage5);
        ellipsoidCount->setObjectName(QString::fromUtf8("ellipsoidCount"));
        ellipsoidCount->setValue(50);

        hboxLayout3->addWidget(ellipsoidCount);


        gridLayout11->addLayout(hboxLayout3, 2, 0, 1, 1);

        spacerItem5 = new QSpacerItem(31, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout11->addItem(spacerItem5, 3, 0, 1, 1);

        widgetStack2->addWidget(WStackPage5);
        WStackPage6 = new QWidget();
        WStackPage6->setObjectName(QString::fromUtf8("WStackPage6"));
        gridLayout13 = new QGridLayout(WStackPage6);
        gridLayout13->setSpacing(6);
        gridLayout13->setContentsMargins(0, 0, 0, 0);
        gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
        gridLayout14 = new QGridLayout();
        gridLayout14->setSpacing(6);
        gridLayout14->setContentsMargins(0, 0, 0, 0);
        gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
        textLabel20 = new QLabel(WStackPage6);
        textLabel20->setObjectName(QString::fromUtf8("textLabel20"));

        gridLayout14->addWidget(textLabel20, 1, 0, 1, 1);

        textLabel19 = new QLabel(WStackPage6);
        textLabel19->setObjectName(QString::fromUtf8("textLabel19"));

        gridLayout14->addWidget(textLabel19, 0, 0, 1, 1);

        toroidRadius2 = new QDoubleSpinBox(WStackPage6);
        toroidRadius2->setObjectName(QString::fromUtf8("toroidRadius2"));
        toroidRadius2->setValue(2);

        gridLayout14->addWidget(toroidRadius2, 1, 1, 1, 1);

        toroidRadius1 = new QDoubleSpinBox(WStackPage6);
        toroidRadius1->setObjectName(QString::fromUtf8("toroidRadius1"));
        toroidRadius1->setValue(10);

        gridLayout14->addWidget(toroidRadius1, 0, 1, 1, 1);


        gridLayout13->addLayout(gridLayout14, 0, 0, 1, 1);

        line5 = new QFrame(WStackPage6);
        line5->setObjectName(QString::fromUtf8("line5"));
        line5->setFrameShape(QFrame::HLine);
        line5->setFrameShadow(QFrame::Sunken);

        gridLayout13->addWidget(line5, 1, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel21 = new QLabel(WStackPage6);
        textLabel21->setObjectName(QString::fromUtf8("textLabel21"));

        hboxLayout4->addWidget(textLabel21);

        toroidCount = new QSpinBox(WStackPage6);
        toroidCount->setObjectName(QString::fromUtf8("toroidCount"));
        toroidCount->setValue(50);

        hboxLayout4->addWidget(toroidCount);


        gridLayout13->addLayout(hboxLayout4, 2, 0, 1, 1);

        spacerItem6 = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout13->addItem(spacerItem6, 3, 0, 1, 1);

        widgetStack2->addWidget(WStackPage6);

        gridLayout1->addWidget(widgetStack2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 0, 0, 1, 1);

        QWidget::setTabOrder(comboBox1, boxLength);
        QWidget::setTabOrder(boxLength, boxWidth);
        QWidget::setTabOrder(boxWidth, boxHeight);
        QWidget::setTabOrder(boxHeight, cylinderRadius);
        QWidget::setTabOrder(cylinderRadius, cylinderLength);
        QWidget::setTabOrder(cylinderLength, cylinderEdgeLength);
        QWidget::setTabOrder(cylinderEdgeLength, cylinderCount);
        QWidget::setTabOrder(cylinderCount, cylinderClosed);
        QWidget::setTabOrder(cylinderClosed, coneRadius1);
        QWidget::setTabOrder(coneRadius1, coneRadius2);
        QWidget::setTabOrder(coneRadius2, coneLength);
        QWidget::setTabOrder(coneLength, coneEdgeLength);
        QWidget::setTabOrder(coneEdgeLength, coneCount);
        QWidget::setTabOrder(coneCount, coneClosed);
        QWidget::setTabOrder(coneClosed, sphereRadius);
        QWidget::setTabOrder(sphereRadius, sphereCount);
        QWidget::setTabOrder(sphereCount, ellipsoidRadius1);
        QWidget::setTabOrder(ellipsoidRadius1, ellipsoidRadius2);
        QWidget::setTabOrder(ellipsoidRadius2, ellipsoidCount);
        QWidget::setTabOrder(ellipsoidCount, toroidRadius1);
        QWidget::setTabOrder(toroidRadius1, toroidRadius2);
        QWidget::setTabOrder(toroidRadius2, toroidCount);
        QWidget::setTabOrder(toroidCount, createSolidButton);
        QWidget::setTabOrder(createSolidButton, buttonClose);

        retranslateUi(MeshGui__DlgRegularSolid);
        QObject::connect(comboBox1, SIGNAL(activated(int)), widgetStack2, SLOT(setCurrentIndex(int)));
        QObject::connect(buttonClose, SIGNAL(clicked()), MeshGui__DlgRegularSolid, SLOT(reject()));

        widgetStack2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MeshGui__DlgRegularSolid);
    } // setupUi

    void retranslateUi(QDialog *MeshGui__DlgRegularSolid)
    {
        MeshGui__DlgRegularSolid->setWindowTitle(QApplication::translate("MeshGui::DlgRegularSolid", "Regular Solid", 0, QApplication::UnicodeUTF8));
        createSolidButton->setText(QApplication::translate("MeshGui::DlgRegularSolid", "&Create", 0, QApplication::UnicodeUTF8));
        createSolidButton->setShortcut(QApplication::translate("MeshGui::DlgRegularSolid", "Alt+C", 0, QApplication::UnicodeUTF8));
        buttonClose->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Cl&ose", 0, QApplication::UnicodeUTF8));
        buttonClose->setShortcut(QApplication::translate("MeshGui::DlgRegularSolid", "Alt+O", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("MeshGui::DlgRegularSolid", "Solid:", 0, QApplication::UnicodeUTF8));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("MeshGui::DlgRegularSolid", "Cube", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeshGui::DlgRegularSolid", "Cylinder", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeshGui::DlgRegularSolid", "Cone", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeshGui::DlgRegularSolid", "Sphere", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeshGui::DlgRegularSolid", "Ellipsoid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MeshGui::DlgRegularSolid", "Torus", 0, QApplication::UnicodeUTF8)
        );
        textLabel4->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Height:", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Length:", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Width:", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius:", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Length:", 0, QApplication::UnicodeUTF8));
        cylinderClosed->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Closed", 0, QApplication::UnicodeUTF8));
        textLabel8->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Sampling:", 0, QApplication::UnicodeUTF8));
        textLabel7->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Edge length:", 0, QApplication::UnicodeUTF8));
        textLabel11->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Length:", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius 1:", 0, QApplication::UnicodeUTF8));
        textLabel10->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius 2:", 0, QApplication::UnicodeUTF8));
        textLabel13->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Sampling:", 0, QApplication::UnicodeUTF8));
        coneClosed->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Closed", 0, QApplication::UnicodeUTF8));
        textLabel12->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Edge length:", 0, QApplication::UnicodeUTF8));
        textLabel14->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius:", 0, QApplication::UnicodeUTF8));
        textLabel15->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Sampling:", 0, QApplication::UnicodeUTF8));
        textLabel17->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius 2:", 0, QApplication::UnicodeUTF8));
        textLabel16->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius 1:", 0, QApplication::UnicodeUTF8));
        textLabel18->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Sampling:", 0, QApplication::UnicodeUTF8));
        textLabel20->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius 2:", 0, QApplication::UnicodeUTF8));
        textLabel19->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Radius 1:", 0, QApplication::UnicodeUTF8));
        textLabel21->setText(QApplication::translate("MeshGui::DlgRegularSolid", "Sampling:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class DlgRegularSolid: public Ui_DlgRegularSolid {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_DLGREGULARSOLID_H
