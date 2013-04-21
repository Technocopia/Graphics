/********************************************************************************
** Form generated from reading UI file 'DlgCustomizeSpNavSettings.ui'
**
** Created: Thu Apr 18 22:16:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGCUSTOMIZESPNAVSETTINGS_H
#define UI_DLGCUSTOMIZESPNAVSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgCustomizeSpNavSettings
{
public:
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSlow;
    QSlider *SliderGlobal;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *CBDominant;
    QCheckBox *CBFlipYZ;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *CBTranslations;
    QCheckBox *CBRotations;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonCalibrate;
    QPushButton *ButtonDefaultSpNavMotions;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *ImagePanLR;
    QLabel *ImagePanUD;
    QLabel *ImageZoom;
    QLabel *imageTilt;
    QLabel *ImageRoll;
    QLabel *ImageSpin;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *CBEnablePanLR;
    QCheckBox *CBReversePanLR;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *CBEnablePanUD;
    QCheckBox *CBReversePanUD;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *CBEnableZoom;
    QCheckBox *CBReverseZoom;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *CBEnableTilt;
    QCheckBox *CBReverseTilt;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *CBEnableRoll;
    QCheckBox *CBReverseRoll;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *CBEnableSpin;
    QCheckBox *CBReverseSpin;
    QVBoxLayout *verticalLayout_3;
    QSlider *SliderPanLR;
    QSlider *SliderPanUD;
    QSlider *SliderZoom;
    QSlider *SliderTilt;
    QSlider *SliderRoll;
    QSlider *SliderSpin;

    void setupUi(QWidget *DlgCustomizeSpNavSettings)
    {
        if (DlgCustomizeSpNavSettings->objectName().isEmpty())
            DlgCustomizeSpNavSettings->setObjectName(QString::fromUtf8("DlgCustomizeSpNavSettings"));
        DlgCustomizeSpNavSettings->resize(439, 537);
        verticalLayout_12 = new QVBoxLayout(DlgCustomizeSpNavSettings);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelSlow = new QLabel(DlgCustomizeSpNavSettings);
        labelSlow->setObjectName(QString::fromUtf8("labelSlow"));

        horizontalLayout_2->addWidget(labelSlow);

        SliderGlobal = new QSlider(DlgCustomizeSpNavSettings);
        SliderGlobal->setObjectName(QString::fromUtf8("SliderGlobal"));
        SliderGlobal->setMinimum(-50);
        SliderGlobal->setMaximum(50);
        SliderGlobal->setOrientation(Qt::Horizontal);
        SliderGlobal->setTickPosition(QSlider::TicksBelow);
        SliderGlobal->setTickInterval(10);

        horizontalLayout_2->addWidget(SliderGlobal);


        verticalLayout_12->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        CBDominant = new QCheckBox(DlgCustomizeSpNavSettings);
        CBDominant->setObjectName(QString::fromUtf8("CBDominant"));

        verticalLayout_10->addWidget(CBDominant);

        CBFlipYZ = new QCheckBox(DlgCustomizeSpNavSettings);
        CBFlipYZ->setObjectName(QString::fromUtf8("CBFlipYZ"));

        verticalLayout_10->addWidget(CBFlipYZ);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        CBTranslations = new QCheckBox(DlgCustomizeSpNavSettings);
        CBTranslations->setObjectName(QString::fromUtf8("CBTranslations"));
        CBTranslations->setChecked(true);

        verticalLayout_11->addWidget(CBTranslations);

        CBRotations = new QCheckBox(DlgCustomizeSpNavSettings);
        CBRotations->setObjectName(QString::fromUtf8("CBRotations"));
        CBRotations->setChecked(true);

        verticalLayout_11->addWidget(CBRotations);


        horizontalLayout_3->addLayout(verticalLayout_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        ButtonCalibrate = new QPushButton(DlgCustomizeSpNavSettings);
        ButtonCalibrate->setObjectName(QString::fromUtf8("ButtonCalibrate"));

        horizontalLayout_3->addWidget(ButtonCalibrate);

        ButtonDefaultSpNavMotions = new QPushButton(DlgCustomizeSpNavSettings);
        ButtonDefaultSpNavMotions->setObjectName(QString::fromUtf8("ButtonDefaultSpNavMotions"));

        horizontalLayout_3->addWidget(ButtonDefaultSpNavMotions);


        verticalLayout_12->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 116, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ImagePanLR = new QLabel(DlgCustomizeSpNavSettings);
        ImagePanLR->setObjectName(QString::fromUtf8("ImagePanLR"));
        ImagePanLR->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-PanLR.png")));

        verticalLayout->addWidget(ImagePanLR);

        ImagePanUD = new QLabel(DlgCustomizeSpNavSettings);
        ImagePanUD->setObjectName(QString::fromUtf8("ImagePanUD"));
        ImagePanUD->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-PanUD.png")));

        verticalLayout->addWidget(ImagePanUD);

        ImageZoom = new QLabel(DlgCustomizeSpNavSettings);
        ImageZoom->setObjectName(QString::fromUtf8("ImageZoom"));
        ImageZoom->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Zoom.png")));

        verticalLayout->addWidget(ImageZoom);

        imageTilt = new QLabel(DlgCustomizeSpNavSettings);
        imageTilt->setObjectName(QString::fromUtf8("imageTilt"));
        imageTilt->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Tilt.png")));

        verticalLayout->addWidget(imageTilt);

        ImageRoll = new QLabel(DlgCustomizeSpNavSettings);
        ImageRoll->setObjectName(QString::fromUtf8("ImageRoll"));
        ImageRoll->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Roll.png")));

        verticalLayout->addWidget(ImageRoll);

        ImageSpin = new QLabel(DlgCustomizeSpNavSettings);
        ImageSpin->setObjectName(QString::fromUtf8("ImageSpin"));
        ImageSpin->setPixmap(QPixmap(QString::fromUtf8(":/icons/SpNav-Spin.png")));

        verticalLayout->addWidget(ImageSpin);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(20);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        CBEnablePanLR = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnablePanLR->setObjectName(QString::fromUtf8("CBEnablePanLR"));
        CBEnablePanLR->setChecked(true);

        verticalLayout_2->addWidget(CBEnablePanLR);

        CBReversePanLR = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReversePanLR->setObjectName(QString::fromUtf8("CBReversePanLR"));

        verticalLayout_2->addWidget(CBReversePanLR);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        CBEnablePanUD = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnablePanUD->setObjectName(QString::fromUtf8("CBEnablePanUD"));
        CBEnablePanUD->setChecked(true);

        verticalLayout_4->addWidget(CBEnablePanUD);

        CBReversePanUD = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReversePanUD->setObjectName(QString::fromUtf8("CBReversePanUD"));

        verticalLayout_4->addWidget(CBReversePanUD);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        CBEnableZoom = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableZoom->setObjectName(QString::fromUtf8("CBEnableZoom"));
        CBEnableZoom->setChecked(true);

        verticalLayout_5->addWidget(CBEnableZoom);

        CBReverseZoom = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseZoom->setObjectName(QString::fromUtf8("CBReverseZoom"));

        verticalLayout_5->addWidget(CBReverseZoom);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        CBEnableTilt = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableTilt->setObjectName(QString::fromUtf8("CBEnableTilt"));
        CBEnableTilt->setChecked(true);

        verticalLayout_6->addWidget(CBEnableTilt);

        CBReverseTilt = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseTilt->setObjectName(QString::fromUtf8("CBReverseTilt"));

        verticalLayout_6->addWidget(CBReverseTilt);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        CBEnableRoll = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableRoll->setObjectName(QString::fromUtf8("CBEnableRoll"));
        CBEnableRoll->setChecked(true);

        verticalLayout_7->addWidget(CBEnableRoll);

        CBReverseRoll = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseRoll->setObjectName(QString::fromUtf8("CBReverseRoll"));

        verticalLayout_7->addWidget(CBReverseRoll);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        CBEnableSpin = new QCheckBox(DlgCustomizeSpNavSettings);
        CBEnableSpin->setObjectName(QString::fromUtf8("CBEnableSpin"));
        CBEnableSpin->setChecked(true);

        verticalLayout_8->addWidget(CBEnableSpin);

        CBReverseSpin = new QCheckBox(DlgCustomizeSpNavSettings);
        CBReverseSpin->setObjectName(QString::fromUtf8("CBReverseSpin"));

        verticalLayout_8->addWidget(CBReverseSpin);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        SliderPanLR = new QSlider(DlgCustomizeSpNavSettings);
        SliderPanLR->setObjectName(QString::fromUtf8("SliderPanLR"));
        SliderPanLR->setMinimum(-50);
        SliderPanLR->setMaximum(50);
        SliderPanLR->setSingleStep(1);
        SliderPanLR->setPageStep(1);
        SliderPanLR->setValue(0);
        SliderPanLR->setOrientation(Qt::Horizontal);
        SliderPanLR->setTickPosition(QSlider::TicksBelow);
        SliderPanLR->setTickInterval(10);

        verticalLayout_3->addWidget(SliderPanLR);

        SliderPanUD = new QSlider(DlgCustomizeSpNavSettings);
        SliderPanUD->setObjectName(QString::fromUtf8("SliderPanUD"));
        SliderPanUD->setMinimum(-50);
        SliderPanUD->setMaximum(50);
        SliderPanUD->setSingleStep(1);
        SliderPanUD->setPageStep(1);
        SliderPanUD->setValue(0);
        SliderPanUD->setOrientation(Qt::Horizontal);
        SliderPanUD->setTickPosition(QSlider::TicksBelow);
        SliderPanUD->setTickInterval(10);

        verticalLayout_3->addWidget(SliderPanUD);

        SliderZoom = new QSlider(DlgCustomizeSpNavSettings);
        SliderZoom->setObjectName(QString::fromUtf8("SliderZoom"));
        SliderZoom->setMinimum(-50);
        SliderZoom->setMaximum(50);
        SliderZoom->setSingleStep(1);
        SliderZoom->setPageStep(1);
        SliderZoom->setValue(0);
        SliderZoom->setOrientation(Qt::Horizontal);
        SliderZoom->setTickPosition(QSlider::TicksBelow);
        SliderZoom->setTickInterval(10);

        verticalLayout_3->addWidget(SliderZoom);

        SliderTilt = new QSlider(DlgCustomizeSpNavSettings);
        SliderTilt->setObjectName(QString::fromUtf8("SliderTilt"));
        SliderTilt->setMinimum(-50);
        SliderTilt->setMaximum(50);
        SliderTilt->setSingleStep(1);
        SliderTilt->setPageStep(1);
        SliderTilt->setValue(0);
        SliderTilt->setOrientation(Qt::Horizontal);
        SliderTilt->setTickPosition(QSlider::TicksBelow);
        SliderTilt->setTickInterval(10);

        verticalLayout_3->addWidget(SliderTilt);

        SliderRoll = new QSlider(DlgCustomizeSpNavSettings);
        SliderRoll->setObjectName(QString::fromUtf8("SliderRoll"));
        SliderRoll->setMinimum(-50);
        SliderRoll->setMaximum(50);
        SliderRoll->setSingleStep(1);
        SliderRoll->setPageStep(1);
        SliderRoll->setValue(0);
        SliderRoll->setOrientation(Qt::Horizontal);
        SliderRoll->setTickPosition(QSlider::TicksBelow);
        SliderRoll->setTickInterval(10);

        verticalLayout_3->addWidget(SliderRoll);

        SliderSpin = new QSlider(DlgCustomizeSpNavSettings);
        SliderSpin->setObjectName(QString::fromUtf8("SliderSpin"));
        SliderSpin->setMinimum(-50);
        SliderSpin->setMaximum(50);
        SliderSpin->setSingleStep(1);
        SliderSpin->setPageStep(1);
        SliderSpin->setValue(0);
        SliderSpin->setOrientation(Qt::Horizontal);
        SliderSpin->setTickPosition(QSlider::TicksBelow);
        SliderSpin->setTickInterval(10);

        verticalLayout_3->addWidget(SliderSpin);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_12->addLayout(horizontalLayout);


        retranslateUi(DlgCustomizeSpNavSettings);

        QMetaObject::connectSlotsByName(DlgCustomizeSpNavSettings);
    } // setupUi

    void retranslateUi(QWidget *DlgCustomizeSpNavSettings)
    {
        DlgCustomizeSpNavSettings->setWindowTitle(QApplication::translate("DlgCustomizeSpNavSettings", "Spaceball Motion", 0, QApplication::UnicodeUTF8));
        labelSlow->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Global Sensitivity:  ", 0, QApplication::UnicodeUTF8));
        CBDominant->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Dominant Mode", 0, QApplication::UnicodeUTF8));
        CBFlipYZ->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Flip Y/Z", 0, QApplication::UnicodeUTF8));
        CBTranslations->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable Translations", 0, QApplication::UnicodeUTF8));
        CBRotations->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable Rotations", 0, QApplication::UnicodeUTF8));
        ButtonCalibrate->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Calibrate", 0, QApplication::UnicodeUTF8));
        ButtonDefaultSpNavMotions->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Default", 0, QApplication::UnicodeUTF8));
        ImagePanLR->setText(QString());
        ImagePanUD->setText(QString());
        ImageZoom->setText(QString());
        imageTilt->setText(QString());
        ImageRoll->setText(QString());
        ImageSpin->setText(QString());
        CBEnablePanLR->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0, QApplication::UnicodeUTF8));
        CBReversePanLR->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0, QApplication::UnicodeUTF8));
        CBEnablePanUD->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0, QApplication::UnicodeUTF8));
        CBReversePanUD->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0, QApplication::UnicodeUTF8));
        CBEnableZoom->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0, QApplication::UnicodeUTF8));
        CBReverseZoom->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0, QApplication::UnicodeUTF8));
        CBEnableTilt->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0, QApplication::UnicodeUTF8));
        CBReverseTilt->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0, QApplication::UnicodeUTF8));
        CBEnableRoll->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0, QApplication::UnicodeUTF8));
        CBReverseRoll->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0, QApplication::UnicodeUTF8));
        CBEnableSpin->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Enable", 0, QApplication::UnicodeUTF8));
        CBReverseSpin->setText(QApplication::translate("DlgCustomizeSpNavSettings", "Reverse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgCustomizeSpNavSettings: public Ui_DlgCustomizeSpNavSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGCUSTOMIZESPNAVSETTINGS_H
