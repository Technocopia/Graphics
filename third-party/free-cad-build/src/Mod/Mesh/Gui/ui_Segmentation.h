/********************************************************************************
** Form generated from reading UI file 'Segmentation.ui'
**
** Created: Thu Apr 18 07:15:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMENTATION_H
#define UI_SEGMENTATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

namespace MeshGui {

class Ui_Segmentation
{
public:
    QGridLayout *gridLayout_4;
    QCheckBox *checkBoxSmooth;
    QSpinBox *smoothSteps;
    QGroupBox *groupBoxPln;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *tolPln;
    QLabel *label_2;
    QSpinBox *numPln;
    QGroupBox *groupBoxCyl;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *radCyl;
    QLabel *label_4;
    QDoubleSpinBox *tol1Cyl;
    QLabel *label_9;
    QDoubleSpinBox *tol2Cyl;
    QLabel *label_5;
    QSpinBox *numCyl;
    QGroupBox *groupBoxSph;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QDoubleSpinBox *radSph;
    QLabel *label_7;
    QDoubleSpinBox *tolSph;
    QLabel *label_8;
    QSpinBox *numSph;

    void setupUi(QWidget *MeshGui__Segmentation)
    {
        if (MeshGui__Segmentation->objectName().isEmpty())
            MeshGui__Segmentation->setObjectName(QString::fromUtf8("MeshGui__Segmentation"));
        MeshGui__Segmentation->resize(289, 379);
        gridLayout_4 = new QGridLayout(MeshGui__Segmentation);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBoxSmooth = new QCheckBox(MeshGui__Segmentation);
        checkBoxSmooth->setObjectName(QString::fromUtf8("checkBoxSmooth"));
        checkBoxSmooth->setChecked(true);

        gridLayout_4->addWidget(checkBoxSmooth, 0, 0, 1, 1);

        smoothSteps = new QSpinBox(MeshGui__Segmentation);
        smoothSteps->setObjectName(QString::fromUtf8("smoothSteps"));
        smoothSteps->setValue(3);

        gridLayout_4->addWidget(smoothSteps, 0, 1, 1, 1);

        groupBoxPln = new QGroupBox(MeshGui__Segmentation);
        groupBoxPln->setObjectName(QString::fromUtf8("groupBoxPln"));
        groupBoxPln->setCheckable(true);
        gridLayout = new QGridLayout(groupBoxPln);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBoxPln);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tolPln = new QDoubleSpinBox(groupBoxPln);
        tolPln->setObjectName(QString::fromUtf8("tolPln"));
        tolPln->setSingleStep(0.1);
        tolPln->setValue(0.1);

        gridLayout->addWidget(tolPln, 0, 1, 1, 1);

        label_2 = new QLabel(groupBoxPln);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        numPln = new QSpinBox(groupBoxPln);
        numPln->setObjectName(QString::fromUtf8("numPln"));
        numPln->setMaximum(100000);
        numPln->setValue(100);

        gridLayout->addWidget(numPln, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxPln, 1, 0, 1, 2);

        groupBoxCyl = new QGroupBox(MeshGui__Segmentation);
        groupBoxCyl->setObjectName(QString::fromUtf8("groupBoxCyl"));
        groupBoxCyl->setCheckable(true);
        gridLayout_2 = new QGridLayout(groupBoxCyl);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBoxCyl);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        radCyl = new QDoubleSpinBox(groupBoxCyl);
        radCyl->setObjectName(QString::fromUtf8("radCyl"));
        radCyl->setSingleStep(0.1);
        radCyl->setValue(5);

        gridLayout_2->addWidget(radCyl, 0, 1, 1, 1);

        label_4 = new QLabel(groupBoxCyl);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        tol1Cyl = new QDoubleSpinBox(groupBoxCyl);
        tol1Cyl->setObjectName(QString::fromUtf8("tol1Cyl"));
        tol1Cyl->setSingleStep(0.1);
        tol1Cyl->setValue(0.1);

        gridLayout_2->addWidget(tol1Cyl, 1, 1, 1, 1);

        label_9 = new QLabel(groupBoxCyl);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        tol2Cyl = new QDoubleSpinBox(groupBoxCyl);
        tol2Cyl->setObjectName(QString::fromUtf8("tol2Cyl"));
        tol2Cyl->setSingleStep(0.1);
        tol2Cyl->setValue(0.1);

        gridLayout_2->addWidget(tol2Cyl, 2, 1, 1, 1);

        label_5 = new QLabel(groupBoxCyl);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        numCyl = new QSpinBox(groupBoxCyl);
        numCyl->setObjectName(QString::fromUtf8("numCyl"));
        numCyl->setMaximum(100000);
        numCyl->setValue(100);

        gridLayout_2->addWidget(numCyl, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxCyl, 2, 0, 1, 2);

        groupBoxSph = new QGroupBox(MeshGui__Segmentation);
        groupBoxSph->setObjectName(QString::fromUtf8("groupBoxSph"));
        groupBoxSph->setCheckable(true);
        gridLayout_3 = new QGridLayout(groupBoxSph);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(groupBoxSph);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        radSph = new QDoubleSpinBox(groupBoxSph);
        radSph->setObjectName(QString::fromUtf8("radSph"));
        radSph->setSingleStep(0.1);
        radSph->setValue(5);

        gridLayout_3->addWidget(radSph, 0, 1, 1, 1);

        label_7 = new QLabel(groupBoxSph);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        tolSph = new QDoubleSpinBox(groupBoxSph);
        tolSph->setObjectName(QString::fromUtf8("tolSph"));
        tolSph->setSingleStep(0.1);
        tolSph->setValue(0.1);

        gridLayout_3->addWidget(tolSph, 1, 1, 1, 1);

        label_8 = new QLabel(groupBoxSph);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        numSph = new QSpinBox(groupBoxSph);
        numSph->setObjectName(QString::fromUtf8("numSph"));
        numSph->setMaximum(100000);
        numSph->setValue(100);

        gridLayout_3->addWidget(numSph, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxSph, 3, 0, 1, 2);


        retranslateUi(MeshGui__Segmentation);
        QObject::connect(checkBoxSmooth, SIGNAL(toggled(bool)), smoothSteps, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MeshGui__Segmentation);
    } // setupUi

    void retranslateUi(QWidget *MeshGui__Segmentation)
    {
        MeshGui__Segmentation->setWindowTitle(QApplication::translate("MeshGui::Segmentation", "Mesh segmentation", 0, QApplication::UnicodeUTF8));
        checkBoxSmooth->setText(QApplication::translate("MeshGui::Segmentation", "Smooth mesh", 0, QApplication::UnicodeUTF8));
        groupBoxPln->setTitle(QApplication::translate("MeshGui::Segmentation", "Plane", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MeshGui::Segmentation", "Tolerance", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MeshGui::Segmentation", "Minumum number of faces", 0, QApplication::UnicodeUTF8));
        groupBoxCyl->setTitle(QApplication::translate("MeshGui::Segmentation", "Cylinder", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MeshGui::Segmentation", "Radius", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MeshGui::Segmentation", "Tolerance (Flat)", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MeshGui::Segmentation", "Tolerance (Curved)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MeshGui::Segmentation", "Minimum number of faces", 0, QApplication::UnicodeUTF8));
        groupBoxSph->setTitle(QApplication::translate("MeshGui::Segmentation", "Sphere", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MeshGui::Segmentation", "Radius", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MeshGui::Segmentation", "Tolerance", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MeshGui::Segmentation", "Minimum number of faces", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class Segmentation: public Ui_Segmentation {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_SEGMENTATION_H
