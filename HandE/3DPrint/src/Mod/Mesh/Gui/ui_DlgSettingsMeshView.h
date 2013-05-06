/********************************************************************************
** Form generated from reading UI file 'DlgSettingsMeshView.ui'
**
** Created: Thu Apr 18 22:28:41 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSMESHVIEW_H
#define UI_DLGSETTINGSMESHVIEW_H

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

namespace MeshGui {

class Ui_DlgSettingsMeshView
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QSpacerItem *spacerItem;
    QLabel *labelLineColor;
    QLabel *labelMeshTransparency;
    Gui::PrefColorButton *buttonMeshColor;
    Gui::PrefSpinBox *spinLineTransparency;
    QLabel *labelFaceColor;
    Gui::PrefSpinBox *spinMeshTransparency;
    QSpacerItem *spacerItem1;
    Gui::PrefCheckBox *checkboxBoundbox;
    Gui::PrefColorButton *buttonBackfaceColor;
    Gui::PrefColorButton *buttonLineColor;
    Gui::PrefCheckBox *checkboxRendering;
    QLabel *labelLineTransparency;
    QLabel *labelBackfaceColor;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QGroupBox *GroupBox12;
    QGridLayout *gridLayout3;
    QLabel *labelAngle;
    Gui::PrefCheckBox *checkboxNormal;
    QSpacerItem *spacerItem4;
    Gui::PrefDoubleSpinBox *spinboxAngle;
    QLabel *labelHint;
    QSpacerItem *spacerItem5;

    void setupUi(QWidget *MeshGui__DlgSettingsMeshView)
    {
        if (MeshGui__DlgSettingsMeshView->objectName().isEmpty())
            MeshGui__DlgSettingsMeshView->setObjectName(QString::fromUtf8("MeshGui__DlgSettingsMeshView"));
        MeshGui__DlgSettingsMeshView->resize(559, 396);
        gridLayout = new QGridLayout(MeshGui__DlgSettingsMeshView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(MeshGui__DlgSettingsMeshView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        spacerItem = new QSpacerItem(41, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem, 1, 2, 1, 1);

        labelLineColor = new QLabel(groupBox);
        labelLineColor->setObjectName(QString::fromUtf8("labelLineColor"));

        gridLayout2->addWidget(labelLineColor, 1, 0, 1, 1);

        labelMeshTransparency = new QLabel(groupBox);
        labelMeshTransparency->setObjectName(QString::fromUtf8("labelMeshTransparency"));

        gridLayout2->addWidget(labelMeshTransparency, 0, 3, 1, 1);

        buttonMeshColor = new Gui::PrefColorButton(groupBox);
        buttonMeshColor->setObjectName(QString::fromUtf8("buttonMeshColor"));
        buttonMeshColor->setColor(QColor(204, 204, 204));
        buttonMeshColor->setProperty("prefEntry", QVariant(QByteArray("MeshColor")));
        buttonMeshColor->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(buttonMeshColor, 0, 1, 1, 1);

        spinLineTransparency = new Gui::PrefSpinBox(groupBox);
        spinLineTransparency->setObjectName(QString::fromUtf8("spinLineTransparency"));
        spinLineTransparency->setMaximum(100);
        spinLineTransparency->setProperty("prefEntry", QVariant(QByteArray("LineTransparency")));
        spinLineTransparency->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(spinLineTransparency, 1, 4, 1, 1);

        labelFaceColor = new QLabel(groupBox);
        labelFaceColor->setObjectName(QString::fromUtf8("labelFaceColor"));

        gridLayout2->addWidget(labelFaceColor, 0, 0, 1, 1);

        spinMeshTransparency = new Gui::PrefSpinBox(groupBox);
        spinMeshTransparency->setObjectName(QString::fromUtf8("spinMeshTransparency"));
        spinMeshTransparency->setMaximum(100);
        spinMeshTransparency->setProperty("prefEntry", QVariant(QByteArray("MeshTransparency")));
        spinMeshTransparency->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(spinMeshTransparency, 0, 4, 1, 1);

        spacerItem1 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 2, 2, 1, 3);

        checkboxBoundbox = new Gui::PrefCheckBox(groupBox);
        checkboxBoundbox->setObjectName(QString::fromUtf8("checkboxBoundbox"));
        checkboxBoundbox->setChecked(false);
        checkboxBoundbox->setProperty("prefEntry", QVariant(QByteArray("ShowBoundingBox")));
        checkboxBoundbox->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(checkboxBoundbox, 3, 1, 1, 4);

        buttonBackfaceColor = new Gui::PrefColorButton(groupBox);
        buttonBackfaceColor->setObjectName(QString::fromUtf8("buttonBackfaceColor"));
        buttonBackfaceColor->setEnabled(false);
        buttonBackfaceColor->setColor(QColor(204, 204, 204));
        buttonBackfaceColor->setProperty("prefEntry", QVariant(QByteArray("BackfaceColor")));
        buttonBackfaceColor->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(buttonBackfaceColor, 2, 1, 1, 1);

        buttonLineColor = new Gui::PrefColorButton(groupBox);
        buttonLineColor->setObjectName(QString::fromUtf8("buttonLineColor"));
        buttonLineColor->setColor(QColor(0, 0, 0));
        buttonLineColor->setProperty("prefEntry", QVariant(QByteArray("LineColor")));
        buttonLineColor->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(buttonLineColor, 1, 1, 1, 1);

        checkboxRendering = new Gui::PrefCheckBox(groupBox);
        checkboxRendering->setObjectName(QString::fromUtf8("checkboxRendering"));
        checkboxRendering->setChecked(false);
        checkboxRendering->setProperty("prefEntry", QVariant(QByteArray("TwoSideRendering")));
        checkboxRendering->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout2->addWidget(checkboxRendering, 3, 0, 1, 1);

        labelLineTransparency = new QLabel(groupBox);
        labelLineTransparency->setObjectName(QString::fromUtf8("labelLineTransparency"));

        gridLayout2->addWidget(labelLineTransparency, 1, 3, 1, 1);

        labelBackfaceColor = new QLabel(groupBox);
        labelBackfaceColor->setObjectName(QString::fromUtf8("labelBackfaceColor"));

        gridLayout2->addWidget(labelBackfaceColor, 2, 0, 1, 1);

        spacerItem2 = new QSpacerItem(41, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 0, 2, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(71, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        GroupBox12 = new QGroupBox(MeshGui__DlgSettingsMeshView);
        GroupBox12->setObjectName(QString::fromUtf8("GroupBox12"));
        gridLayout3 = new QGridLayout(GroupBox12);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        labelAngle = new QLabel(GroupBox12);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));

        gridLayout3->addWidget(labelAngle, 1, 0, 1, 1);

        checkboxNormal = new Gui::PrefCheckBox(GroupBox12);
        checkboxNormal->setObjectName(QString::fromUtf8("checkboxNormal"));
        checkboxNormal->setProperty("prefEntry", QVariant(QByteArray("VertexPerNormals")));
        checkboxNormal->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout3->addWidget(checkboxNormal, 0, 0, 1, 1);

        spacerItem4 = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem4, 1, 2, 1, 1);

        spinboxAngle = new Gui::PrefDoubleSpinBox(GroupBox12);
        spinboxAngle->setObjectName(QString::fromUtf8("spinboxAngle"));
        spinboxAngle->setEnabled(false);
        spinboxAngle->setMaximum(180);
        spinboxAngle->setProperty("prefEntry", QVariant(QByteArray("CreaseAngle")));
        spinboxAngle->setProperty("prefPath", QVariant(QByteArray("Mod/Mesh")));

        gridLayout3->addWidget(spinboxAngle, 1, 1, 1, 1);

        labelHint = new QLabel(GroupBox12);
        labelHint->setObjectName(QString::fromUtf8("labelHint"));

        gridLayout3->addWidget(labelHint, 2, 0, 1, 3);


        gridLayout->addWidget(GroupBox12, 1, 0, 1, 1);

        spacerItem5 = new QSpacerItem(541, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem5, 2, 0, 1, 1);

        QWidget::setTabOrder(buttonMeshColor, buttonLineColor);
        QWidget::setTabOrder(buttonLineColor, buttonBackfaceColor);
        QWidget::setTabOrder(buttonBackfaceColor, spinMeshTransparency);
        QWidget::setTabOrder(spinMeshTransparency, spinLineTransparency);
        QWidget::setTabOrder(spinLineTransparency, checkboxRendering);
        QWidget::setTabOrder(checkboxRendering, checkboxBoundbox);
        QWidget::setTabOrder(checkboxBoundbox, checkboxNormal);
        QWidget::setTabOrder(checkboxNormal, spinboxAngle);

        retranslateUi(MeshGui__DlgSettingsMeshView);
        QObject::connect(checkboxNormal, SIGNAL(toggled(bool)), spinboxAngle, SLOT(setEnabled(bool)));
        QObject::connect(checkboxRendering, SIGNAL(toggled(bool)), buttonBackfaceColor, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MeshGui__DlgSettingsMeshView);
    } // setupUi

    void retranslateUi(QWidget *MeshGui__DlgSettingsMeshView)
    {
        MeshGui__DlgSettingsMeshView->setWindowTitle(QApplication::translate("MeshGui::DlgSettingsMeshView", "Mesh view", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MeshGui::DlgSettingsMeshView", "Default appearance for new meshes", 0, QApplication::UnicodeUTF8));
        labelLineColor->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Default line color", 0, QApplication::UnicodeUTF8));
        labelMeshTransparency->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Mesh transparency", 0, QApplication::UnicodeUTF8));
        labelFaceColor->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Default mesh color", 0, QApplication::UnicodeUTF8));
        checkboxBoundbox->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Show bounding-box for highlighted or selected meshes", 0, QApplication::UnicodeUTF8));
        checkboxRendering->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Two-side rendering", 0, QApplication::UnicodeUTF8));
        labelLineTransparency->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Line transparency", 0, QApplication::UnicodeUTF8));
        labelBackfaceColor->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Backface color", 0, QApplication::UnicodeUTF8));
        GroupBox12->setTitle(QApplication::translate("MeshGui::DlgSettingsMeshView", "Smoothing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelAngle->setToolTip(QApplication::translate("MeshGui::DlgSettingsMeshView", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">This is the smallest angle between two faces where normals get calculated to do flat shading.</p><p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">If the angle between the normals of two neighbouring faces is less than the crease angle, the faces will be smoothshaded around their common edge.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelAngle->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Crease angle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkboxNormal->setToolTip(QApplication::translate("MeshGui::DlgSettingsMeshView", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Flat shading/Phong shading</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Defines the appearance of surfaces.</p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px; font-size:8pt;\">With flat shading the surface normals are not defined per vertex that leads to a unreal appearance for curved surfaces while using Phong shading leads to a smoother appearance. </p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">If this option is set Phong shading is used, if it is unset flat shading is used.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkboxNormal->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "Define normal per vertex", 0, QApplication::UnicodeUTF8));
        spinboxAngle->setSuffix(QApplication::translate("MeshGui::DlgSettingsMeshView", " \302\260", 0, QApplication::UnicodeUTF8));
        labelHint->setText(QApplication::translate("MeshGui::DlgSettingsMeshView", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Hint</span></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Defining the normals per vertex is also called <span style=\" font-style:italic;\">Phong shading</span></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-style:italic;\"><span style=\" font-style:normal;\">while defining the normals per face is called </span>Flat shading<span style=\" font-style:normal;\">.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class DlgSettingsMeshView: public Ui_DlgSettingsMeshView {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_DLGSETTINGSMESHVIEW_H
