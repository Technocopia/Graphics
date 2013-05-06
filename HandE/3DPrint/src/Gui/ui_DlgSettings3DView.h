/********************************************************************************
** Form generated from reading UI file 'DlgSettings3DView.ui'
**
** Created: Thu Apr 18 22:16:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGS3DVIEW_H
#define UI_DLGSETTINGS3DVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettings3DView
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox12;
    QGridLayout *gridLayout1;
    Gui::PrefCheckBox *CheckBox_CornerCoordSystem;
    Gui::PrefCheckBox *CheckBox_ShowFPS;
    Gui::PrefCheckBox *CheckBox_UseAutoRotation;
    QGridLayout *gridLayout2;
    QLabel *navigationLabel;
    QComboBox *comboNavigationStyle;
    QPushButton *mouseButton;
    QLabel *orbitLabel;
    QComboBox *comboOrbitStyle;
    QHBoxLayout *horizontalLayout;
    Gui::PrefCheckBox *checkBoxZoomAtCursor;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    Gui::PrefDoubleSpinBox *spinBoxZoomStep;
    Gui::PrefCheckBox *checkBoxInvertZoom;
    Gui::PrefCheckBox *checkBoxAntiAliasing;
    QFrame *line1;
    QHBoxLayout *eyedistanceLayout;
    QLabel *textLabel1;
    Gui::PrefDoubleSpinBox *FloatSpinBox_EyeDistance;
    QGridLayout *backlightLayout;
    Gui::PrefSlider *sliderIntensity;
    Gui::PrefColorButton *backlightColor;
    QLabel *backlightLabel;
    Gui::PrefCheckBox *checkBoxBacklight;
    QGroupBox *groupBoxCamera;
    QGridLayout *gridLayout3;
    Gui::PrefRadioButton *radioOrthographic;
    Gui::PrefRadioButton *radioPerspective;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *Gui__Dialog__DlgSettings3DView)
    {
        if (Gui__Dialog__DlgSettings3DView->objectName().isEmpty())
            Gui__Dialog__DlgSettings3DView->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettings3DView"));
        Gui__Dialog__DlgSettings3DView->resize(477, 495);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettings3DView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox12 = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        GroupBox12->setObjectName(QString::fromUtf8("GroupBox12"));
        gridLayout1 = new QGridLayout(GroupBox12);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        CheckBox_CornerCoordSystem = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_CornerCoordSystem->setObjectName(QString::fromUtf8("CheckBox_CornerCoordSystem"));
        CheckBox_CornerCoordSystem->setChecked(true);
        CheckBox_CornerCoordSystem->setProperty("prefEntry", QVariant(QByteArray("CornerCoordSystem")));
        CheckBox_CornerCoordSystem->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(CheckBox_CornerCoordSystem, 0, 0, 1, 1);

        CheckBox_ShowFPS = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_ShowFPS->setObjectName(QString::fromUtf8("CheckBox_ShowFPS"));
        CheckBox_ShowFPS->setProperty("prefEntry", QVariant(QByteArray("ShowFPS")));
        CheckBox_ShowFPS->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(CheckBox_ShowFPS, 1, 0, 1, 1);

        CheckBox_UseAutoRotation = new Gui::PrefCheckBox(GroupBox12);
        CheckBox_UseAutoRotation->setObjectName(QString::fromUtf8("CheckBox_UseAutoRotation"));
        CheckBox_UseAutoRotation->setEnabled(true);
        CheckBox_UseAutoRotation->setChecked(true);
        CheckBox_UseAutoRotation->setProperty("prefEntry", QVariant(QByteArray("UseAutoRotation")));
        CheckBox_UseAutoRotation->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(CheckBox_UseAutoRotation, 2, 0, 1, 1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        navigationLabel = new QLabel(GroupBox12);
        navigationLabel->setObjectName(QString::fromUtf8("navigationLabel"));

        gridLayout2->addWidget(navigationLabel, 0, 0, 1, 1);

        comboNavigationStyle = new QComboBox(GroupBox12);
        comboNavigationStyle->setObjectName(QString::fromUtf8("comboNavigationStyle"));

        gridLayout2->addWidget(comboNavigationStyle, 0, 1, 1, 1);

        mouseButton = new QPushButton(GroupBox12);
        mouseButton->setObjectName(QString::fromUtf8("mouseButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mouseButton->sizePolicy().hasHeightForWidth());
        mouseButton->setSizePolicy(sizePolicy);

        gridLayout2->addWidget(mouseButton, 0, 2, 1, 1);

        orbitLabel = new QLabel(GroupBox12);
        orbitLabel->setObjectName(QString::fromUtf8("orbitLabel"));

        gridLayout2->addWidget(orbitLabel, 1, 0, 1, 1);

        comboOrbitStyle = new QComboBox(GroupBox12);
        comboOrbitStyle->setObjectName(QString::fromUtf8("comboOrbitStyle"));

        gridLayout2->addWidget(comboOrbitStyle, 1, 1, 1, 1);


        gridLayout1->addLayout(gridLayout2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxZoomAtCursor = new Gui::PrefCheckBox(GroupBox12);
        checkBoxZoomAtCursor->setObjectName(QString::fromUtf8("checkBoxZoomAtCursor"));
        checkBoxZoomAtCursor->setProperty("prefEntry", QVariant(QByteArray("ZoomAtCursor")));
        checkBoxZoomAtCursor->setProperty("prefPath", QVariant(QByteArray("View")));

        horizontalLayout->addWidget(checkBoxZoomAtCursor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(GroupBox12);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBoxZoomStep = new Gui::PrefDoubleSpinBox(GroupBox12);
        spinBoxZoomStep->setObjectName(QString::fromUtf8("spinBoxZoomStep"));
        spinBoxZoomStep->setMinimum(0.01);
        spinBoxZoomStep->setMaximum(1);
        spinBoxZoomStep->setSingleStep(0.05);
        spinBoxZoomStep->setValue(0.2);
        spinBoxZoomStep->setProperty("prefEntry", QVariant(QByteArray("ZoomStep")));
        spinBoxZoomStep->setProperty("prefPath", QVariant(QByteArray("View")));

        horizontalLayout->addWidget(spinBoxZoomStep);


        gridLayout1->addLayout(horizontalLayout, 4, 0, 1, 1);

        checkBoxInvertZoom = new Gui::PrefCheckBox(GroupBox12);
        checkBoxInvertZoom->setObjectName(QString::fromUtf8("checkBoxInvertZoom"));
        checkBoxInvertZoom->setChecked(true);
        checkBoxInvertZoom->setProperty("prefEntry", QVariant(QByteArray("InvertZoom")));
        checkBoxInvertZoom->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(checkBoxInvertZoom, 5, 0, 1, 1);

        checkBoxAntiAliasing = new Gui::PrefCheckBox(GroupBox12);
        checkBoxAntiAliasing->setObjectName(QString::fromUtf8("checkBoxAntiAliasing"));
        checkBoxAntiAliasing->setProperty("prefEntry", QVariant(QByteArray("UseAntialiasing")));
        checkBoxAntiAliasing->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout1->addWidget(checkBoxAntiAliasing, 6, 0, 1, 1);

        line1 = new QFrame(GroupBox12);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        gridLayout1->addWidget(line1, 7, 0, 1, 1);

        eyedistanceLayout = new QHBoxLayout();
        eyedistanceLayout->setSpacing(6);
        eyedistanceLayout->setContentsMargins(11, 11, 11, 11);
        eyedistanceLayout->setObjectName(QString::fromUtf8("eyedistanceLayout"));
        textLabel1 = new QLabel(GroupBox12);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        eyedistanceLayout->addWidget(textLabel1);

        FloatSpinBox_EyeDistance = new Gui::PrefDoubleSpinBox(GroupBox12);
        FloatSpinBox_EyeDistance->setObjectName(QString::fromUtf8("FloatSpinBox_EyeDistance"));
        FloatSpinBox_EyeDistance->setDecimals(1);
        FloatSpinBox_EyeDistance->setMinimum(0.1);
        FloatSpinBox_EyeDistance->setMaximum(1000);
        FloatSpinBox_EyeDistance->setSingleStep(2);
        FloatSpinBox_EyeDistance->setValue(5);
        FloatSpinBox_EyeDistance->setProperty("prefEntry", QVariant(QByteArray("EyeDistance")));
        FloatSpinBox_EyeDistance->setProperty("prefPath", QVariant(QByteArray("View")));

        eyedistanceLayout->addWidget(FloatSpinBox_EyeDistance);


        gridLayout1->addLayout(eyedistanceLayout, 8, 0, 1, 1);

        backlightLayout = new QGridLayout();
        backlightLayout->setSpacing(6);
        backlightLayout->setContentsMargins(11, 11, 11, 11);
        backlightLayout->setObjectName(QString::fromUtf8("backlightLayout"));
        sliderIntensity = new Gui::PrefSlider(GroupBox12);
        sliderIntensity->setObjectName(QString::fromUtf8("sliderIntensity"));
        sliderIntensity->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sliderIntensity->sizePolicy().hasHeightForWidth());
        sliderIntensity->setSizePolicy(sizePolicy1);
        sliderIntensity->setMaximum(100);
        sliderIntensity->setSingleStep(1);
        sliderIntensity->setValue(100);
        sliderIntensity->setOrientation(Qt::Horizontal);
        sliderIntensity->setTickPosition(QSlider::TicksBelow);
        sliderIntensity->setTickInterval(10);
        sliderIntensity->setProperty("prefEntry", QVariant(QByteArray("BacklightIntensity")));
        sliderIntensity->setProperty("prefPath", QVariant(QByteArray("View")));

        backlightLayout->addWidget(sliderIntensity, 1, 1, 1, 1);

        backlightColor = new Gui::PrefColorButton(GroupBox12);
        backlightColor->setObjectName(QString::fromUtf8("backlightColor"));
        backlightColor->setEnabled(false);
        backlightColor->setColor(QColor(255, 255, 255));
        backlightColor->setProperty("prefEntry", QVariant(QByteArray("BacklightColor")));
        backlightColor->setProperty("prefPath", QVariant(QByteArray("View")));

        backlightLayout->addWidget(backlightColor, 0, 1, 1, 1);

        backlightLabel = new QLabel(GroupBox12);
        backlightLabel->setObjectName(QString::fromUtf8("backlightLabel"));

        backlightLayout->addWidget(backlightLabel, 1, 0, 1, 1);

        checkBoxBacklight = new Gui::PrefCheckBox(GroupBox12);
        checkBoxBacklight->setObjectName(QString::fromUtf8("checkBoxBacklight"));
        checkBoxBacklight->setProperty("prefEntry", QVariant(QByteArray("EnableBacklight")));
        checkBoxBacklight->setProperty("prefPath", QVariant(QByteArray("View")));

        backlightLayout->addWidget(checkBoxBacklight, 0, 0, 1, 1);


        gridLayout1->addLayout(backlightLayout, 9, 0, 1, 1);


        gridLayout->addWidget(GroupBox12, 0, 0, 1, 1);

        groupBoxCamera = new QGroupBox(Gui__Dialog__DlgSettings3DView);
        groupBoxCamera->setObjectName(QString::fromUtf8("groupBoxCamera"));
        gridLayout3 = new QGridLayout(groupBoxCamera);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        radioOrthographic = new Gui::PrefRadioButton(groupBoxCamera);
        radioOrthographic->setObjectName(QString::fromUtf8("radioOrthographic"));
        radioOrthographic->setChecked(true);
        radioOrthographic->setProperty("prefEntry", QVariant(QByteArray("Orthographic")));
        radioOrthographic->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout3->addWidget(radioOrthographic, 0, 1, 1, 1);

        radioPerspective = new Gui::PrefRadioButton(groupBoxCamera);
        radioPerspective->setObjectName(QString::fromUtf8("radioPerspective"));
        radioPerspective->setProperty("prefEntry", QVariant(QByteArray("Perspective")));
        radioPerspective->setProperty("prefPath", QVariant(QByteArray("View")));

        gridLayout3->addWidget(radioPerspective, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxCamera, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(455, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        QWidget::setTabOrder(CheckBox_CornerCoordSystem, CheckBox_ShowFPS);
        QWidget::setTabOrder(CheckBox_ShowFPS, CheckBox_UseAutoRotation);
        QWidget::setTabOrder(CheckBox_UseAutoRotation, comboNavigationStyle);
        QWidget::setTabOrder(comboNavigationStyle, mouseButton);
        QWidget::setTabOrder(mouseButton, comboOrbitStyle);
        QWidget::setTabOrder(comboOrbitStyle, checkBoxZoomAtCursor);
        QWidget::setTabOrder(checkBoxZoomAtCursor, spinBoxZoomStep);
        QWidget::setTabOrder(spinBoxZoomStep, checkBoxInvertZoom);
        QWidget::setTabOrder(checkBoxInvertZoom, checkBoxAntiAliasing);
        QWidget::setTabOrder(checkBoxAntiAliasing, FloatSpinBox_EyeDistance);
        QWidget::setTabOrder(FloatSpinBox_EyeDistance, checkBoxBacklight);
        QWidget::setTabOrder(checkBoxBacklight, backlightColor);
        QWidget::setTabOrder(backlightColor, sliderIntensity);
        QWidget::setTabOrder(sliderIntensity, radioPerspective);
        QWidget::setTabOrder(radioPerspective, radioOrthographic);

        retranslateUi(Gui__Dialog__DlgSettings3DView);
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), backlightColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxBacklight, SIGNAL(toggled(bool)), sliderIntensity, SLOT(setEnabled(bool)));

        comboNavigationStyle->setCurrentIndex(-1);
        comboOrbitStyle->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettings3DView);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettings3DView)
    {
        Gui__Dialog__DlgSettings3DView->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettings3DView", "3D View", 0, QApplication::UnicodeUTF8));
        GroupBox12->setTitle(QApplication::translate("Gui::Dialog::DlgSettings3DView", "3D View settings", 0, QApplication::UnicodeUTF8));
        CheckBox_CornerCoordSystem->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Show coordinate system in the corner", 0, QApplication::UnicodeUTF8));
        CheckBox_ShowFPS->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Show counter of frames per second", 0, QApplication::UnicodeUTF8));
        CheckBox_UseAutoRotation->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Enable animation", 0, QApplication::UnicodeUTF8));
        navigationLabel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "3D Navigation", 0, QApplication::UnicodeUTF8));
        mouseButton->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Mouse...", 0, QApplication::UnicodeUTF8));
        orbitLabel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Orbit style", 0, QApplication::UnicodeUTF8));
        comboOrbitStyle->clear();
        comboOrbitStyle->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "Turntable", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettings3DView", "Trackball", 0, QApplication::UnicodeUTF8)
        );
        checkBoxZoomAtCursor->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Zoom at cursor", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Zoom step", 0, QApplication::UnicodeUTF8));
        checkBoxInvertZoom->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Invert zoom", 0, QApplication::UnicodeUTF8));
        checkBoxAntiAliasing->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Enable anti-aliasing (slower)", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Eye to eye distance for stereo modes:", 0, QApplication::UnicodeUTF8));
        backlightLabel->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Intensity of backlight", 0, QApplication::UnicodeUTF8));
        checkBoxBacklight->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Enable backlight color", 0, QApplication::UnicodeUTF8));
        groupBoxCamera->setTitle(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Camera type", 0, QApplication::UnicodeUTF8));
        radioOrthographic->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Orthographic rendering", 0, QApplication::UnicodeUTF8));
        radioPerspective->setText(QApplication::translate("Gui::Dialog::DlgSettings3DView", "Perspective rendering", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettings3DView: public Ui_DlgSettings3DView {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGS3DVIEW_H
