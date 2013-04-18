/********************************************************************************
** Form generated from reading UI file 'DlgSettingsViewColor.ui'
**
** Created: Thu Apr 18 07:04:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSVIEWCOLOR_H
#define UI_DLGSETTINGSVIEWCOLOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsViewColor
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxSelection;
    QGridLayout *gridLayout1;
    QSpacerItem *spacer_4;
    QGridLayout *_3;
    Gui::PrefColorButton *SelectionColor;
    Gui::PrefCheckBox *checkBoxSelection;
    Gui::PrefCheckBox *checkBoxPreselection;
    Gui::PrefColorButton *HighlightColor;
    QGroupBox *groupBoxColor;
    QGridLayout *gridLayout2;
    QSpacerItem *spacer;
    QGridLayout *_4;
    QSpacerItem *spacer_2;
    Gui::PrefColorButton *SelectionColor_Background;
    Gui::PrefCheckBox *checkMidColor;
    Gui::PrefColorButton *backgroundColorTo;
    Gui::PrefColorButton *backgroundColorMid;
    Gui::PrefRadioButton *radioButtonGradient;
    Gui::PrefColorButton *backgroundColorFrom;
    Gui::PrefRadioButton *radioButtonSimple;
    QSpacerItem *spacer_3;
    QGroupBox *groupBoxDefaultColors;
    QGridLayout *colgridLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    Gui::PrefColorButton *ConstructionColor;
    Gui::PrefColorButton *FullyConstrainedColor;
    Gui::PrefColorButton *EditedVertexColor;
    Gui::PrefColorButton *EditedEdgeColor;
    QLabel *label_5;
    Gui::PrefColorButton *CursorTextColor;
    QGridLayout *_1;
    QLabel *label_6;
    Gui::PrefColorButton *DefaultShapeColor;
    QGridLayout *_5;
    QLabel *label_7;
    Gui::PrefColorButton *DefaultShapeLineColor;
    Gui::PrefSpinBox *DefaultShapeLineWidth;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsViewColor)
    {
        if (Gui__Dialog__DlgSettingsViewColor->objectName().isEmpty())
            Gui__Dialog__DlgSettingsViewColor->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsViewColor"));
        Gui__Dialog__DlgSettingsViewColor->resize(601, 565);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettingsViewColor);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxSelection = new QGroupBox(Gui__Dialog__DlgSettingsViewColor);
        groupBoxSelection->setObjectName(QString::fromUtf8("groupBoxSelection"));
        gridLayout1 = new QGridLayout(groupBoxSelection);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacer_4 = new QSpacerItem(183, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer_4, 0, 1, 1, 1);

        _3 = new QGridLayout();
#ifndef Q_OS_MAC
        _3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _3->setContentsMargins(0, 0, 0, 0);
#endif
        _3->setObjectName(QString::fromUtf8("_3"));
        SelectionColor = new Gui::PrefColorButton(groupBoxSelection);
        SelectionColor->setObjectName(QString::fromUtf8("SelectionColor"));
        SelectionColor->setEnabled(false);
        SelectionColor->setColor(QColor(28, 173, 28));
        SelectionColor->setProperty("prefEntry", QVariant(QByteArray("SelectionColor")));
        SelectionColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(SelectionColor, 1, 1, 1, 1);

        checkBoxSelection = new Gui::PrefCheckBox(groupBoxSelection);
        checkBoxSelection->setObjectName(QString::fromUtf8("checkBoxSelection"));
        checkBoxSelection->setChecked(true);
        checkBoxSelection->setProperty("prefEntry", QVariant(QByteArray("EnableSelection")));
        checkBoxSelection->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(checkBoxSelection, 1, 0, 1, 1);

        checkBoxPreselection = new Gui::PrefCheckBox(groupBoxSelection);
        checkBoxPreselection->setObjectName(QString::fromUtf8("checkBoxPreselection"));
        checkBoxPreselection->setMinimumSize(QSize(240, 0));
        checkBoxPreselection->setChecked(true);
        checkBoxPreselection->setProperty("prefEntry", QVariant(QByteArray("EnablePreselection")));
        checkBoxPreselection->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(checkBoxPreselection, 0, 0, 1, 1);

        HighlightColor = new Gui::PrefColorButton(groupBoxSelection);
        HighlightColor->setObjectName(QString::fromUtf8("HighlightColor"));
        HighlightColor->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HighlightColor->sizePolicy().hasHeightForWidth());
        HighlightColor->setSizePolicy(sizePolicy);
        HighlightColor->setColor(QColor(225, 225, 20));
        HighlightColor->setProperty("prefEntry", QVariant(QByteArray("HighlightColor")));
        HighlightColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _3->addWidget(HighlightColor, 0, 1, 1, 1);


        gridLayout1->addLayout(_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxSelection, 0, 0, 1, 1);

        groupBoxColor = new QGroupBox(Gui__Dialog__DlgSettingsViewColor);
        groupBoxColor->setObjectName(QString::fromUtf8("groupBoxColor"));
        gridLayout2 = new QGridLayout(groupBoxColor);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer, 0, 1, 1, 1);

        _4 = new QGridLayout();
#ifndef Q_OS_MAC
        _4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _4->setContentsMargins(0, 0, 0, 0);
#endif
        _4->setObjectName(QString::fromUtf8("_4"));
        spacer_2 = new QSpacerItem(171, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        _4->addItem(spacer_2, 2, 0, 1, 1);

        SelectionColor_Background = new Gui::PrefColorButton(groupBoxColor);
        SelectionColor_Background->setObjectName(QString::fromUtf8("SelectionColor_Background"));
        SelectionColor_Background->setEnabled(false);
        sizePolicy.setHeightForWidth(SelectionColor_Background->sizePolicy().hasHeightForWidth());
        SelectionColor_Background->setSizePolicy(sizePolicy);
        SelectionColor_Background->setColor(QColor(20, 20, 163));
        SelectionColor_Background->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor")));
        SelectionColor_Background->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(SelectionColor_Background, 0, 1, 1, 1);

        checkMidColor = new Gui::PrefCheckBox(groupBoxColor);
        checkMidColor->setObjectName(QString::fromUtf8("checkMidColor"));
        checkMidColor->setProperty("prefEntry", QVariant(QByteArray("UseBackgroundColorMid")));
        checkMidColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(checkMidColor, 3, 0, 1, 1);

        backgroundColorTo = new Gui::PrefColorButton(groupBoxColor);
        backgroundColorTo->setObjectName(QString::fromUtf8("backgroundColorTo"));
        backgroundColorTo->setColor(QColor(151, 151, 170));
        backgroundColorTo->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor3")));
        backgroundColorTo->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(backgroundColorTo, 2, 1, 1, 1);

        backgroundColorMid = new Gui::PrefColorButton(groupBoxColor);
        backgroundColorMid->setObjectName(QString::fromUtf8("backgroundColorMid"));
        backgroundColorMid->setEnabled(false);
        backgroundColorMid->setColor(QColor(111, 111, 147));
        backgroundColorMid->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor4")));
        backgroundColorMid->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(backgroundColorMid, 3, 1, 1, 1);

        radioButtonGradient = new Gui::PrefRadioButton(groupBoxColor);
        radioButtonGradient->setObjectName(QString::fromUtf8("radioButtonGradient"));
        radioButtonGradient->setChecked(true);
        radioButtonGradient->setProperty("prefEntry", QVariant(QByteArray("Gradient")));
        radioButtonGradient->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(radioButtonGradient, 1, 0, 1, 1);

        backgroundColorFrom = new Gui::PrefColorButton(groupBoxColor);
        backgroundColorFrom->setObjectName(QString::fromUtf8("backgroundColorFrom"));
        backgroundColorFrom->setColor(QColor(51, 51, 101));
        backgroundColorFrom->setProperty("prefEntry", QVariant(QByteArray("BackgroundColor2")));
        backgroundColorFrom->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(backgroundColorFrom, 1, 1, 1, 1);

        radioButtonSimple = new Gui::PrefRadioButton(groupBoxColor);
        radioButtonSimple->setObjectName(QString::fromUtf8("radioButtonSimple"));
        radioButtonSimple->setMinimumSize(QSize(240, 0));
        radioButtonSimple->setProperty("prefEntry", QVariant(QByteArray("Simple")));
        radioButtonSimple->setProperty("prefPath", QVariant(QByteArray("View")));

        _4->addWidget(radioButtonSimple, 0, 0, 1, 1);


        gridLayout2->addLayout(_4, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxColor, 2, 0, 1, 1);

        spacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer_3, 3, 0, 1, 1);

        groupBoxDefaultColors = new QGroupBox(Gui__Dialog__DlgSettingsViewColor);
        groupBoxDefaultColors->setObjectName(QString::fromUtf8("groupBoxDefaultColors"));
        colgridLayout = new QGridLayout(groupBoxDefaultColors);
        colgridLayout->setObjectName(QString::fromUtf8("colgridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        colgridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        _2 = new QGridLayout();
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _2->setContentsMargins(0, 0, 0, 0);
#endif
        _2->setObjectName(QString::fromUtf8("_2"));
        label = new QLabel(groupBoxDefaultColors);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(240, 0));

        _2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBoxDefaultColors);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBoxDefaultColors);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        _2->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(groupBoxDefaultColors);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        _2->addWidget(label_4, 4, 0, 1, 1);

        ConstructionColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        ConstructionColor->setObjectName(QString::fromUtf8("ConstructionColor"));
        ConstructionColor->setColor(QColor(0, 0, 220));
        ConstructionColor->setProperty("prefEntry", QVariant(QByteArray("ConstructionColor")));
        ConstructionColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _2->addWidget(ConstructionColor, 3, 1, 1, 1);

        FullyConstrainedColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        FullyConstrainedColor->setObjectName(QString::fromUtf8("FullyConstrainedColor"));
        FullyConstrainedColor->setColor(QColor(0, 255, 0));
        FullyConstrainedColor->setProperty("prefEntry", QVariant(QByteArray("FullyConstrainedColor")));
        FullyConstrainedColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _2->addWidget(FullyConstrainedColor, 4, 1, 1, 1);

        EditedVertexColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        EditedVertexColor->setObjectName(QString::fromUtf8("EditedVertexColor"));
        EditedVertexColor->setColor(QColor(255, 38, 0));
        EditedVertexColor->setProperty("prefEntry", QVariant(QByteArray("EditedVertexColor")));
        EditedVertexColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _2->addWidget(EditedVertexColor, 2, 1, 1, 1);

        EditedEdgeColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        EditedEdgeColor->setObjectName(QString::fromUtf8("EditedEdgeColor"));
        EditedEdgeColor->setColor(QColor(255, 255, 255));
        EditedEdgeColor->setProperty("prefEntry", QVariant(QByteArray("EditedEdgeColor")));
        EditedEdgeColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _2->addWidget(EditedEdgeColor, 1, 1, 1, 1);

        label_5 = new QLabel(groupBoxDefaultColors);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        _2->addWidget(label_5, 0, 0, 1, 1);

        CursorTextColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        CursorTextColor->setObjectName(QString::fromUtf8("CursorTextColor"));
        CursorTextColor->setColor(QColor(0, 0, 255));
        CursorTextColor->setProperty("prefEntry", QVariant(QByteArray("CursorTextColor")));
        CursorTextColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _2->addWidget(CursorTextColor, 0, 1, 1, 1);


        colgridLayout->addLayout(_2, 2, 0, 1, 1);

        _1 = new QGridLayout();
        _1->setObjectName(QString::fromUtf8("_1"));
        label_6 = new QLabel(groupBoxDefaultColors);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(240, 0));

        _1->addWidget(label_6, 0, 0, 1, 1);

        DefaultShapeColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultShapeColor->setObjectName(QString::fromUtf8("DefaultShapeColor"));
        DefaultShapeColor->setColor(QColor(204, 204, 204));
        DefaultShapeColor->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeColor")));
        DefaultShapeColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _1->addWidget(DefaultShapeColor, 0, 1, 1, 1);


        colgridLayout->addLayout(_1, 0, 0, 1, 1);

        _5 = new QGridLayout();
        _5->setObjectName(QString::fromUtf8("_5"));
        label_7 = new QLabel(groupBoxDefaultColors);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(182, 0));

        _5->addWidget(label_7, 0, 0, 1, 1);

        DefaultShapeLineColor = new Gui::PrefColorButton(groupBoxDefaultColors);
        DefaultShapeLineColor->setObjectName(QString::fromUtf8("DefaultShapeLineColor"));
        DefaultShapeLineColor->setColor(QColor(25, 25, 25));
        DefaultShapeLineColor->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeLineColor")));
        DefaultShapeLineColor->setProperty("prefPath", QVariant(QByteArray("View")));

        _5->addWidget(DefaultShapeLineColor, 0, 2, 1, 1);

        DefaultShapeLineWidth = new Gui::PrefSpinBox(groupBoxDefaultColors);
        DefaultShapeLineWidth->setObjectName(QString::fromUtf8("DefaultShapeLineWidth"));
        DefaultShapeLineWidth->setValue(2);
        DefaultShapeLineWidth->setProperty("prefEntry", QVariant(QByteArray("DefaultShapeLineWidth")));
        DefaultShapeLineWidth->setProperty("prefPath", QVariant(QByteArray("View")));

        _5->addWidget(DefaultShapeLineWidth, 0, 1, 1, 1);


        colgridLayout->addLayout(_5, 1, 0, 1, 1);


        gridLayout->addWidget(groupBoxDefaultColors, 1, 0, 1, 1);

        QWidget::setTabOrder(checkBoxPreselection, checkBoxSelection);
        QWidget::setTabOrder(checkBoxSelection, HighlightColor);
        QWidget::setTabOrder(HighlightColor, SelectionColor);
        QWidget::setTabOrder(SelectionColor, DefaultShapeColor);
        QWidget::setTabOrder(DefaultShapeColor, DefaultShapeLineWidth);
        QWidget::setTabOrder(DefaultShapeLineWidth, DefaultShapeLineColor);
        QWidget::setTabOrder(DefaultShapeLineColor, CursorTextColor);
        QWidget::setTabOrder(CursorTextColor, EditedEdgeColor);
        QWidget::setTabOrder(EditedEdgeColor, EditedVertexColor);
        QWidget::setTabOrder(EditedVertexColor, ConstructionColor);
        QWidget::setTabOrder(ConstructionColor, FullyConstrainedColor);
        QWidget::setTabOrder(FullyConstrainedColor, radioButtonSimple);
        QWidget::setTabOrder(radioButtonSimple, SelectionColor_Background);
        QWidget::setTabOrder(SelectionColor_Background, radioButtonGradient);
        QWidget::setTabOrder(radioButtonGradient, backgroundColorFrom);
        QWidget::setTabOrder(backgroundColorFrom, backgroundColorTo);
        QWidget::setTabOrder(backgroundColorTo, checkMidColor);
        QWidget::setTabOrder(checkMidColor, backgroundColorMid);

        retranslateUi(Gui__Dialog__DlgSettingsViewColor);
        QObject::connect(checkBoxPreselection, SIGNAL(toggled(bool)), HighlightColor, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxSelection, SIGNAL(toggled(bool)), SelectionColor, SLOT(setEnabled(bool)));
        QObject::connect(checkMidColor, SIGNAL(toggled(bool)), backgroundColorMid, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonSimple, SIGNAL(toggled(bool)), SelectionColor_Background, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonGradient, SIGNAL(toggled(bool)), backgroundColorFrom, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonGradient, SIGNAL(toggled(bool)), backgroundColorTo, SLOT(setEnabled(bool)));
        QObject::connect(radioButtonSimple, SIGNAL(toggled(bool)), checkMidColor, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsViewColor);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsViewColor)
    {
        Gui__Dialog__DlgSettingsViewColor->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Colors", 0, QApplication::UnicodeUTF8));
        groupBoxSelection->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Selection", 0, QApplication::UnicodeUTF8));
        SelectionColor->setText(QString());
        checkBoxSelection->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Enable selection highlighting", 0, QApplication::UnicodeUTF8));
        checkBoxPreselection->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Enable preselection highlighting", 0, QApplication::UnicodeUTF8));
        HighlightColor->setText(QString());
        groupBoxColor->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Background color", 0, QApplication::UnicodeUTF8));
        SelectionColor_Background->setText(QString());
        checkMidColor->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Middle color", 0, QApplication::UnicodeUTF8));
        backgroundColorTo->setText(QString());
        backgroundColorMid->setText(QString());
        radioButtonGradient->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Color gradient", 0, QApplication::UnicodeUTF8));
        backgroundColorFrom->setText(QString());
        radioButtonSimple->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Simple color", 0, QApplication::UnicodeUTF8));
        groupBoxDefaultColors->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Default colors", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Edited edge color", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Edited vertex color", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Construction geometry", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Fully constrained geometry", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ConstructionColor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The color of construction geometry in edit mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FullyConstrainedColor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The color of fully constrained geometry in edit mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        EditedVertexColor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The color of vertices being edited", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        EditedEdgeColor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The color of edges being edited", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Cursor text color", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Default shape color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DefaultShapeColor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The default color for new shapes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "Default line width and color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DefaultShapeLineColor->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The default line color for new shapes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        DefaultShapeLineWidth->setToolTip(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "The default line thickness for new shapes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DefaultShapeLineWidth->setSuffix(QApplication::translate("Gui::Dialog::DlgSettingsViewColor", "px", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsViewColor: public Ui_DlgSettingsViewColor {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSVIEWCOLOR_H
