/********************************************************************************
** Form generated from reading UI file 'RemoveComponents.ui'
**
** Created: Thu Apr 18 07:15:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECOMPONENTS_H
#define UI_REMOVECOMPONENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

namespace MeshGui {

class Ui_RemoveComponents
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *cbSelectComp;
    QPushButton *selectTriangle;
    QSpinBox *spSelectComp;
    QLabel *label;
    QPushButton *selectRegion;
    QPushButton *selectComponents;
    QSpacerItem *spacerItem;
    QPushButton *selectAll;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QCheckBox *cbDeselectComp;
    QPushButton *deselectTriangle;
    QSpinBox *spDeselectComp;
    QLabel *label_2;
    QSpacerItem *spacerItem2;
    QPushButton *deselectRegion;
    QSpacerItem *spacerItem3;
    QPushButton *deselectAll;
    QPushButton *deselectComponents;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QCheckBox *frontTriangles;
    QCheckBox *screenTriangles;

    void setupUi(QWidget *MeshGui__RemoveComponents)
    {
        if (MeshGui__RemoveComponents->objectName().isEmpty())
            MeshGui__RemoveComponents->setObjectName(QString::fromUtf8("MeshGui__RemoveComponents"));
        MeshGui__RemoveComponents->resize(303, 471);
        gridLayout_2 = new QGridLayout(MeshGui__RemoveComponents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(MeshGui__RemoveComponents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbSelectComp = new QCheckBox(groupBox);
        cbSelectComp->setObjectName(QString::fromUtf8("cbSelectComp"));

        gridLayout->addWidget(cbSelectComp, 3, 1, 1, 2);

        selectTriangle = new QPushButton(groupBox);
        selectTriangle->setObjectName(QString::fromUtf8("selectTriangle"));

        gridLayout->addWidget(selectTriangle, 3, 0, 1, 1);

        spSelectComp = new QSpinBox(groupBox);
        spSelectComp->setObjectName(QString::fromUtf8("spSelectComp"));

        gridLayout->addWidget(spSelectComp, 2, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 1, 1, 1);

        selectRegion = new QPushButton(groupBox);
        selectRegion->setObjectName(QString::fromUtf8("selectRegion"));

        gridLayout->addWidget(selectRegion, 0, 0, 1, 1);

        selectComponents = new QPushButton(groupBox);
        selectComponents->setObjectName(QString::fromUtf8("selectComponents"));

        gridLayout->addWidget(selectComponents, 2, 0, 1, 1);

        spacerItem = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 1, 1, 2);

        selectAll = new QPushButton(groupBox);
        selectAll->setObjectName(QString::fromUtf8("selectAll"));

        gridLayout->addWidget(selectAll, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 1, 1, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MeshGui__RemoveComponents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        cbDeselectComp = new QCheckBox(groupBox_2);
        cbDeselectComp->setObjectName(QString::fromUtf8("cbDeselectComp"));

        gridLayout1->addWidget(cbDeselectComp, 3, 1, 1, 2);

        deselectTriangle = new QPushButton(groupBox_2);
        deselectTriangle->setObjectName(QString::fromUtf8("deselectTriangle"));

        gridLayout1->addWidget(deselectTriangle, 3, 0, 1, 1);

        spDeselectComp = new QSpinBox(groupBox_2);
        spDeselectComp->setObjectName(QString::fromUtf8("spDeselectComp"));

        gridLayout1->addWidget(spDeselectComp, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(181, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem2, 1, 1, 1, 2);

        deselectRegion = new QPushButton(groupBox_2);
        deselectRegion->setObjectName(QString::fromUtf8("deselectRegion"));

        gridLayout1->addWidget(deselectRegion, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem3, 0, 1, 1, 2);

        deselectAll = new QPushButton(groupBox_2);
        deselectAll->setObjectName(QString::fromUtf8("deselectAll"));

        gridLayout1->addWidget(deselectAll, 1, 0, 1, 1);

        deselectComponents = new QPushButton(groupBox_2);
        deselectComponents->setObjectName(QString::fromUtf8("deselectComponents"));

        gridLayout1->addWidget(deselectComponents, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(MeshGui__RemoveComponents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frontTriangles = new QCheckBox(groupBox_3);
        frontTriangles->setObjectName(QString::fromUtf8("frontTriangles"));
        frontTriangles->setChecked(true);

        gridLayout_3->addWidget(frontTriangles, 0, 0, 1, 1);

        screenTriangles = new QCheckBox(groupBox_3);
        screenTriangles->setObjectName(QString::fromUtf8("screenTriangles"));

        gridLayout_3->addWidget(screenTriangles, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 2, 0, 1, 1);

        QWidget::setTabOrder(selectRegion, selectAll);
        QWidget::setTabOrder(selectAll, selectComponents);
        QWidget::setTabOrder(selectComponents, spSelectComp);
        QWidget::setTabOrder(spSelectComp, selectTriangle);
        QWidget::setTabOrder(selectTriangle, cbSelectComp);
        QWidget::setTabOrder(cbSelectComp, deselectRegion);
        QWidget::setTabOrder(deselectRegion, deselectAll);
        QWidget::setTabOrder(deselectAll, deselectComponents);
        QWidget::setTabOrder(deselectComponents, spDeselectComp);
        QWidget::setTabOrder(spDeselectComp, deselectTriangle);
        QWidget::setTabOrder(deselectTriangle, cbDeselectComp);

        retranslateUi(MeshGui__RemoveComponents);

        QMetaObject::connectSlotsByName(MeshGui__RemoveComponents);
    } // setupUi

    void retranslateUi(QWidget *MeshGui__RemoveComponents)
    {
        MeshGui__RemoveComponents->setWindowTitle(QApplication::translate("MeshGui::RemoveComponents", "Remove components", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MeshGui::RemoveComponents", "Select", 0, QApplication::UnicodeUTF8));
        cbSelectComp->setText(QApplication::translate("MeshGui::RemoveComponents", "Select whole component", 0, QApplication::UnicodeUTF8));
        selectTriangle->setText(QApplication::translate("MeshGui::RemoveComponents", "Pick triangle", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MeshGui::RemoveComponents", "< faces than", 0, QApplication::UnicodeUTF8));
        selectRegion->setText(QApplication::translate("MeshGui::RemoveComponents", "Region", 0, QApplication::UnicodeUTF8));
        selectComponents->setText(QApplication::translate("MeshGui::RemoveComponents", "Components", 0, QApplication::UnicodeUTF8));
        selectAll->setText(QApplication::translate("MeshGui::RemoveComponents", "All", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MeshGui::RemoveComponents", "Deselect", 0, QApplication::UnicodeUTF8));
        cbDeselectComp->setText(QApplication::translate("MeshGui::RemoveComponents", "Deselect whole component", 0, QApplication::UnicodeUTF8));
        deselectTriangle->setText(QApplication::translate("MeshGui::RemoveComponents", "Pick triangle", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MeshGui::RemoveComponents", "> faces than", 0, QApplication::UnicodeUTF8));
        deselectRegion->setText(QApplication::translate("MeshGui::RemoveComponents", "Region", 0, QApplication::UnicodeUTF8));
        deselectAll->setText(QApplication::translate("MeshGui::RemoveComponents", "All", 0, QApplication::UnicodeUTF8));
        deselectComponents->setText(QApplication::translate("MeshGui::RemoveComponents", "Components", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MeshGui::RemoveComponents", "Region options", 0, QApplication::UnicodeUTF8));
        frontTriangles->setText(QApplication::translate("MeshGui::RemoveComponents", "Respect only visible triangles", 0, QApplication::UnicodeUTF8));
        screenTriangles->setText(QApplication::translate("MeshGui::RemoveComponents", "Respect only triangles with normals facing screen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace MeshGui

namespace MeshGui {
namespace Ui {
    class RemoveComponents: public Ui_RemoveComponents {};
} // namespace Ui
} // namespace MeshGui

#endif // UI_REMOVECOMPONENTS_H
