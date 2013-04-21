/********************************************************************************
** Form generated from reading UI file 'Hypothesis.ui'
**
** Created: Thu Apr 18 22:47:35 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYPOTHESIS_H
#define UI_HYPOTHESIS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

namespace FemGui {

class Ui_HypothesisWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *quadPref;
    QCheckBox *maxLength;
    QDoubleSpinBox *valMaxLength;
    QCheckBox *localLength;
    QDoubleSpinBox *valLocalLength;
    QCheckBox *maxArea;
    QDoubleSpinBox *valMaxArea;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FemGui__HypothesisWidget)
    {
        if (FemGui__HypothesisWidget->objectName().isEmpty())
            FemGui__HypothesisWidget->setObjectName(QString::fromUtf8("FemGui__HypothesisWidget"));
        FemGui__HypothesisWidget->resize(299, 238);
        gridLayout_2 = new QGridLayout(FemGui__HypothesisWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        quadPref = new QCheckBox(FemGui__HypothesisWidget);
        quadPref->setObjectName(QString::fromUtf8("quadPref"));
        quadPref->setChecked(true);

        gridLayout->addWidget(quadPref, 0, 0, 1, 1);

        maxLength = new QCheckBox(FemGui__HypothesisWidget);
        maxLength->setObjectName(QString::fromUtf8("maxLength"));
        maxLength->setChecked(true);

        gridLayout->addWidget(maxLength, 1, 0, 1, 1);

        valMaxLength = new QDoubleSpinBox(FemGui__HypothesisWidget);
        valMaxLength->setObjectName(QString::fromUtf8("valMaxLength"));
        valMaxLength->setSingleStep(0.1);
        valMaxLength->setValue(1);

        gridLayout->addWidget(valMaxLength, 1, 1, 1, 1);

        localLength = new QCheckBox(FemGui__HypothesisWidget);
        localLength->setObjectName(QString::fromUtf8("localLength"));
        localLength->setChecked(true);

        gridLayout->addWidget(localLength, 2, 0, 1, 1);

        valLocalLength = new QDoubleSpinBox(FemGui__HypothesisWidget);
        valLocalLength->setObjectName(QString::fromUtf8("valLocalLength"));
        valLocalLength->setSingleStep(0.1);
        valLocalLength->setValue(1);

        gridLayout->addWidget(valLocalLength, 2, 1, 1, 1);

        maxArea = new QCheckBox(FemGui__HypothesisWidget);
        maxArea->setObjectName(QString::fromUtf8("maxArea"));
        maxArea->setChecked(true);

        gridLayout->addWidget(maxArea, 3, 0, 1, 1);

        valMaxArea = new QDoubleSpinBox(FemGui__HypothesisWidget);
        valMaxArea->setObjectName(QString::fromUtf8("valMaxArea"));
        valMaxArea->setSingleStep(0.1);
        valMaxArea->setValue(1);

        gridLayout->addWidget(valMaxArea, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        QWidget::setTabOrder(quadPref, maxLength);
        QWidget::setTabOrder(maxLength, valMaxLength);
        QWidget::setTabOrder(valMaxLength, localLength);
        QWidget::setTabOrder(localLength, valLocalLength);
        QWidget::setTabOrder(valLocalLength, maxArea);
        QWidget::setTabOrder(maxArea, valMaxArea);

        retranslateUi(FemGui__HypothesisWidget);
        QObject::connect(maxLength, SIGNAL(toggled(bool)), valMaxLength, SLOT(setEnabled(bool)));
        QObject::connect(localLength, SIGNAL(toggled(bool)), valLocalLength, SLOT(setEnabled(bool)));
        QObject::connect(maxArea, SIGNAL(toggled(bool)), valMaxArea, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(FemGui__HypothesisWidget);
    } // setupUi

    void retranslateUi(QWidget *FemGui__HypothesisWidget)
    {
        FemGui__HypothesisWidget->setWindowTitle(QApplication::translate("FemGui::HypothesisWidget", "Hypothesis", 0, QApplication::UnicodeUTF8));
        quadPref->setText(QApplication::translate("FemGui::HypothesisWidget", "Quadrangle", 0, QApplication::UnicodeUTF8));
        maxLength->setText(QApplication::translate("FemGui::HypothesisWidget", "Maximum length", 0, QApplication::UnicodeUTF8));
        localLength->setText(QApplication::translate("FemGui::HypothesisWidget", "Local length", 0, QApplication::UnicodeUTF8));
        maxArea->setText(QApplication::translate("FemGui::HypothesisWidget", "Maximum element area", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace FemGui

namespace FemGui {
namespace Ui {
    class HypothesisWidget: public Ui_HypothesisWidget {};
} // namespace Ui
} // namespace FemGui

#endif // UI_HYPOTHESIS_H
