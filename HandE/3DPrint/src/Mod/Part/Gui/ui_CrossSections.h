/********************************************************************************
** Form generated from reading UI file 'CrossSections.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROSSSECTIONS_H
#define UI_CROSSSECTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>

namespace PartGui {

class Ui_CrossSections
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *planeBox;
    QGridLayout *gridLayout;
    QRadioButton *xyPlane;
    QRadioButton *xzPlane;
    QRadioButton *yzPlane;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *position;
    QGroupBox *sectionsBox;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBothSides;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpinBox *countSections;
    QLabel *label_2;
    QDoubleSpinBox *distance;

    void setupUi(QDialog *PartGui__CrossSections)
    {
        if (PartGui__CrossSections->objectName().isEmpty())
            PartGui__CrossSections->setObjectName(QString::fromUtf8("PartGui__CrossSections"));
        PartGui__CrossSections->resize(235, 240);
        gridLayout_4 = new QGridLayout(PartGui__CrossSections);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        planeBox = new QGroupBox(PartGui__CrossSections);
        planeBox->setObjectName(QString::fromUtf8("planeBox"));
        gridLayout = new QGridLayout(planeBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        xyPlane = new QRadioButton(planeBox);
        xyPlane->setObjectName(QString::fromUtf8("xyPlane"));
        xyPlane->setChecked(true);

        gridLayout->addWidget(xyPlane, 0, 0, 1, 1);

        xzPlane = new QRadioButton(planeBox);
        xzPlane->setObjectName(QString::fromUtf8("xzPlane"));

        gridLayout->addWidget(xzPlane, 0, 1, 1, 1);

        yzPlane = new QRadioButton(planeBox);
        yzPlane->setObjectName(QString::fromUtf8("yzPlane"));

        gridLayout->addWidget(yzPlane, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(planeBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        position = new QDoubleSpinBox(planeBox);
        position->setObjectName(QString::fromUtf8("position"));
        position->setDecimals(4);

        horizontalLayout->addWidget(position);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);


        gridLayout_4->addWidget(planeBox, 0, 0, 1, 1);

        sectionsBox = new QGroupBox(PartGui__CrossSections);
        sectionsBox->setObjectName(QString::fromUtf8("sectionsBox"));
        sectionsBox->setCheckable(true);
        sectionsBox->setChecked(false);
        gridLayout_3 = new QGridLayout(sectionsBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBothSides = new QCheckBox(sectionsBox);
        checkBothSides->setObjectName(QString::fromUtf8("checkBothSides"));

        gridLayout_3->addWidget(checkBothSides, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(sectionsBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        countSections = new QSpinBox(sectionsBox);
        countSections->setObjectName(QString::fromUtf8("countSections"));
        countSections->setMinimum(1);
        countSections->setMaximum(2000000);

        gridLayout_2->addWidget(countSections, 0, 1, 1, 1);

        label_2 = new QLabel(sectionsBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        distance = new QDoubleSpinBox(sectionsBox);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setDecimals(4);

        gridLayout_2->addWidget(distance, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(sectionsBox, 1, 0, 1, 1);

        QWidget::setTabOrder(xyPlane, xzPlane);
        QWidget::setTabOrder(xzPlane, yzPlane);
        QWidget::setTabOrder(yzPlane, position);
        QWidget::setTabOrder(position, sectionsBox);
        QWidget::setTabOrder(sectionsBox, checkBothSides);
        QWidget::setTabOrder(checkBothSides, countSections);
        QWidget::setTabOrder(countSections, distance);

        retranslateUi(PartGui__CrossSections);

        QMetaObject::connectSlotsByName(PartGui__CrossSections);
    } // setupUi

    void retranslateUi(QDialog *PartGui__CrossSections)
    {
        PartGui__CrossSections->setWindowTitle(QApplication::translate("PartGui::CrossSections", "Cross sections", 0, QApplication::UnicodeUTF8));
        planeBox->setTitle(QApplication::translate("PartGui::CrossSections", "Guiding plane", 0, QApplication::UnicodeUTF8));
        xyPlane->setText(QApplication::translate("PartGui::CrossSections", "XY", 0, QApplication::UnicodeUTF8));
        xzPlane->setText(QApplication::translate("PartGui::CrossSections", "XZ", 0, QApplication::UnicodeUTF8));
        yzPlane->setText(QApplication::translate("PartGui::CrossSections", "YZ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::CrossSections", "Position:", 0, QApplication::UnicodeUTF8));
        sectionsBox->setTitle(QApplication::translate("PartGui::CrossSections", "Sections", 0, QApplication::UnicodeUTF8));
        checkBothSides->setText(QApplication::translate("PartGui::CrossSections", "On both sides", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PartGui::CrossSections", "Count", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartGui::CrossSections", "Distance:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class CrossSections: public Ui_CrossSections {};
} // namespace Ui
} // namespace PartGui

#endif // UI_CROSSSECTIONS_H
