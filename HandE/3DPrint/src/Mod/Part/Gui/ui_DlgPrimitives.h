/********************************************************************************
** Form generated from reading UI file 'DlgPrimitives.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPRIMITIVES_H
#define UI_DLGPRIMITIVES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

namespace PartGui {

class Ui_DlgPrimitives
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QStackedWidget *widgetStack2;
    QWidget *page0_plane;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QDoubleSpinBox *planeLength;
    QLabel *textLabel3_2;
    QLabel *textLabel2_2;
    QDoubleSpinBox *planeWidth;
    QSpacerItem *spacerItem;
    QWidget *Page1_box;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout5;
    QLabel *textLabel4;
    QDoubleSpinBox *boxHeight;
    QDoubleSpinBox *boxLength;
    QLabel *textLabel2;
    QDoubleSpinBox *boxWidth;
    QLabel *textLabel3;
    QWidget *Page2_cylinder;
    QGridLayout *gridLayout6;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QDoubleSpinBox *cylinderAngle;
    QFrame *line_2;
    QSpacerItem *spacerItem2;
    QGridLayout *gridLayout7;
    QLabel *textLabel5;
    QDoubleSpinBox *cylinderRadius;
    QDoubleSpinBox *cylinderHeight;
    QLabel *textLabel6;
    QWidget *Page3_cone;
    QGridLayout *gridLayout8;
    QHBoxLayout *hboxLayout1;
    QLabel *label_4;
    QDoubleSpinBox *coneAngle;
    QFrame *line_3;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout9;
    QLabel *textLabel11;
    QDoubleSpinBox *coneRadius2;
    QDoubleSpinBox *coneHeight;
    QDoubleSpinBox *coneRadius1;
    QLabel *textLabel9;
    QLabel *textLabel10;
    QWidget *Page4_sphere;
    QGridLayout *gridLayout10;
    QFrame *line;
    QGridLayout *gridLayout11;
    QLabel *label_3;
    QSpacerItem *spacerItem4;
    QDoubleSpinBox *sphereAngle1;
    QLabel *label_2;
    QDoubleSpinBox *sphereAngle2;
    QDoubleSpinBox *sphereAngle3;
    QSpacerItem *spacerItem5;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel14;
    QDoubleSpinBox *sphereRadius;
    QWidget *Page5_ellipsoid;
    QGridLayout *gridLayout12;
    QSpacerItem *spacerItem6;
    QFrame *line_5;
    QGridLayout *gridLayout13;
    QDoubleSpinBox *ellipsoidRadius2;
    QDoubleSpinBox *ellipsoidRadius1;
    QLabel *textLabel21;
    QLabel *textLabel22;
    QGridLayout *gridLayout14;
    QLabel *label23;
    QSpacerItem *spacerItem7;
    QDoubleSpinBox *ellipsoidAngle1;
    QLabel *label24;
    QDoubleSpinBox *ellipsoidAngle2;
    QDoubleSpinBox *ellipsoidAngle3;
    QWidget *Page6_torus;
    QGridLayout *gridLayout15;
    QFrame *line_4;
    QGridLayout *gridLayout16;
    QLabel *label_5;
    QSpacerItem *spacerItem8;
    QDoubleSpinBox *torusAngle1;
    QLabel *label_6;
    QDoubleSpinBox *torusAngle2;
    QDoubleSpinBox *torusAngle3;
    QSpacerItem *spacerItem9;
    QGridLayout *gridLayout17;
    QLabel *textLabel20;
    QLabel *textLabel19;
    QDoubleSpinBox *torusRadius2;
    QDoubleSpinBox *torusRadius1;
    QWidget *page7_wedge;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QDoubleSpinBox *wedgeXmin;
    QDoubleSpinBox *wedgeXmax;
    QLabel *label_11;
    QDoubleSpinBox *wedgeYmin;
    QDoubleSpinBox *wedgeYmax;
    QLabel *label_12;
    QDoubleSpinBox *wedgeZmin;
    QDoubleSpinBox *wedgeZmax;
    QLabel *label_13;
    QDoubleSpinBox *wedgeX2min;
    QDoubleSpinBox *wedgeX2max;
    QLabel *label_14;
    QDoubleSpinBox *wedgeZ2min;
    QDoubleSpinBox *wedgeZ2max;
    QSpacerItem *verticalSpacer_2;
    QWidget *page8_helix;
    QGridLayout *gridLayout18;
    QSpacerItem *spacerItem10;
    QGridLayout *gridLayout19;
    QLabel *label_9;
    QLabel *label_7;
    QDoubleSpinBox *helixRadius;
    QDoubleSpinBox *helixPitch;
    QDoubleSpinBox *helixHeight;
    QLabel *label_8;
    QLabel *label_20;
    QDoubleSpinBox *helixAngle;
    QLabel *label_15;
    QComboBox *helixLocalCS;
    QWidget *page9_circle;
    QGridLayout *gridLayout_3;
    QGridLayout *circleParameters;
    QLabel *Radius;
    QDoubleSpinBox *circleRadius;
    QLabel *Angle0;
    QDoubleSpinBox *circleAngle0;
    QLabel *Angle1;
    QDoubleSpinBox *circleAngle1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonCircleFromThreePoints;
    QSpacerItem *verticalSpacer;
    QWidget *page;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QLabel *labelEllMajorRadius;
    QDoubleSpinBox *ellipseMajorRadius;
    QLabel *labelEllMinorRadius;
    QDoubleSpinBox *ellipseMinorRadius;
    QLabel *labelEllAngle1;
    QDoubleSpinBox *ellipseAngle0;
    QLabel *labelEllAngle2;
    QDoubleSpinBox *ellipseAngle1;
    QSpacerItem *verticalSpacer_5;
    QWidget *page10_vertex;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *vertexX;
    QDoubleSpinBox *vertexY;
    QDoubleSpinBox *vertexZ;
    QLabel *label_X_Axis;
    QLabel *label_Y_Axis;
    QLabel *label_Z_Axis;
    QSpacerItem *verticalSpacer_3;
    QWidget *page11_edge;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLabel *X1;
    QLabel *Y1;
    QLabel *Z1;
    QFrame *line_6;
    QLabel *Finish_Vertex;
    QLabel *Start_Vertex;
    QLabel *X2;
    QLabel *Y2;
    QLabel *Z2;
    QDoubleSpinBox *edgeX1;
    QDoubleSpinBox *edgeY1;
    QDoubleSpinBox *edgeZ1;
    QDoubleSpinBox *edgeX2;
    QDoubleSpinBox *edgeY2;
    QDoubleSpinBox *edgeZ2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *PartGui__DlgPrimitives)
    {
        if (PartGui__DlgPrimitives->objectName().isEmpty())
            PartGui__DlgPrimitives->setObjectName(QString::fromUtf8("PartGui__DlgPrimitives"));
        PartGui__DlgPrimitives->resize(260, 370);
        PartGui__DlgPrimitives->setProperty("sizeGripEnabled", QVariant(true));
        gridLayout = new QGridLayout(PartGui__DlgPrimitives);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox1 = new QComboBox(PartGui__DlgPrimitives);
        comboBox1->setObjectName(QString::fromUtf8("comboBox1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox1->sizePolicy().hasHeightForWidth());
        comboBox1->setSizePolicy(sizePolicy);
        comboBox1->setMaxVisibleItems(14);

        gridLayout->addWidget(comboBox1, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(PartGui__DlgPrimitives);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        widgetStack2 = new QStackedWidget(groupBox_2);
        widgetStack2->setObjectName(QString::fromUtf8("widgetStack2"));
        page0_plane = new QWidget();
        page0_plane->setObjectName(QString::fromUtf8("page0_plane"));
        gridLayout2 = new QGridLayout(page0_plane);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        planeLength = new QDoubleSpinBox(page0_plane);
        planeLength->setObjectName(QString::fromUtf8("planeLength"));
        planeLength->setMinimum(0);
        planeLength->setMaximum(1000);
        planeLength->setValue(10);

        gridLayout3->addWidget(planeLength, 0, 1, 1, 1);

        textLabel3_2 = new QLabel(page0_plane);
        textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));

        gridLayout3->addWidget(textLabel3_2, 1, 0, 1, 1);

        textLabel2_2 = new QLabel(page0_plane);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout3->addWidget(textLabel2_2, 0, 0, 1, 1);

        planeWidth = new QDoubleSpinBox(page0_plane);
        planeWidth->setObjectName(QString::fromUtf8("planeWidth"));
        planeWidth->setMaximum(1000);
        planeWidth->setValue(10);

        gridLayout3->addWidget(planeWidth, 1, 1, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem, 1, 0, 1, 1);

        widgetStack2->addWidget(page0_plane);
        Page1_box = new QWidget();
        Page1_box->setObjectName(QString::fromUtf8("Page1_box"));
        gridLayout4 = new QGridLayout(Page1_box);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        spacerItem1 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem1, 1, 0, 1, 1);

        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        textLabel4 = new QLabel(Page1_box);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        gridLayout5->addWidget(textLabel4, 2, 0, 1, 1);

        boxHeight = new QDoubleSpinBox(Page1_box);
        boxHeight->setObjectName(QString::fromUtf8("boxHeight"));
        boxHeight->setMaximum(1000);
        boxHeight->setValue(10);

        gridLayout5->addWidget(boxHeight, 2, 1, 1, 1);

        boxLength = new QDoubleSpinBox(Page1_box);
        boxLength->setObjectName(QString::fromUtf8("boxLength"));
        boxLength->setMinimum(0);
        boxLength->setMaximum(1000);
        boxLength->setValue(10);

        gridLayout5->addWidget(boxLength, 0, 1, 1, 1);

        textLabel2 = new QLabel(Page1_box);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout5->addWidget(textLabel2, 0, 0, 1, 1);

        boxWidth = new QDoubleSpinBox(Page1_box);
        boxWidth->setObjectName(QString::fromUtf8("boxWidth"));
        boxWidth->setMaximum(1000);
        boxWidth->setValue(10);

        gridLayout5->addWidget(boxWidth, 1, 1, 1, 1);

        textLabel3 = new QLabel(Page1_box);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout5->addWidget(textLabel3, 1, 0, 1, 1);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);

        widgetStack2->addWidget(Page1_box);
        Page2_cylinder = new QWidget();
        Page2_cylinder->setObjectName(QString::fromUtf8("Page2_cylinder"));
        gridLayout6 = new QGridLayout(Page2_cylinder);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(9, 9, 9, 9);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(Page2_cylinder);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        cylinderAngle = new QDoubleSpinBox(Page2_cylinder);
        cylinderAngle->setObjectName(QString::fromUtf8("cylinderAngle"));
        cylinderAngle->setMaximum(360);
        cylinderAngle->setValue(360);

        hboxLayout->addWidget(cylinderAngle);


        gridLayout6->addLayout(hboxLayout, 2, 0, 1, 1);

        line_2 = new QFrame(Page2_cylinder);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout6->addWidget(line_2, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(31, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout6->addItem(spacerItem2, 3, 0, 1, 1);

        gridLayout7 = new QGridLayout();
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(0, 0, 0, 0);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        textLabel5 = new QLabel(Page2_cylinder);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout7->addWidget(textLabel5, 0, 0, 1, 1);

        cylinderRadius = new QDoubleSpinBox(Page2_cylinder);
        cylinderRadius->setObjectName(QString::fromUtf8("cylinderRadius"));
        cylinderRadius->setMaximum(1000);
        cylinderRadius->setValue(2);

        gridLayout7->addWidget(cylinderRadius, 0, 1, 1, 1);

        cylinderHeight = new QDoubleSpinBox(Page2_cylinder);
        cylinderHeight->setObjectName(QString::fromUtf8("cylinderHeight"));
        cylinderHeight->setMaximum(1000);
        cylinderHeight->setValue(10);

        gridLayout7->addWidget(cylinderHeight, 1, 1, 1, 1);

        textLabel6 = new QLabel(Page2_cylinder);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

        gridLayout7->addWidget(textLabel6, 1, 0, 1, 1);


        gridLayout6->addLayout(gridLayout7, 0, 0, 1, 1);

        widgetStack2->addWidget(Page2_cylinder);
        Page3_cone = new QWidget();
        Page3_cone->setObjectName(QString::fromUtf8("Page3_cone"));
        gridLayout8 = new QGridLayout(Page3_cone);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(9, 9, 9, 9);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_4 = new QLabel(Page3_cone);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout1->addWidget(label_4);

        coneAngle = new QDoubleSpinBox(Page3_cone);
        coneAngle->setObjectName(QString::fromUtf8("coneAngle"));
        coneAngle->setMaximum(360);
        coneAngle->setValue(360);

        hboxLayout1->addWidget(coneAngle);


        gridLayout8->addLayout(hboxLayout1, 2, 0, 1, 1);

        line_3 = new QFrame(Page3_cone);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout8->addWidget(line_3, 1, 0, 1, 1);

        spacerItem3 = new QSpacerItem(31, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout8->addItem(spacerItem3, 3, 0, 1, 1);

        gridLayout9 = new QGridLayout();
        gridLayout9->setSpacing(6);
        gridLayout9->setContentsMargins(0, 0, 0, 0);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        textLabel11 = new QLabel(Page3_cone);
        textLabel11->setObjectName(QString::fromUtf8("textLabel11"));

        gridLayout9->addWidget(textLabel11, 2, 0, 2, 1);

        coneRadius2 = new QDoubleSpinBox(Page3_cone);
        coneRadius2->setObjectName(QString::fromUtf8("coneRadius2"));
        coneRadius2->setMaximum(1000);
        coneRadius2->setValue(4);

        gridLayout9->addWidget(coneRadius2, 1, 1, 2, 1);

        coneHeight = new QDoubleSpinBox(Page3_cone);
        coneHeight->setObjectName(QString::fromUtf8("coneHeight"));
        coneHeight->setMaximum(1000);
        coneHeight->setValue(10);

        gridLayout9->addWidget(coneHeight, 3, 1, 1, 1);

        coneRadius1 = new QDoubleSpinBox(Page3_cone);
        coneRadius1->setObjectName(QString::fromUtf8("coneRadius1"));
        coneRadius1->setMaximum(1000);
        coneRadius1->setValue(2);

        gridLayout9->addWidget(coneRadius1, 0, 1, 1, 1);

        textLabel9 = new QLabel(Page3_cone);
        textLabel9->setObjectName(QString::fromUtf8("textLabel9"));

        gridLayout9->addWidget(textLabel9, 0, 0, 1, 1);

        textLabel10 = new QLabel(Page3_cone);
        textLabel10->setObjectName(QString::fromUtf8("textLabel10"));

        gridLayout9->addWidget(textLabel10, 1, 0, 1, 1);


        gridLayout8->addLayout(gridLayout9, 0, 0, 1, 1);

        widgetStack2->addWidget(Page3_cone);
        Page4_sphere = new QWidget();
        Page4_sphere->setObjectName(QString::fromUtf8("Page4_sphere"));
        gridLayout10 = new QGridLayout(Page4_sphere);
        gridLayout10->setSpacing(6);
        gridLayout10->setContentsMargins(9, 9, 9, 9);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        line = new QFrame(Page4_sphere);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout10->addWidget(line, 1, 0, 1, 1);

        gridLayout11 = new QGridLayout();
        gridLayout11->setSpacing(6);
        gridLayout11->setContentsMargins(0, 0, 0, 0);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        label_3 = new QLabel(Page4_sphere);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout11->addWidget(label_3, 0, 0, 1, 1);

        spacerItem4 = new QSpacerItem(81, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout11->addItem(spacerItem4, 2, 0, 1, 1);

        sphereAngle1 = new QDoubleSpinBox(Page4_sphere);
        sphereAngle1->setObjectName(QString::fromUtf8("sphereAngle1"));
        sphereAngle1->setMinimum(-90);
        sphereAngle1->setMaximum(90);
        sphereAngle1->setValue(-90);

        gridLayout11->addWidget(sphereAngle1, 1, 1, 1, 1);

        label_2 = new QLabel(Page4_sphere);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout11->addWidget(label_2, 1, 0, 1, 1);

        sphereAngle2 = new QDoubleSpinBox(Page4_sphere);
        sphereAngle2->setObjectName(QString::fromUtf8("sphereAngle2"));
        sphereAngle2->setMinimum(-90);
        sphereAngle2->setMaximum(90);
        sphereAngle2->setValue(90);

        gridLayout11->addWidget(sphereAngle2, 2, 1, 1, 1);

        sphereAngle3 = new QDoubleSpinBox(Page4_sphere);
        sphereAngle3->setObjectName(QString::fromUtf8("sphereAngle3"));
        sphereAngle3->setMaximum(360);
        sphereAngle3->setValue(360);

        gridLayout11->addWidget(sphereAngle3, 0, 1, 1, 1);


        gridLayout10->addLayout(gridLayout11, 2, 0, 1, 1);

        spacerItem5 = new QSpacerItem(21, 151, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout10->addItem(spacerItem5, 3, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        textLabel14 = new QLabel(Page4_sphere);
        textLabel14->setObjectName(QString::fromUtf8("textLabel14"));

        hboxLayout2->addWidget(textLabel14);

        sphereRadius = new QDoubleSpinBox(Page4_sphere);
        sphereRadius->setObjectName(QString::fromUtf8("sphereRadius"));
        sphereRadius->setMaximum(1000);
        sphereRadius->setValue(5);

        hboxLayout2->addWidget(sphereRadius);


        gridLayout10->addLayout(hboxLayout2, 0, 0, 1, 1);

        widgetStack2->addWidget(Page4_sphere);
        Page5_ellipsoid = new QWidget();
        Page5_ellipsoid->setObjectName(QString::fromUtf8("Page5_ellipsoid"));
        gridLayout12 = new QGridLayout(Page5_ellipsoid);
        gridLayout12->setSpacing(6);
        gridLayout12->setContentsMargins(9, 9, 9, 9);
        gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
        spacerItem6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout12->addItem(spacerItem6, 3, 0, 1, 1);

        line_5 = new QFrame(Page5_ellipsoid);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout12->addWidget(line_5, 1, 0, 1, 1);

        gridLayout13 = new QGridLayout();
        gridLayout13->setSpacing(6);
        gridLayout13->setContentsMargins(0, 0, 0, 0);
        gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
        ellipsoidRadius2 = new QDoubleSpinBox(Page5_ellipsoid);
        ellipsoidRadius2->setObjectName(QString::fromUtf8("ellipsoidRadius2"));
        ellipsoidRadius2->setMaximum(1000);
        ellipsoidRadius2->setValue(4);

        gridLayout13->addWidget(ellipsoidRadius2, 1, 1, 1, 1);

        ellipsoidRadius1 = new QDoubleSpinBox(Page5_ellipsoid);
        ellipsoidRadius1->setObjectName(QString::fromUtf8("ellipsoidRadius1"));
        ellipsoidRadius1->setMaximum(1000);
        ellipsoidRadius1->setValue(2);

        gridLayout13->addWidget(ellipsoidRadius1, 0, 1, 1, 1);

        textLabel21 = new QLabel(Page5_ellipsoid);
        textLabel21->setObjectName(QString::fromUtf8("textLabel21"));

        gridLayout13->addWidget(textLabel21, 0, 0, 1, 1);

        textLabel22 = new QLabel(Page5_ellipsoid);
        textLabel22->setObjectName(QString::fromUtf8("textLabel22"));

        gridLayout13->addWidget(textLabel22, 1, 0, 1, 1);


        gridLayout12->addLayout(gridLayout13, 0, 0, 1, 1);

        gridLayout14 = new QGridLayout();
        gridLayout14->setSpacing(6);
        gridLayout14->setContentsMargins(0, 0, 0, 0);
        gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
        label23 = new QLabel(Page5_ellipsoid);
        label23->setObjectName(QString::fromUtf8("label23"));

        gridLayout14->addWidget(label23, 0, 0, 1, 1);

        spacerItem7 = new QSpacerItem(81, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout14->addItem(spacerItem7, 2, 0, 1, 1);

        ellipsoidAngle1 = new QDoubleSpinBox(Page5_ellipsoid);
        ellipsoidAngle1->setObjectName(QString::fromUtf8("ellipsoidAngle1"));
        ellipsoidAngle1->setMinimum(-90);
        ellipsoidAngle1->setMaximum(90);
        ellipsoidAngle1->setValue(-90);

        gridLayout14->addWidget(ellipsoidAngle1, 1, 1, 1, 1);

        label24 = new QLabel(Page5_ellipsoid);
        label24->setObjectName(QString::fromUtf8("label24"));

        gridLayout14->addWidget(label24, 1, 0, 1, 1);

        ellipsoidAngle2 = new QDoubleSpinBox(Page5_ellipsoid);
        ellipsoidAngle2->setObjectName(QString::fromUtf8("ellipsoidAngle2"));
        ellipsoidAngle2->setMinimum(-90);
        ellipsoidAngle2->setMaximum(90);
        ellipsoidAngle2->setValue(90);

        gridLayout14->addWidget(ellipsoidAngle2, 2, 1, 1, 1);

        ellipsoidAngle3 = new QDoubleSpinBox(Page5_ellipsoid);
        ellipsoidAngle3->setObjectName(QString::fromUtf8("ellipsoidAngle3"));
        ellipsoidAngle3->setMaximum(360);
        ellipsoidAngle3->setValue(360);

        gridLayout14->addWidget(ellipsoidAngle3, 0, 1, 1, 1);


        gridLayout12->addLayout(gridLayout14, 2, 0, 1, 1);

        widgetStack2->addWidget(Page5_ellipsoid);
        Page6_torus = new QWidget();
        Page6_torus->setObjectName(QString::fromUtf8("Page6_torus"));
        gridLayout15 = new QGridLayout(Page6_torus);
        gridLayout15->setSpacing(6);
        gridLayout15->setContentsMargins(9, 9, 9, 9);
        gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
        line_4 = new QFrame(Page6_torus);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout15->addWidget(line_4, 1, 0, 1, 1);

        gridLayout16 = new QGridLayout();
        gridLayout16->setSpacing(6);
        gridLayout16->setContentsMargins(0, 0, 0, 0);
        gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
        label_5 = new QLabel(Page6_torus);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout16->addWidget(label_5, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(81, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout16->addItem(spacerItem8, 2, 0, 1, 1);

        torusAngle1 = new QDoubleSpinBox(Page6_torus);
        torusAngle1->setObjectName(QString::fromUtf8("torusAngle1"));
        torusAngle1->setMinimum(-180);
        torusAngle1->setMaximum(180);
        torusAngle1->setValue(-180);

        gridLayout16->addWidget(torusAngle1, 1, 1, 1, 1);

        label_6 = new QLabel(Page6_torus);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout16->addWidget(label_6, 1, 0, 1, 1);

        torusAngle2 = new QDoubleSpinBox(Page6_torus);
        torusAngle2->setObjectName(QString::fromUtf8("torusAngle2"));
        torusAngle2->setMinimum(-180);
        torusAngle2->setMaximum(180);
        torusAngle2->setValue(180);

        gridLayout16->addWidget(torusAngle2, 2, 1, 1, 1);

        torusAngle3 = new QDoubleSpinBox(Page6_torus);
        torusAngle3->setObjectName(QString::fromUtf8("torusAngle3"));
        torusAngle3->setMaximum(360);
        torusAngle3->setValue(360);

        gridLayout16->addWidget(torusAngle3, 0, 1, 1, 1);


        gridLayout15->addLayout(gridLayout16, 2, 0, 1, 1);

        spacerItem9 = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout15->addItem(spacerItem9, 3, 0, 1, 1);

        gridLayout17 = new QGridLayout();
        gridLayout17->setSpacing(6);
        gridLayout17->setContentsMargins(0, 0, 0, 0);
        gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
        textLabel20 = new QLabel(Page6_torus);
        textLabel20->setObjectName(QString::fromUtf8("textLabel20"));

        gridLayout17->addWidget(textLabel20, 1, 0, 1, 1);

        textLabel19 = new QLabel(Page6_torus);
        textLabel19->setObjectName(QString::fromUtf8("textLabel19"));

        gridLayout17->addWidget(textLabel19, 0, 0, 1, 1);

        torusRadius2 = new QDoubleSpinBox(Page6_torus);
        torusRadius2->setObjectName(QString::fromUtf8("torusRadius2"));
        torusRadius2->setMaximum(1000);
        torusRadius2->setValue(2);

        gridLayout17->addWidget(torusRadius2, 1, 1, 1, 1);

        torusRadius1 = new QDoubleSpinBox(Page6_torus);
        torusRadius1->setObjectName(QString::fromUtf8("torusRadius1"));
        torusRadius1->setMaximum(1000);
        torusRadius1->setValue(10);

        gridLayout17->addWidget(torusRadius1, 0, 1, 1, 1);


        gridLayout15->addLayout(gridLayout17, 0, 0, 1, 1);

        widgetStack2->addWidget(Page6_torus);
        page7_wedge = new QWidget();
        page7_wedge->setObjectName(QString::fromUtf8("page7_wedge"));
        gridLayout_8 = new QGridLayout(page7_wedge);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(page7_wedge);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        wedgeXmin = new QDoubleSpinBox(page7_wedge);
        wedgeXmin->setObjectName(QString::fromUtf8("wedgeXmin"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wedgeXmin->sizePolicy().hasHeightForWidth());
        wedgeXmin->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(wedgeXmin, 0, 1, 1, 1);

        wedgeXmax = new QDoubleSpinBox(page7_wedge);
        wedgeXmax->setObjectName(QString::fromUtf8("wedgeXmax"));
        sizePolicy1.setHeightForWidth(wedgeXmax->sizePolicy().hasHeightForWidth());
        wedgeXmax->setSizePolicy(sizePolicy1);
        wedgeXmax->setValue(10);

        gridLayout_2->addWidget(wedgeXmax, 0, 2, 1, 1);

        label_11 = new QLabel(page7_wedge);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        wedgeYmin = new QDoubleSpinBox(page7_wedge);
        wedgeYmin->setObjectName(QString::fromUtf8("wedgeYmin"));
        sizePolicy1.setHeightForWidth(wedgeYmin->sizePolicy().hasHeightForWidth());
        wedgeYmin->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(wedgeYmin, 1, 1, 1, 1);

        wedgeYmax = new QDoubleSpinBox(page7_wedge);
        wedgeYmax->setObjectName(QString::fromUtf8("wedgeYmax"));
        sizePolicy1.setHeightForWidth(wedgeYmax->sizePolicy().hasHeightForWidth());
        wedgeYmax->setSizePolicy(sizePolicy1);
        wedgeYmax->setValue(10);

        gridLayout_2->addWidget(wedgeYmax, 1, 2, 1, 1);

        label_12 = new QLabel(page7_wedge);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        wedgeZmin = new QDoubleSpinBox(page7_wedge);
        wedgeZmin->setObjectName(QString::fromUtf8("wedgeZmin"));
        sizePolicy1.setHeightForWidth(wedgeZmin->sizePolicy().hasHeightForWidth());
        wedgeZmin->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(wedgeZmin, 2, 1, 1, 1);

        wedgeZmax = new QDoubleSpinBox(page7_wedge);
        wedgeZmax->setObjectName(QString::fromUtf8("wedgeZmax"));
        sizePolicy1.setHeightForWidth(wedgeZmax->sizePolicy().hasHeightForWidth());
        wedgeZmax->setSizePolicy(sizePolicy1);
        wedgeZmax->setValue(10);

        gridLayout_2->addWidget(wedgeZmax, 2, 2, 1, 1);

        label_13 = new QLabel(page7_wedge);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        wedgeX2min = new QDoubleSpinBox(page7_wedge);
        wedgeX2min->setObjectName(QString::fromUtf8("wedgeX2min"));
        sizePolicy1.setHeightForWidth(wedgeX2min->sizePolicy().hasHeightForWidth());
        wedgeX2min->setSizePolicy(sizePolicy1);
        wedgeX2min->setValue(2);

        gridLayout_2->addWidget(wedgeX2min, 3, 1, 1, 1);

        wedgeX2max = new QDoubleSpinBox(page7_wedge);
        wedgeX2max->setObjectName(QString::fromUtf8("wedgeX2max"));
        sizePolicy1.setHeightForWidth(wedgeX2max->sizePolicy().hasHeightForWidth());
        wedgeX2max->setSizePolicy(sizePolicy1);
        wedgeX2max->setValue(8);

        gridLayout_2->addWidget(wedgeX2max, 3, 2, 1, 1);

        label_14 = new QLabel(page7_wedge);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        wedgeZ2min = new QDoubleSpinBox(page7_wedge);
        wedgeZ2min->setObjectName(QString::fromUtf8("wedgeZ2min"));
        sizePolicy1.setHeightForWidth(wedgeZ2min->sizePolicy().hasHeightForWidth());
        wedgeZ2min->setSizePolicy(sizePolicy1);
        wedgeZ2min->setValue(2);

        gridLayout_2->addWidget(wedgeZ2min, 4, 1, 1, 1);

        wedgeZ2max = new QDoubleSpinBox(page7_wedge);
        wedgeZ2max->setObjectName(QString::fromUtf8("wedgeZ2max"));
        sizePolicy1.setHeightForWidth(wedgeZ2max->sizePolicy().hasHeightForWidth());
        wedgeZ2max->setSizePolicy(sizePolicy1);
        wedgeZ2max->setValue(8);

        gridLayout_2->addWidget(wedgeZ2max, 4, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 1, 0, 1, 1);

        widgetStack2->addWidget(page7_wedge);
        page8_helix = new QWidget();
        page8_helix->setObjectName(QString::fromUtf8("page8_helix"));
        gridLayout18 = new QGridLayout(page8_helix);
        gridLayout18->setSpacing(6);
        gridLayout18->setContentsMargins(9, 9, 9, 9);
        gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout18->addItem(spacerItem10, 1, 0, 1, 1);

        gridLayout19 = new QGridLayout();
        gridLayout19->setSpacing(6);
        gridLayout19->setContentsMargins(0, 0, 0, 0);
        gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
        label_9 = new QLabel(page8_helix);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout19->addWidget(label_9, 2, 0, 1, 1);

        label_7 = new QLabel(page8_helix);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout19->addWidget(label_7, 0, 0, 1, 1);

        helixRadius = new QDoubleSpinBox(page8_helix);
        helixRadius->setObjectName(QString::fromUtf8("helixRadius"));
        helixRadius->setMaximum(1000);
        helixRadius->setValue(1);

        gridLayout19->addWidget(helixRadius, 2, 1, 1, 1);

        helixPitch = new QDoubleSpinBox(page8_helix);
        helixPitch->setObjectName(QString::fromUtf8("helixPitch"));
        helixPitch->setMaximum(1000);
        helixPitch->setValue(1);

        gridLayout19->addWidget(helixPitch, 0, 1, 1, 1);

        helixHeight = new QDoubleSpinBox(page8_helix);
        helixHeight->setObjectName(QString::fromUtf8("helixHeight"));
        helixHeight->setMaximum(1000);
        helixHeight->setValue(2);

        gridLayout19->addWidget(helixHeight, 1, 1, 1, 1);

        label_8 = new QLabel(page8_helix);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout19->addWidget(label_8, 1, 0, 1, 1);

        label_20 = new QLabel(page8_helix);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout19->addWidget(label_20, 3, 0, 1, 1);

        helixAngle = new QDoubleSpinBox(page8_helix);
        helixAngle->setObjectName(QString::fromUtf8("helixAngle"));
        helixAngle->setMinimum(0);
        helixAngle->setMaximum(89.99);
        helixAngle->setSingleStep(1);
        helixAngle->setValue(0);

        gridLayout19->addWidget(helixAngle, 3, 1, 1, 1);

        label_15 = new QLabel(page8_helix);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout19->addWidget(label_15, 4, 0, 1, 1);

        helixLocalCS = new QComboBox(page8_helix);
        helixLocalCS->setObjectName(QString::fromUtf8("helixLocalCS"));

        gridLayout19->addWidget(helixLocalCS, 4, 1, 1, 1);


        gridLayout18->addLayout(gridLayout19, 0, 0, 1, 1);

        widgetStack2->addWidget(page8_helix);
        page9_circle = new QWidget();
        page9_circle->setObjectName(QString::fromUtf8("page9_circle"));
        gridLayout_3 = new QGridLayout(page9_circle);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        circleParameters = new QGridLayout();
        circleParameters->setSpacing(6);
        circleParameters->setContentsMargins(0, 0, 0, 0);
        circleParameters->setObjectName(QString::fromUtf8("circleParameters"));
        Radius = new QLabel(page9_circle);
        Radius->setObjectName(QString::fromUtf8("Radius"));

        circleParameters->addWidget(Radius, 0, 0, 1, 1);

        circleRadius = new QDoubleSpinBox(page9_circle);
        circleRadius->setObjectName(QString::fromUtf8("circleRadius"));
        circleRadius->setMaximum(1e+09);
        circleRadius->setValue(2);

        circleParameters->addWidget(circleRadius, 0, 1, 1, 1);

        Angle0 = new QLabel(page9_circle);
        Angle0->setObjectName(QString::fromUtf8("Angle0"));

        circleParameters->addWidget(Angle0, 1, 0, 1, 1);

        circleAngle0 = new QDoubleSpinBox(page9_circle);
        circleAngle0->setObjectName(QString::fromUtf8("circleAngle0"));
        circleAngle0->setMaximum(360);
        circleAngle0->setValue(0);

        circleParameters->addWidget(circleAngle0, 1, 1, 1, 1);

        Angle1 = new QLabel(page9_circle);
        Angle1->setObjectName(QString::fromUtf8("Angle1"));

        circleParameters->addWidget(Angle1, 2, 0, 1, 1);

        circleAngle1 = new QDoubleSpinBox(page9_circle);
        circleAngle1->setObjectName(QString::fromUtf8("circleAngle1"));
        circleAngle1->setMinimum(0);
        circleAngle1->setMaximum(360);
        circleAngle1->setSingleStep(1);
        circleAngle1->setValue(360);

        circleParameters->addWidget(circleAngle1, 2, 1, 1, 1);


        gridLayout_3->addLayout(circleParameters, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonCircleFromThreePoints = new QPushButton(page9_circle);
        buttonCircleFromThreePoints->setObjectName(QString::fromUtf8("buttonCircleFromThreePoints"));

        horizontalLayout->addWidget(buttonCircleFromThreePoints);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 95, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        widgetStack2->addWidget(page9_circle);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_11 = new QGridLayout(page);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        labelEllMajorRadius = new QLabel(page);
        labelEllMajorRadius->setObjectName(QString::fromUtf8("labelEllMajorRadius"));

        gridLayout_10->addWidget(labelEllMajorRadius, 0, 0, 1, 1);

        ellipseMajorRadius = new QDoubleSpinBox(page);
        ellipseMajorRadius->setObjectName(QString::fromUtf8("ellipseMajorRadius"));
        ellipseMajorRadius->setMaximum(1e+09);
        ellipseMajorRadius->setValue(4);

        gridLayout_10->addWidget(ellipseMajorRadius, 0, 1, 1, 1);

        labelEllMinorRadius = new QLabel(page);
        labelEllMinorRadius->setObjectName(QString::fromUtf8("labelEllMinorRadius"));

        gridLayout_10->addWidget(labelEllMinorRadius, 1, 0, 1, 1);

        ellipseMinorRadius = new QDoubleSpinBox(page);
        ellipseMinorRadius->setObjectName(QString::fromUtf8("ellipseMinorRadius"));
        ellipseMinorRadius->setMaximum(1e+09);
        ellipseMinorRadius->setValue(2);

        gridLayout_10->addWidget(ellipseMinorRadius, 1, 1, 1, 1);

        labelEllAngle1 = new QLabel(page);
        labelEllAngle1->setObjectName(QString::fromUtf8("labelEllAngle1"));

        gridLayout_10->addWidget(labelEllAngle1, 2, 0, 1, 1);

        ellipseAngle0 = new QDoubleSpinBox(page);
        ellipseAngle0->setObjectName(QString::fromUtf8("ellipseAngle0"));
        ellipseAngle0->setMaximum(360);
        ellipseAngle0->setValue(0);

        gridLayout_10->addWidget(ellipseAngle0, 2, 1, 1, 1);

        labelEllAngle2 = new QLabel(page);
        labelEllAngle2->setObjectName(QString::fromUtf8("labelEllAngle2"));

        gridLayout_10->addWidget(labelEllAngle2, 3, 0, 1, 1);

        ellipseAngle1 = new QDoubleSpinBox(page);
        ellipseAngle1->setObjectName(QString::fromUtf8("ellipseAngle1"));
        ellipseAngle1->setMinimum(0);
        ellipseAngle1->setMaximum(360);
        ellipseAngle1->setSingleStep(1);
        ellipseAngle1->setValue(360);

        gridLayout_10->addWidget(ellipseAngle1, 3, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_5, 1, 0, 1, 1);

        widgetStack2->addWidget(page);
        page10_vertex = new QWidget();
        page10_vertex->setObjectName(QString::fromUtf8("page10_vertex"));
        gridLayout_9 = new QGridLayout(page10_vertex);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        vertexX = new QDoubleSpinBox(page10_vertex);
        vertexX->setObjectName(QString::fromUtf8("vertexX"));

        gridLayout_4->addWidget(vertexX, 0, 1, 1, 1);

        vertexY = new QDoubleSpinBox(page10_vertex);
        vertexY->setObjectName(QString::fromUtf8("vertexY"));

        gridLayout_4->addWidget(vertexY, 1, 1, 1, 1);

        vertexZ = new QDoubleSpinBox(page10_vertex);
        vertexZ->setObjectName(QString::fromUtf8("vertexZ"));

        gridLayout_4->addWidget(vertexZ, 2, 1, 1, 1);

        label_X_Axis = new QLabel(page10_vertex);
        label_X_Axis->setObjectName(QString::fromUtf8("label_X_Axis"));
        label_X_Axis->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_X_Axis, 0, 0, 1, 1);

        label_Y_Axis = new QLabel(page10_vertex);
        label_Y_Axis->setObjectName(QString::fromUtf8("label_Y_Axis"));
        label_Y_Axis->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_Y_Axis, 1, 0, 1, 1);

        label_Z_Axis = new QLabel(page10_vertex);
        label_Z_Axis->setObjectName(QString::fromUtf8("label_Z_Axis"));
        label_Z_Axis->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_Z_Axis, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 139, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 1, 0, 1, 1);

        widgetStack2->addWidget(page10_vertex);
        page11_edge = new QWidget();
        page11_edge->setObjectName(QString::fromUtf8("page11_edge"));
        gridLayout_6 = new QGridLayout(page11_edge);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        X1 = new QLabel(page11_edge);
        X1->setObjectName(QString::fromUtf8("X1"));
        X1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(X1, 1, 0, 1, 1);

        Y1 = new QLabel(page11_edge);
        Y1->setObjectName(QString::fromUtf8("Y1"));
        Y1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(Y1, 2, 0, 1, 1);

        Z1 = new QLabel(page11_edge);
        Z1->setObjectName(QString::fromUtf8("Z1"));
        Z1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(Z1, 3, 0, 1, 1);

        line_6 = new QFrame(page11_edge);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_6, 4, 0, 1, 1);

        Finish_Vertex = new QLabel(page11_edge);
        Finish_Vertex->setObjectName(QString::fromUtf8("Finish_Vertex"));
        Finish_Vertex->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(Finish_Vertex, 5, 0, 1, 1);

        Start_Vertex = new QLabel(page11_edge);
        Start_Vertex->setObjectName(QString::fromUtf8("Start_Vertex"));

        gridLayout_5->addWidget(Start_Vertex, 0, 0, 1, 1);

        X2 = new QLabel(page11_edge);
        X2->setObjectName(QString::fromUtf8("X2"));
        X2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(X2, 6, 0, 1, 1);

        Y2 = new QLabel(page11_edge);
        Y2->setObjectName(QString::fromUtf8("Y2"));
        Y2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(Y2, 7, 0, 1, 1);

        Z2 = new QLabel(page11_edge);
        Z2->setObjectName(QString::fromUtf8("Z2"));
        Z2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_5->addWidget(Z2, 8, 0, 1, 1);

        edgeX1 = new QDoubleSpinBox(page11_edge);
        edgeX1->setObjectName(QString::fromUtf8("edgeX1"));
        edgeX1->setValue(0);

        gridLayout_5->addWidget(edgeX1, 1, 1, 1, 1);

        edgeY1 = new QDoubleSpinBox(page11_edge);
        edgeY1->setObjectName(QString::fromUtf8("edgeY1"));
        edgeY1->setValue(0);

        gridLayout_5->addWidget(edgeY1, 2, 1, 1, 1);

        edgeZ1 = new QDoubleSpinBox(page11_edge);
        edgeZ1->setObjectName(QString::fromUtf8("edgeZ1"));
        edgeZ1->setValue(0);

        gridLayout_5->addWidget(edgeZ1, 3, 1, 1, 1);

        edgeX2 = new QDoubleSpinBox(page11_edge);
        edgeX2->setObjectName(QString::fromUtf8("edgeX2"));
        edgeX2->setValue(1);

        gridLayout_5->addWidget(edgeX2, 6, 1, 1, 1);

        edgeY2 = new QDoubleSpinBox(page11_edge);
        edgeY2->setObjectName(QString::fromUtf8("edgeY2"));
        edgeY2->setValue(1);

        gridLayout_5->addWidget(edgeY2, 7, 1, 1, 1);

        edgeZ2 = new QDoubleSpinBox(page11_edge);
        edgeZ2->setObjectName(QString::fromUtf8("edgeZ2"));
        edgeZ2->setValue(1);

        gridLayout_5->addWidget(edgeZ2, 8, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 1, 0, 1, 1);

        widgetStack2->addWidget(page11_edge);

        gridLayout1->addWidget(widgetStack2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBox1, planeLength);
        QWidget::setTabOrder(planeLength, planeWidth);
        QWidget::setTabOrder(planeWidth, boxLength);
        QWidget::setTabOrder(boxLength, boxWidth);
        QWidget::setTabOrder(boxWidth, boxHeight);
        QWidget::setTabOrder(boxHeight, cylinderRadius);
        QWidget::setTabOrder(cylinderRadius, cylinderHeight);
        QWidget::setTabOrder(cylinderHeight, cylinderAngle);
        QWidget::setTabOrder(cylinderAngle, coneRadius1);
        QWidget::setTabOrder(coneRadius1, coneRadius2);
        QWidget::setTabOrder(coneRadius2, coneHeight);
        QWidget::setTabOrder(coneHeight, coneAngle);
        QWidget::setTabOrder(coneAngle, sphereRadius);
        QWidget::setTabOrder(sphereRadius, sphereAngle3);
        QWidget::setTabOrder(sphereAngle3, sphereAngle1);
        QWidget::setTabOrder(sphereAngle1, sphereAngle2);
        QWidget::setTabOrder(sphereAngle2, ellipsoidRadius1);
        QWidget::setTabOrder(ellipsoidRadius1, ellipsoidRadius2);
        QWidget::setTabOrder(ellipsoidRadius2, ellipsoidAngle3);
        QWidget::setTabOrder(ellipsoidAngle3, ellipsoidAngle1);
        QWidget::setTabOrder(ellipsoidAngle1, ellipsoidAngle2);
        QWidget::setTabOrder(ellipsoidAngle2, torusRadius1);
        QWidget::setTabOrder(torusRadius1, torusRadius2);
        QWidget::setTabOrder(torusRadius2, torusAngle1);
        QWidget::setTabOrder(torusAngle1, torusAngle2);
        QWidget::setTabOrder(torusAngle2, torusAngle3);

        retranslateUi(PartGui__DlgPrimitives);
        QObject::connect(comboBox1, SIGNAL(activated(int)), widgetStack2, SLOT(setCurrentIndex(int)));

        widgetStack2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PartGui__DlgPrimitives);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgPrimitives)
    {
        PartGui__DlgPrimitives->setWindowTitle(QApplication::translate("PartGui::DlgPrimitives", "Geometric Primitives", 0, QApplication::UnicodeUTF8));
        comboBox1->clear();
        comboBox1->insertItems(0, QStringList()
         << QApplication::translate("PartGui::DlgPrimitives", "Plane", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Box", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Cylinder", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Cone", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Sphere", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Ellipsoid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Torus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Wedge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Helix", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Ellipse", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Point", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Line", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("PartGui::DlgPrimitives", "Parameter", 0, QApplication::UnicodeUTF8));
        textLabel3_2->setText(QApplication::translate("PartGui::DlgPrimitives", "Width:", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("PartGui::DlgPrimitives", "Length:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("PartGui::DlgPrimitives", "Height:", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("PartGui::DlgPrimitives", "Length:", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("PartGui::DlgPrimitives", "Width:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle:", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius:", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("PartGui::DlgPrimitives", "Height:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle:", 0, QApplication::UnicodeUTF8));
        textLabel11->setText(QApplication::translate("PartGui::DlgPrimitives", "Height:", 0, QApplication::UnicodeUTF8));
        textLabel9->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius 1:", 0, QApplication::UnicodeUTF8));
        textLabel10->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius 2:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PartGui::DlgPrimitives", "U parametric:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartGui::DlgPrimitives", "V parametric:", 0, QApplication::UnicodeUTF8));
        textLabel14->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius:", 0, QApplication::UnicodeUTF8));
        textLabel21->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius 1:", 0, QApplication::UnicodeUTF8));
        textLabel22->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius 2:", 0, QApplication::UnicodeUTF8));
        label23->setText(QApplication::translate("PartGui::DlgPrimitives", "U parametric:", 0, QApplication::UnicodeUTF8));
        label24->setText(QApplication::translate("PartGui::DlgPrimitives", "V parametric:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PartGui::DlgPrimitives", "U parametric:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PartGui::DlgPrimitives", "V parametric:", 0, QApplication::UnicodeUTF8));
        textLabel20->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius 2:", 0, QApplication::UnicodeUTF8));
        textLabel19->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius 1:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PartGui::DlgPrimitives", "X min/max:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PartGui::DlgPrimitives", "Y min/max:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("PartGui::DlgPrimitives", "Z min/max:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PartGui::DlgPrimitives", "X2 min/max:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("PartGui::DlgPrimitives", "Z2 min/max:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PartGui::DlgPrimitives", "Pitch:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PartGui::DlgPrimitives", "Height:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("PartGui::DlgPrimitives", "Coordinate system:", 0, QApplication::UnicodeUTF8));
        helixLocalCS->clear();
        helixLocalCS->insertItems(0, QStringList()
         << QApplication::translate("PartGui::DlgPrimitives", "Right-handed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgPrimitives", "Left-handed", 0, QApplication::UnicodeUTF8)
        );
        Radius->setText(QApplication::translate("PartGui::DlgPrimitives", "Radius:", 0, QApplication::UnicodeUTF8));
        Angle0->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle 1:", 0, QApplication::UnicodeUTF8));
        Angle1->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle 2:", 0, QApplication::UnicodeUTF8));
        buttonCircleFromThreePoints->setText(QApplication::translate("PartGui::DlgPrimitives", "From three points", 0, QApplication::UnicodeUTF8));
        labelEllMajorRadius->setText(QApplication::translate("PartGui::DlgPrimitives", "Major radius:", 0, QApplication::UnicodeUTF8));
        labelEllMinorRadius->setText(QApplication::translate("PartGui::DlgPrimitives", "Minor radius:", 0, QApplication::UnicodeUTF8));
        labelEllAngle1->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle 1:", 0, QApplication::UnicodeUTF8));
        labelEllAngle2->setText(QApplication::translate("PartGui::DlgPrimitives", "Angle 2:", 0, QApplication::UnicodeUTF8));
        label_X_Axis->setText(QApplication::translate("PartGui::DlgPrimitives", "X:", 0, QApplication::UnicodeUTF8));
        label_Y_Axis->setText(QApplication::translate("PartGui::DlgPrimitives", "Y:", 0, QApplication::UnicodeUTF8));
        label_Z_Axis->setText(QApplication::translate("PartGui::DlgPrimitives", "Z:", 0, QApplication::UnicodeUTF8));
        X1->setText(QApplication::translate("PartGui::DlgPrimitives", "X:", 0, QApplication::UnicodeUTF8));
        Y1->setText(QApplication::translate("PartGui::DlgPrimitives", "Y:", 0, QApplication::UnicodeUTF8));
        Z1->setText(QApplication::translate("PartGui::DlgPrimitives", "Z:", 0, QApplication::UnicodeUTF8));
        Finish_Vertex->setText(QApplication::translate("PartGui::DlgPrimitives", "End point", 0, QApplication::UnicodeUTF8));
        Start_Vertex->setText(QApplication::translate("PartGui::DlgPrimitives", "Start point", 0, QApplication::UnicodeUTF8));
        X2->setText(QApplication::translate("PartGui::DlgPrimitives", "X:", 0, QApplication::UnicodeUTF8));
        Y2->setText(QApplication::translate("PartGui::DlgPrimitives", "Y:", 0, QApplication::UnicodeUTF8));
        Z2->setText(QApplication::translate("PartGui::DlgPrimitives", "Z:", 0, QApplication::UnicodeUTF8));
        edgeZ1->setSuffix(QString());
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgPrimitives: public Ui_DlgPrimitives {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGPRIMITIVES_H
