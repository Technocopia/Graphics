/********************************************************************************
** Form generated from reading UI file 'DlgFilletEdges.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFILLETEDGES_H
#define UI_DLGFILLETEDGES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

namespace PartGui {

class Ui_DlgFilletEdges
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QComboBox *shapeObject;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *selectAllButton;
    QPushButton *selectNoneButton;
    QLabel *labelfillet;
    QComboBox *filletType;
    QTreeView *treeView;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QDoubleSpinBox *filletStartRadius;
    QDoubleSpinBox *filletEndRadius;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *PartGui__DlgFilletEdges)
    {
        if (PartGui__DlgFilletEdges->objectName().isEmpty())
            PartGui__DlgFilletEdges->setObjectName(QString::fromUtf8("PartGui__DlgFilletEdges"));
        PartGui__DlgFilletEdges->resize(424, 426);
        gridLayout_2 = new QGridLayout(PartGui__DlgFilletEdges);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(PartGui__DlgFilletEdges);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        shapeObject = new QComboBox(groupBox);
        shapeObject->setObjectName(QString::fromUtf8("shapeObject"));

        hboxLayout->addWidget(shapeObject);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(PartGui__DlgFilletEdges);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        selectAllButton = new QPushButton(groupBox_2);
        selectAllButton->setObjectName(QString::fromUtf8("selectAllButton"));

        gridLayout->addWidget(selectAllButton, 0, 1, 1, 1);

        selectNoneButton = new QPushButton(groupBox_2);
        selectNoneButton->setObjectName(QString::fromUtf8("selectNoneButton"));

        gridLayout->addWidget(selectNoneButton, 0, 2, 1, 1);

        labelfillet = new QLabel(groupBox_2);
        labelfillet->setObjectName(QString::fromUtf8("labelfillet"));

        gridLayout->addWidget(labelfillet, 1, 0, 1, 1);

        filletType = new QComboBox(groupBox_2);
        filletType->setObjectName(QString::fromUtf8("filletType"));

        gridLayout->addWidget(filletType, 1, 1, 1, 2);

        treeView = new QTreeView(groupBox_2);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 2, 0, 1, 3);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        filletStartRadius = new QDoubleSpinBox(groupBox_2);
        filletStartRadius->setObjectName(QString::fromUtf8("filletStartRadius"));
        filletStartRadius->setSingleStep(0.1);
        filletStartRadius->setValue(1);

        hboxLayout1->addWidget(filletStartRadius);

        filletEndRadius = new QDoubleSpinBox(groupBox_2);
        filletEndRadius->setObjectName(QString::fromUtf8("filletEndRadius"));
        filletEndRadius->setSingleStep(0.1);
        filletEndRadius->setValue(1);

        hboxLayout1->addWidget(filletEndRadius);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 3);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        QWidget::setTabOrder(shapeObject, filletType);
        QWidget::setTabOrder(filletType, treeView);
        QWidget::setTabOrder(treeView, filletStartRadius);
        QWidget::setTabOrder(filletStartRadius, filletEndRadius);

        retranslateUi(PartGui__DlgFilletEdges);

        QMetaObject::connectSlotsByName(PartGui__DlgFilletEdges);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgFilletEdges)
    {
        PartGui__DlgFilletEdges->setWindowTitle(QApplication::translate("PartGui::DlgFilletEdges", "Fillet Edges", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PartGui::DlgFilletEdges", "Shape", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::DlgFilletEdges", "Selected shape:", 0, QApplication::UnicodeUTF8));
        shapeObject->clear();
        shapeObject->insertItems(0, QStringList()
         << QApplication::translate("PartGui::DlgFilletEdges", "No selection", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("PartGui::DlgFilletEdges", "Fillet Parameter", 0, QApplication::UnicodeUTF8));
        selectAllButton->setText(QApplication::translate("PartGui::DlgFilletEdges", "All", 0, QApplication::UnicodeUTF8));
        selectNoneButton->setText(QApplication::translate("PartGui::DlgFilletEdges", "None", 0, QApplication::UnicodeUTF8));
        labelfillet->setText(QApplication::translate("PartGui::DlgFilletEdges", "Fillet type:", 0, QApplication::UnicodeUTF8));
        filletType->clear();
        filletType->insertItems(0, QStringList()
         << QApplication::translate("PartGui::DlgFilletEdges", "Constant Radius", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::DlgFilletEdges", "Variable Radius", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("PartGui::DlgFilletEdges", "Radius:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgFilletEdges: public Ui_DlgFilletEdges {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGFILLETEDGES_H
