/********************************************************************************
** Form generated from reading UI file 'Tessellation.ui'
**
** Created: Thu Apr 18 22:45:48 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESSELLATION_H
#define UI_TESSELLATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

namespace MeshPartGui {

class Ui_Tessellation
{
public:
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkDeviation;
    QDoubleSpinBox *spinDeviation;
    QCheckBox *checkMaxEdgeLength;
    QDoubleSpinBox *spinMaxEdgeLength;

    void setupUi(QWidget *MeshPartGui__Tessellation)
    {
        if (MeshPartGui__Tessellation->objectName().isEmpty())
            MeshPartGui__Tessellation->setObjectName(QString::fromUtf8("MeshPartGui__Tessellation"));
        MeshPartGui__Tessellation->resize(329, 431);
        gridLayout_2 = new QGridLayout(MeshPartGui__Tessellation);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        treeWidget = new QTreeWidget(MeshPartGui__Tessellation);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        groupBox = new QGroupBox(MeshPartGui__Tessellation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkDeviation = new QCheckBox(groupBox);
        checkDeviation->setObjectName(QString::fromUtf8("checkDeviation"));
        checkDeviation->setChecked(true);

        gridLayout->addWidget(checkDeviation, 0, 0, 1, 1);

        spinDeviation = new QDoubleSpinBox(groupBox);
        spinDeviation->setObjectName(QString::fromUtf8("spinDeviation"));
        spinDeviation->setDecimals(3);
        spinDeviation->setMinimum(0.001);
        spinDeviation->setSingleStep(0.1);
        spinDeviation->setValue(0.1);

        gridLayout->addWidget(spinDeviation, 0, 1, 1, 1);

        checkMaxEdgeLength = new QCheckBox(groupBox);
        checkMaxEdgeLength->setObjectName(QString::fromUtf8("checkMaxEdgeLength"));
        checkMaxEdgeLength->setChecked(true);

        gridLayout->addWidget(checkMaxEdgeLength, 1, 0, 1, 1);

        spinMaxEdgeLength = new QDoubleSpinBox(groupBox);
        spinMaxEdgeLength->setObjectName(QString::fromUtf8("spinMaxEdgeLength"));
        spinMaxEdgeLength->setDecimals(3);
        spinMaxEdgeLength->setMinimum(0.001);
        spinMaxEdgeLength->setSingleStep(0.1);
        spinMaxEdgeLength->setValue(1);

        gridLayout->addWidget(spinMaxEdgeLength, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        QWidget::setTabOrder(treeWidget, checkDeviation);
        QWidget::setTabOrder(checkDeviation, spinDeviation);
        QWidget::setTabOrder(spinDeviation, checkMaxEdgeLength);
        QWidget::setTabOrder(checkMaxEdgeLength, spinMaxEdgeLength);

        retranslateUi(MeshPartGui__Tessellation);
        QObject::connect(checkDeviation, SIGNAL(toggled(bool)), spinDeviation, SLOT(setEnabled(bool)));
        QObject::connect(checkMaxEdgeLength, SIGNAL(toggled(bool)), spinMaxEdgeLength, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MeshPartGui__Tessellation);
    } // setupUi

    void retranslateUi(QWidget *MeshPartGui__Tessellation)
    {
        MeshPartGui__Tessellation->setWindowTitle(QApplication::translate("MeshPartGui::Tessellation", "Tessellation", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MeshPartGui::Tessellation", "Shapes", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MeshPartGui::Tessellation", "Settings", 0, QApplication::UnicodeUTF8));
        checkDeviation->setText(QApplication::translate("MeshPartGui::Tessellation", "Surface deviation:", 0, QApplication::UnicodeUTF8));
        checkMaxEdgeLength->setText(QApplication::translate("MeshPartGui::Tessellation", "Max. edge length:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace MeshPartGui

namespace MeshPartGui {
namespace Ui {
    class Tessellation: public Ui_Tessellation {};
} // namespace Ui
} // namespace MeshPartGui

#endif // UI_TESSELLATION_H
