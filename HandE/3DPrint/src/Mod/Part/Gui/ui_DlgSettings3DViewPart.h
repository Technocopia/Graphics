/********************************************************************************
** Form generated from reading UI file 'DlgSettings3DViewPart.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGS3DVIEWPART_H
#define UI_DLGSETTINGS3DVIEWPART_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"

namespace PartGui {

class Ui_DlgSettings3DViewPart
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QGroupBox *GroupBox12;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    Gui::PrefCheckBox *prefCheckBox8;
    QLabel *textLabel1;
    QLabel *label;
    QLabel *textLabel1_3_3_2;
    Gui::PrefDoubleSpinBox *maxDeviation;
    Gui::PrefCheckBox *prefCheckBox3;
    QFrame *line2;
    QLabel *textLabel1_3;
    QFrame *line2_2_2;

    void setupUi(QWidget *PartGui__DlgSettings3DViewPart)
    {
        if (PartGui__DlgSettings3DViewPart->objectName().isEmpty())
            PartGui__DlgSettings3DViewPart->setObjectName(QString::fromUtf8("PartGui__DlgSettings3DViewPart"));
        PartGui__DlgSettings3DViewPart->resize(610, 339);
        gridLayout = new QGridLayout(PartGui__DlgSettings3DViewPart);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        GroupBox12 = new QGroupBox(PartGui__DlgSettings3DViewPart);
        GroupBox12->setObjectName(QString::fromUtf8("GroupBox12"));
        gridLayout1 = new QGridLayout(GroupBox12);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        prefCheckBox8 = new Gui::PrefCheckBox(GroupBox12);
        prefCheckBox8->setObjectName(QString::fromUtf8("prefCheckBox8"));
        prefCheckBox8->setProperty("prefEntry", QVariant(QByteArray("NoPerVertexNormals")));
        prefCheckBox8->setProperty("prefPath", QVariant(QByteArray("Mod/Part")));

        gridLayout2->addWidget(prefCheckBox8, 4, 0, 1, 3);

        textLabel1 = new QLabel(GroupBox12);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout2->addWidget(textLabel1, 1, 0, 2, 2);

        label = new QLabel(GroupBox12);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 6, 0, 1, 4);

        textLabel1_3_3_2 = new QLabel(GroupBox12);
        textLabel1_3_3_2->setObjectName(QString::fromUtf8("textLabel1_3_3_2"));

        gridLayout2->addWidget(textLabel1_3_3_2, 3, 0, 1, 1);

        maxDeviation = new Gui::PrefDoubleSpinBox(GroupBox12);
        maxDeviation->setObjectName(QString::fromUtf8("maxDeviation"));
        maxDeviation->setDecimals(4);
        maxDeviation->setMinimum(0.0001);
        maxDeviation->setMaximum(100);
        maxDeviation->setSingleStep(0.01);
        maxDeviation->setValue(0.5);
        maxDeviation->setProperty("prefEntry", QVariant(QByteArray("MeshDeviation")));
        maxDeviation->setProperty("prefPath", QVariant(QByteArray("Mod/Part")));

        gridLayout2->addWidget(maxDeviation, 2, 3, 1, 1);

        prefCheckBox3 = new Gui::PrefCheckBox(GroupBox12);
        prefCheckBox3->setObjectName(QString::fromUtf8("prefCheckBox3"));
        prefCheckBox3->setProperty("prefEntry", QVariant(QByteArray("QualityNormals")));
        prefCheckBox3->setProperty("prefPath", QVariant(QByteArray("Mod/Part")));

        gridLayout2->addWidget(prefCheckBox3, 5, 0, 1, 3);

        line2 = new QFrame(GroupBox12);
        line2->setObjectName(QString::fromUtf8("line2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line2->sizePolicy().hasHeightForWidth());
        line2->setSizePolicy(sizePolicy);
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);
        line2->setFrameShape(QFrame::HLine);

        gridLayout2->addWidget(line2, 0, 2, 2, 2);

        textLabel1_3 = new QLabel(GroupBox12);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout2->addWidget(textLabel1_3, 0, 0, 1, 2);

        line2_2_2 = new QFrame(GroupBox12);
        line2_2_2->setObjectName(QString::fromUtf8("line2_2_2"));
        sizePolicy.setHeightForWidth(line2_2_2->sizePolicy().hasHeightForWidth());
        line2_2_2->setSizePolicy(sizePolicy);
        line2_2_2->setFrameShape(QFrame::HLine);
        line2_2_2->setFrameShadow(QFrame::Sunken);
        line2_2_2->setFrameShape(QFrame::HLine);

        gridLayout2->addWidget(line2_2_2, 3, 1, 1, 3);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);


        gridLayout->addWidget(GroupBox12, 0, 0, 1, 1);


        retranslateUi(PartGui__DlgSettings3DViewPart);

        QMetaObject::connectSlotsByName(PartGui__DlgSettings3DViewPart);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgSettings3DViewPart)
    {
        PartGui__DlgSettings3DViewPart->setWindowTitle(QApplication::translate("PartGui::DlgSettings3DViewPart", "Shape view", 0, QApplication::UnicodeUTF8));
        GroupBox12->setTitle(QApplication::translate("PartGui::DlgSettings3DViewPart", "Tessellation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        prefCheckBox8->setToolTip(QApplication::translate("PartGui::DlgSettings3DViewPart", "Defines the appearance of surfaces", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        prefCheckBox8->setWhatsThis(QApplication::translate("PartGui::DlgSettings3DViewPart", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Flat shading/Phong shading</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">With flat shading the surface normals are not defined per vertex that leads to a unreal appearance for curved surfaces while using Phong shading leads to a smoother appearance. </p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p><p style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If this option is unset Phong shading is used, if it is set flat shading is used.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        prefCheckBox8->setText(QApplication::translate("PartGui::DlgSettings3DViewPart", "Do not define normal per vertex", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textLabel1->setToolTip(QApplication::translate("PartGui::DlgSettings3DViewPart", "Defines the deviation of tessellation to the actual surface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(QApplication::translate("PartGui::DlgSettings3DViewPart", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Tessellation</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><span style=\" font-weight:400;\">Defines the maximum deviation of the tessellated mesh to the surface. The smaller the value is the slower the render speed and the nicer the appearance are.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(QApplication::translate("PartGui::DlgSettings3DViewPart", "Maximum deviation depending on the model bounding box", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::DlgSettings3DViewPart", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><span style=\" font-weight:600;\">Hint</span></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Defining the normals per vertex is also called <span style=\" font-style:italic;\">Phong shading</span></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-style:italic;\"><span style=\" font-style:normal;\">while defining the normals per face is called </span>Flat shading<span style=\" font-style:normal;\">.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textLabel1_3_3_2->setText(QApplication::translate("PartGui::DlgSettings3DViewPart", "View smoothing", 0, QApplication::UnicodeUTF8));
        maxDeviation->setSuffix(QApplication::translate("PartGui::DlgSettings3DViewPart", " %", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        prefCheckBox3->setToolTip(QApplication::translate("PartGui::DlgSettings3DViewPart", "This will slow down render speed but will lead to nicer results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        prefCheckBox3->setWhatsThis(QApplication::translate("PartGui::DlgSettings3DViewPart", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:MS Shell Dlg 2; font-size:7.8pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">High-quality normals</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This will slow down render speed but will lead to nicer results.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        prefCheckBox3->setText(QApplication::translate("PartGui::DlgSettings3DViewPart", "Using high-quality normals", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("PartGui::DlgSettings3DViewPart", "View accuracy / Performance", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgSettings3DViewPart: public Ui_DlgSettings3DViewPart {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGSETTINGS3DVIEWPART_H
