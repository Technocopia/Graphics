/********************************************************************************
** Form generated from reading UI file 'DlgSettingsRay.ui'
**
** Created: Thu Apr 18 07:23:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSRAY_H
#define UI_DLGSETTINGSRAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Gui/PrefWidgets.h"

namespace RaytracingGui {

class Ui_DlgSettingsRay
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox5;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel2;
    Gui::PrefDoubleSpinBox *prefFloatSpinBox1;
    Gui::PrefCheckBox *prefCheckBox8;
    Gui::PrefCheckBox *prefCheckBox9;
    QGroupBox *GroupBox12;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QLabel *textLabel1_3;
    QLabel *textLabel1_2;
    Gui::PrefFileChooser *prefFileChooser1;
    QLabel *textLabel1;
    Gui::PrefLineEdit *prefLineEdit2;
    Gui::PrefLineEdit *prefLineEdit3;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *RaytracingGui__DlgSettingsRay)
    {
        if (RaytracingGui__DlgSettingsRay->objectName().isEmpty())
            RaytracingGui__DlgSettingsRay->setObjectName(QString::fromUtf8("RaytracingGui__DlgSettingsRay"));
        RaytracingGui__DlgSettingsRay->resize(555, 311);
        gridLayout = new QGridLayout(RaytracingGui__DlgSettingsRay);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox5 = new QGroupBox(RaytracingGui__DlgSettingsRay);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        vboxLayout = new QVBoxLayout(groupBox5);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(10, 10, 10, 10);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel2 = new QLabel(groupBox5);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(textLabel2);

        prefFloatSpinBox1 = new Gui::PrefDoubleSpinBox(groupBox5);
        prefFloatSpinBox1->setObjectName(QString::fromUtf8("prefFloatSpinBox1"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(prefFloatSpinBox1->sizePolicy().hasHeightForWidth());
        prefFloatSpinBox1->setSizePolicy(sizePolicy1);
        prefFloatSpinBox1->setValue(0.1);
        prefFloatSpinBox1->setProperty("prefEntry", QVariant(QByteArray("MeshDeviation")));
        prefFloatSpinBox1->setProperty("prefPath", QVariant(QByteArray("Mod/Raytracing")));

        hboxLayout->addWidget(prefFloatSpinBox1);


        vboxLayout->addLayout(hboxLayout);

        prefCheckBox8 = new Gui::PrefCheckBox(groupBox5);
        prefCheckBox8->setObjectName(QString::fromUtf8("prefCheckBox8"));
        prefCheckBox8->setProperty("prefEntry", QVariant(QByteArray("NotWriteVertexNormals")));
        prefCheckBox8->setProperty("prefPath", QVariant(QByteArray("Mod/Raytracing")));

        vboxLayout->addWidget(prefCheckBox8);

        prefCheckBox9 = new Gui::PrefCheckBox(groupBox5);
        prefCheckBox9->setObjectName(QString::fromUtf8("prefCheckBox9"));
        prefCheckBox9->setProperty("prefEntry", QVariant(QByteArray("WriteUVCoordinates")));
        prefCheckBox9->setProperty("prefPath", QVariant(QByteArray("Mod/Raytracing")));

        vboxLayout->addWidget(prefCheckBox9);


        gridLayout->addWidget(groupBox5, 1, 0, 1, 1);

        GroupBox12 = new QGroupBox(RaytracingGui__DlgSettingsRay);
        GroupBox12->setObjectName(QString::fromUtf8("GroupBox12"));
        gridLayout1 = new QGridLayout(GroupBox12);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel1_3 = new QLabel(GroupBox12);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout2->addWidget(textLabel1_3, 2, 0, 1, 1);

        textLabel1_2 = new QLabel(GroupBox12);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

        gridLayout2->addWidget(textLabel1_2, 1, 0, 1, 1);

        prefFileChooser1 = new Gui::PrefFileChooser(GroupBox12);
        prefFileChooser1->setObjectName(QString::fromUtf8("prefFileChooser1"));
        prefFileChooser1->setFocusPolicy(Qt::StrongFocus);
        prefFileChooser1->setMode(Gui::FileChooser::Directory);
        prefFileChooser1->setProperty("prefEntry", QVariant(QByteArray("ProjectPath")));
        prefFileChooser1->setProperty("prefPath", QVariant(QByteArray("Mod/Raytracing")));

        gridLayout2->addWidget(prefFileChooser1, 0, 1, 1, 1);

        textLabel1 = new QLabel(GroupBox12);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout2->addWidget(textLabel1, 0, 0, 1, 1);

        prefLineEdit2 = new Gui::PrefLineEdit(GroupBox12);
        prefLineEdit2->setObjectName(QString::fromUtf8("prefLineEdit2"));
        prefLineEdit2->setProperty("prefEntry", QVariant(QByteArray("CameraName")));
        prefLineEdit2->setProperty("prefPath", QVariant(QByteArray("Mod/Raytracing")));

        gridLayout2->addWidget(prefLineEdit2, 1, 1, 1, 1);

        prefLineEdit3 = new Gui::PrefLineEdit(GroupBox12);
        prefLineEdit3->setObjectName(QString::fromUtf8("prefLineEdit3"));
        prefLineEdit3->setProperty("prefEntry", QVariant(QByteArray("PartName")));
        prefLineEdit3->setProperty("prefPath", QVariant(QByteArray("Mod/Raytracing")));

        gridLayout2->addWidget(prefLineEdit3, 2, 1, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);


        gridLayout->addWidget(GroupBox12, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        QWidget::setTabOrder(prefFileChooser1, prefLineEdit2);
        QWidget::setTabOrder(prefLineEdit2, prefLineEdit3);
        QWidget::setTabOrder(prefLineEdit3, prefFloatSpinBox1);
        QWidget::setTabOrder(prefFloatSpinBox1, prefCheckBox8);
        QWidget::setTabOrder(prefCheckBox8, prefCheckBox9);

        retranslateUi(RaytracingGui__DlgSettingsRay);

        QMetaObject::connectSlotsByName(RaytracingGui__DlgSettingsRay);
    } // setupUi

    void retranslateUi(QWidget *RaytracingGui__DlgSettingsRay)
    {
        RaytracingGui__DlgSettingsRay->setWindowTitle(QApplication::translate("RaytracingGui::DlgSettingsRay", "Raytracing", 0, QApplication::UnicodeUTF8));
        groupBox5->setTitle(QApplication::translate("RaytracingGui::DlgSettingsRay", "Mesh export settings", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "max mesh deviation:", 0, QApplication::UnicodeUTF8));
        prefCheckBox8->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "Do not calculate vertex normals", 0, QApplication::UnicodeUTF8));
        prefCheckBox9->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "Write u,v coordinates", 0, QApplication::UnicodeUTF8));
        GroupBox12->setTitle(QApplication::translate("RaytracingGui::DlgSettingsRay", "Directories", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "Part file name:", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "Camera file name:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "Default Project dir:", 0, QApplication::UnicodeUTF8));
        prefLineEdit2->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "TempCamera.inc", 0, QApplication::UnicodeUTF8));
        prefLineEdit3->setText(QApplication::translate("RaytracingGui::DlgSettingsRay", "TempPart.inc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace RaytracingGui

namespace RaytracingGui {
namespace Ui {
    class DlgSettingsRay: public Ui_DlgSettingsRay {};
} // namespace Ui
} // namespace RaytracingGui

#endif // UI_DLGSETTINGSRAY_H
