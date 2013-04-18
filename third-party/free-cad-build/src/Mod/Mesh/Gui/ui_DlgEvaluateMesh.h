/********************************************************************************
** Form generated from reading UI file 'DlgEvaluateMesh.ui'
**
** Created: Thu Apr 18 07:15:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEVALUATEMESH_H
#define UI_DLGEVALUATEMESH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

namespace MeshGui {

class Ui_DlgEvaluateMesh
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxInfo;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QLabel *textLabel3;
    QLabel *textLabel4;
    QLabel *textLabel1;
    QLabel *textLabel6;
    QLabel *textLabel2;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QLabel *textLabel5;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QPushButton *refreshButton;
    QComboBox *meshNameButton;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *hboxLayout1;
    QCheckBox *checkOrientationButton;
    QSpacerItem *spacerItem4;
    QPushButton *analyzeOrientationButton;
    QPushButton *repairOrientationButton;
    QHBoxLayout *hboxLayout2;
    QLabel *label_2;
    QFrame *line_2;
    QHBoxLayout *hboxLayout3;
    QCheckBox *checkDuplicatedFacesButton;
    QSpacerItem *spacerItem5;
    QPushButton *analyzeDuplicatedFacesButton;
    QPushButton *repairDuplicatedFacesButton;
    QHBoxLayout *hboxLayout4;
    QLabel *label_3;
    QFrame *line_3;
    QHBoxLayout *hboxLayout5;
    QCheckBox *checkDuplicatedPointsButton;
    QSpacerItem *spacerItem6;
    QPushButton *analyzeDuplicatedPointsButton;
    QPushButton *repairDuplicatedPointsButton;
    QHBoxLayout *hboxLayout6;
    QLabel *label_4;
    QFrame *line_4;
    QHBoxLayout *hboxLayout7;
    QCheckBox *checkNonmanifoldsButton;
    QSpacerItem *spacerItem7;
    QPushButton *analyzeNonmanifoldsButton;
    QPushButton *repairNonmanifoldsButton;
    QHBoxLayout *hboxLayout8;
    QLabel *label_5;
    QFrame *line_5;
    QHBoxLayout *hboxLayout9;
    QCheckBox *checkDegenerationButton;
    QSpacerItem *spacerItem8;
    QPushButton *analyzeDegeneratedButton;
    QPushButton *repairDegeneratedButton;
    QHBoxLayout *hboxLayout10;
    QLabel *label_6;
    QFrame *line_6;
    QHBoxLayout *hboxLayout11;
    QCheckBox *checkIndicesButton;
    QSpacerItem *spacerItem9;
    QPushButton *analyzeIndicesButton;
    QPushButton *repairIndicesButton;
    QHBoxLayout *hboxLayout12;
    QLabel *label_7;
    QFrame *line_7;
    QHBoxLayout *hboxLayout13;
    QCheckBox *checkSelfIntersectionButton;
    QSpacerItem *spacerItem10;
    QPushButton *analyzeSelfIntersectionButton;
    QPushButton *repairSelfIntersectionButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QFrame *line_9;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkFoldsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *analyzeFoldsButton;
    QPushButton *repairFoldsButton;
    QHBoxLayout *hboxLayout14;
    QLabel *label_8;
    QFrame *line_8;
    QHBoxLayout *hboxLayout15;
    QCheckBox *checkRepeatButton;
    QSpacerItem *spacerItem11;
    QPushButton *analyzeAllTogether;
    QPushButton *repairAllTogether;
    QSpacerItem *spacerItem12;
    QHBoxLayout *hboxLayout16;
    QPushButton *buttonHelp;
    QSpacerItem *spacerItem13;
    QPushButton *closeButton;

    void setupUi(QDialog *MeshGui__DlgEvaluateMesh)
    {
        if (MeshGui__DlgEvaluateMesh->objectName().isEmpty())
            MeshGui__DlgEvaluateMesh->setObjectName(QString::fromUtf8("MeshGui__DlgEvaluateMesh"));
        MeshGui__DlgEvaluateMesh->resize(371, 683);
        MeshGui__DlgEvaluateMesh->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(MeshGui__DlgEvaluateMesh);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxInfo = new QGroupBox(MeshGui__DlgEvaluateMesh);
        groupBoxInfo->setObjectName(QString::fromUtf8("groupBoxInfo"));
        gridLayout1 = new QGridLayout(groupBoxInfo);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel3 = new QLabel(groupBoxInfo);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout2->addWidget(textLabel3, 2, 0, 1, 1);

        textLabel4 = new QLabel(groupBoxInfo);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(textLabel4, 0, 2, 1, 1);

        textLabel1 = new QLabel(groupBoxInfo);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        textLabel6 = new QLabel(groupBoxInfo);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(textLabel6, 2, 2, 1, 1);

        textLabel2 = new QLabel(groupBoxInfo);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout2->addWidget(textLabel2, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(26, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 1, 1, 1);

        textLabel5 = new QLabel(groupBoxInfo);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(textLabel5, 1, 2, 1, 1);

        spacerItem2 = new QSpacerItem(16, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 0, 1, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 2, 2, 1);

        spacerItem3 = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 1, 1, 1, 1);

        refreshButton = new QPushButton(groupBoxInfo);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        gridLayout1->addWidget(refreshButton, 1, 0, 1, 1);

        meshNameButton = new QComboBox(groupBoxInfo);
        meshNameButton->setObjectName(QString::fromUtf8("meshNameButton"));

        gridLayout1->addWidget(meshNameButton, 0, 0, 1, 2);


        gridLayout->addWidget(groupBoxInfo, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(MeshGui__DlgEvaluateMesh);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(label);

        line = new QFrame(MeshGui__DlgEvaluateMesh);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        hboxLayout->addWidget(line);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        checkOrientationButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkOrientationButton->setObjectName(QString::fromUtf8("checkOrientationButton"));

        hboxLayout1->addWidget(checkOrientationButton);

        spacerItem4 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        analyzeOrientationButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeOrientationButton->setObjectName(QString::fromUtf8("analyzeOrientationButton"));

        hboxLayout1->addWidget(analyzeOrientationButton);

        repairOrientationButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairOrientationButton->setObjectName(QString::fromUtf8("repairOrientationButton"));
        repairOrientationButton->setEnabled(false);

        hboxLayout1->addWidget(repairOrientationButton);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_2 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        hboxLayout2->addWidget(label_2);

        line_2 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        hboxLayout2->addWidget(line_2);


        gridLayout->addLayout(hboxLayout2, 3, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        checkDuplicatedFacesButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkDuplicatedFacesButton->setObjectName(QString::fromUtf8("checkDuplicatedFacesButton"));

        hboxLayout3->addWidget(checkDuplicatedFacesButton);

        spacerItem5 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);

        analyzeDuplicatedFacesButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeDuplicatedFacesButton->setObjectName(QString::fromUtf8("analyzeDuplicatedFacesButton"));

        hboxLayout3->addWidget(analyzeDuplicatedFacesButton);

        repairDuplicatedFacesButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairDuplicatedFacesButton->setObjectName(QString::fromUtf8("repairDuplicatedFacesButton"));
        repairDuplicatedFacesButton->setEnabled(false);

        hboxLayout3->addWidget(repairDuplicatedFacesButton);


        gridLayout->addLayout(hboxLayout3, 4, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_3 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        hboxLayout4->addWidget(label_3);

        line_3 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        hboxLayout4->addWidget(line_3);


        gridLayout->addLayout(hboxLayout4, 5, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        checkDuplicatedPointsButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkDuplicatedPointsButton->setObjectName(QString::fromUtf8("checkDuplicatedPointsButton"));

        hboxLayout5->addWidget(checkDuplicatedPointsButton);

        spacerItem6 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem6);

        analyzeDuplicatedPointsButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeDuplicatedPointsButton->setObjectName(QString::fromUtf8("analyzeDuplicatedPointsButton"));

        hboxLayout5->addWidget(analyzeDuplicatedPointsButton);

        repairDuplicatedPointsButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairDuplicatedPointsButton->setObjectName(QString::fromUtf8("repairDuplicatedPointsButton"));
        repairDuplicatedPointsButton->setEnabled(false);

        hboxLayout5->addWidget(repairDuplicatedPointsButton);


        gridLayout->addLayout(hboxLayout5, 6, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        label_4 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        hboxLayout6->addWidget(label_4);

        line_4 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        hboxLayout6->addWidget(line_4);


        gridLayout->addLayout(hboxLayout6, 7, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        checkNonmanifoldsButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkNonmanifoldsButton->setObjectName(QString::fromUtf8("checkNonmanifoldsButton"));

        hboxLayout7->addWidget(checkNonmanifoldsButton);

        spacerItem7 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem7);

        analyzeNonmanifoldsButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeNonmanifoldsButton->setObjectName(QString::fromUtf8("analyzeNonmanifoldsButton"));

        hboxLayout7->addWidget(analyzeNonmanifoldsButton);

        repairNonmanifoldsButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairNonmanifoldsButton->setObjectName(QString::fromUtf8("repairNonmanifoldsButton"));
        repairNonmanifoldsButton->setEnabled(false);

        hboxLayout7->addWidget(repairNonmanifoldsButton);


        gridLayout->addLayout(hboxLayout7, 8, 0, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        label_5 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        hboxLayout8->addWidget(label_5);

        line_5 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        hboxLayout8->addWidget(line_5);


        gridLayout->addLayout(hboxLayout8, 9, 0, 1, 1);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        checkDegenerationButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkDegenerationButton->setObjectName(QString::fromUtf8("checkDegenerationButton"));

        hboxLayout9->addWidget(checkDegenerationButton);

        spacerItem8 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacerItem8);

        analyzeDegeneratedButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeDegeneratedButton->setObjectName(QString::fromUtf8("analyzeDegeneratedButton"));

        hboxLayout9->addWidget(analyzeDegeneratedButton);

        repairDegeneratedButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairDegeneratedButton->setObjectName(QString::fromUtf8("repairDegeneratedButton"));
        repairDegeneratedButton->setEnabled(false);

        hboxLayout9->addWidget(repairDegeneratedButton);


        gridLayout->addLayout(hboxLayout9, 10, 0, 1, 1);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        label_6 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        hboxLayout10->addWidget(label_6);

        line_6 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        hboxLayout10->addWidget(line_6);


        gridLayout->addLayout(hboxLayout10, 11, 0, 1, 1);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        checkIndicesButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkIndicesButton->setObjectName(QString::fromUtf8("checkIndicesButton"));

        hboxLayout11->addWidget(checkIndicesButton);

        spacerItem9 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacerItem9);

        analyzeIndicesButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeIndicesButton->setObjectName(QString::fromUtf8("analyzeIndicesButton"));

        hboxLayout11->addWidget(analyzeIndicesButton);

        repairIndicesButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairIndicesButton->setObjectName(QString::fromUtf8("repairIndicesButton"));
        repairIndicesButton->setEnabled(false);

        hboxLayout11->addWidget(repairIndicesButton);


        gridLayout->addLayout(hboxLayout11, 12, 0, 1, 1);

        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout12->setObjectName(QString::fromUtf8("hboxLayout12"));
        label_7 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        hboxLayout12->addWidget(label_7);

        line_7 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        hboxLayout12->addWidget(line_7);


        gridLayout->addLayout(hboxLayout12, 13, 0, 1, 1);

        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
        hboxLayout13->setObjectName(QString::fromUtf8("hboxLayout13"));
        checkSelfIntersectionButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkSelfIntersectionButton->setObjectName(QString::fromUtf8("checkSelfIntersectionButton"));

        hboxLayout13->addWidget(checkSelfIntersectionButton);

        spacerItem10 = new QSpacerItem(51, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout13->addItem(spacerItem10);

        analyzeSelfIntersectionButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeSelfIntersectionButton->setObjectName(QString::fromUtf8("analyzeSelfIntersectionButton"));

        hboxLayout13->addWidget(analyzeSelfIntersectionButton);

        repairSelfIntersectionButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairSelfIntersectionButton->setObjectName(QString::fromUtf8("repairSelfIntersectionButton"));
        repairSelfIntersectionButton->setEnabled(false);

        hboxLayout13->addWidget(repairSelfIntersectionButton);


        gridLayout->addLayout(hboxLayout13, 14, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        line_9 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_9);


        gridLayout->addLayout(horizontalLayout_2, 15, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkFoldsButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkFoldsButton->setObjectName(QString::fromUtf8("checkFoldsButton"));

        horizontalLayout->addWidget(checkFoldsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        analyzeFoldsButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeFoldsButton->setObjectName(QString::fromUtf8("analyzeFoldsButton"));

        horizontalLayout->addWidget(analyzeFoldsButton);

        repairFoldsButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairFoldsButton->setObjectName(QString::fromUtf8("repairFoldsButton"));
        repairFoldsButton->setEnabled(false);

        horizontalLayout->addWidget(repairFoldsButton);


        gridLayout->addLayout(horizontalLayout, 16, 0, 1, 1);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setSpacing(6);
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        hboxLayout14->setObjectName(QString::fromUtf8("hboxLayout14"));
        label_8 = new QLabel(MeshGui__DlgEvaluateMesh);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        hboxLayout14->addWidget(label_8);

        line_8 = new QFrame(MeshGui__DlgEvaluateMesh);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        hboxLayout14->addWidget(line_8);


        gridLayout->addLayout(hboxLayout14, 17, 0, 1, 1);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setSpacing(6);
        hboxLayout15->setContentsMargins(0, 0, 0, 0);
        hboxLayout15->setObjectName(QString::fromUtf8("hboxLayout15"));
        checkRepeatButton = new QCheckBox(MeshGui__DlgEvaluateMesh);
        checkRepeatButton->setObjectName(QString::fromUtf8("checkRepeatButton"));

        hboxLayout15->addWidget(checkRepeatButton);

        spacerItem11 = new QSpacerItem(72, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout15->addItem(spacerItem11);

        analyzeAllTogether = new QPushButton(MeshGui__DlgEvaluateMesh);
        analyzeAllTogether->setObjectName(QString::fromUtf8("analyzeAllTogether"));

        hboxLayout15->addWidget(analyzeAllTogether);

        repairAllTogether = new QPushButton(MeshGui__DlgEvaluateMesh);
        repairAllTogether->setObjectName(QString::fromUtf8("repairAllTogether"));
        repairAllTogether->setEnabled(false);

        hboxLayout15->addWidget(repairAllTogether);


        gridLayout->addLayout(hboxLayout15, 18, 0, 1, 1);

        spacerItem12 = new QSpacerItem(353, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem12, 19, 0, 1, 1);

        hboxLayout16 = new QHBoxLayout();
        hboxLayout16->setSpacing(6);
        hboxLayout16->setContentsMargins(0, 0, 0, 0);
        hboxLayout16->setObjectName(QString::fromUtf8("hboxLayout16"));
        buttonHelp = new QPushButton(MeshGui__DlgEvaluateMesh);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        buttonHelp->setAutoDefault(true);

        hboxLayout16->addWidget(buttonHelp);

        spacerItem13 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout16->addItem(spacerItem13);

        closeButton = new QPushButton(MeshGui__DlgEvaluateMesh);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setAutoDefault(true);

        hboxLayout16->addWidget(closeButton);


        gridLayout->addLayout(hboxLayout16, 20, 0, 1, 1);

        QWidget::setTabOrder(refreshButton, checkOrientationButton);
        QWidget::setTabOrder(checkOrientationButton, analyzeOrientationButton);
        QWidget::setTabOrder(analyzeOrientationButton, repairOrientationButton);
        QWidget::setTabOrder(repairOrientationButton, checkDuplicatedFacesButton);
        QWidget::setTabOrder(checkDuplicatedFacesButton, analyzeDuplicatedFacesButton);
        QWidget::setTabOrder(analyzeDuplicatedFacesButton, repairDuplicatedFacesButton);
        QWidget::setTabOrder(repairDuplicatedFacesButton, checkDuplicatedPointsButton);
        QWidget::setTabOrder(checkDuplicatedPointsButton, analyzeDuplicatedPointsButton);
        QWidget::setTabOrder(analyzeDuplicatedPointsButton, repairDuplicatedPointsButton);
        QWidget::setTabOrder(repairDuplicatedPointsButton, checkNonmanifoldsButton);
        QWidget::setTabOrder(checkNonmanifoldsButton, analyzeNonmanifoldsButton);
        QWidget::setTabOrder(analyzeNonmanifoldsButton, repairNonmanifoldsButton);
        QWidget::setTabOrder(repairNonmanifoldsButton, checkDegenerationButton);
        QWidget::setTabOrder(checkDegenerationButton, analyzeDegeneratedButton);
        QWidget::setTabOrder(analyzeDegeneratedButton, repairDegeneratedButton);
        QWidget::setTabOrder(repairDegeneratedButton, checkIndicesButton);
        QWidget::setTabOrder(checkIndicesButton, analyzeIndicesButton);
        QWidget::setTabOrder(analyzeIndicesButton, repairIndicesButton);
        QWidget::setTabOrder(repairIndicesButton, buttonHelp);
        QWidget::setTabOrder(buttonHelp, closeButton);

        retranslateUi(MeshGui__DlgEvaluateMesh);
        QObject::connect(closeButton, SIGNAL(clicked()), MeshGui__DlgEvaluateMesh, SLOT(close()));

        QMetaObject::connectSlotsByName(MeshGui__DlgEvaluateMesh);
    } // setupUi

    void retranslateUi(QDialog *MeshGui__DlgEvaluateMesh)
    {
        MeshGui__DlgEvaluateMesh->setWindowTitle(QApplication::translate("MeshGui::DlgEvaluateMesh", "Evaluate & Repair Mesh", 0, QApplication::UnicodeUTF8));
        groupBoxInfo->setTitle(QApplication::translate("MeshGui::DlgEvaluateMesh", "Mesh information", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Number of points:", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Number of faces:", 0, QApplication::UnicodeUTF8));
        textLabel6->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Number of edges:", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        refreshButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Refresh", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Orientation", 0, QApplication::UnicodeUTF8));
        checkOrientationButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeOrientationButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairOrientationButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Duplicated faces", 0, QApplication::UnicodeUTF8));
        checkDuplicatedFacesButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeDuplicatedFacesButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairDuplicatedFacesButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Duplicated points", 0, QApplication::UnicodeUTF8));
        checkDuplicatedPointsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeDuplicatedPointsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairDuplicatedPointsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Non-manifolds", 0, QApplication::UnicodeUTF8));
        checkNonmanifoldsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeNonmanifoldsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairNonmanifoldsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Degenerated faces", 0, QApplication::UnicodeUTF8));
        checkDegenerationButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeDegeneratedButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairDegeneratedButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Face indices", 0, QApplication::UnicodeUTF8));
        checkIndicesButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeIndicesButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairIndicesButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Self-intersections", 0, QApplication::UnicodeUTF8));
        checkSelfIntersectionButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeSelfIntersectionButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairSelfIntersectionButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Folds on surface", 0, QApplication::UnicodeUTF8));
        checkFoldsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "No information", 0, QApplication::UnicodeUTF8));
        analyzeFoldsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairFoldsButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "All above tests together", 0, QApplication::UnicodeUTF8));
        checkRepeatButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repetitive repair", 0, QApplication::UnicodeUTF8));
        analyzeAllTogether->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Analyze", 0, QApplication::UnicodeUTF8));
        repairAllTogether->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "Repair", 0, QApplication::UnicodeUTF8));
        buttonHelp->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "&Help", 0, QApplication::UnicodeUTF8));
        buttonHelp->setShortcut(QApplication::translate("MeshGui::DlgEvaluateMesh", "F1", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("MeshGui::DlgEvaluateMesh", "&Close", 0, QApplication::UnicodeUTF8));
        closeButton->setShortcut(QApplication::translate("MeshGui::DlgEvaluateMesh", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class DlgEvaluateMesh: public Ui_DlgEvaluateMesh {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_DLGEVALUATEMESH_H
