/********************************************************************************
** Form generated from reading UI file 'DlgExtrusion.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGEXTRUSION_H
#define UI_DLGEXTRUSION_H

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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

namespace PartGui {

class Ui_DlgExtrusion
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QDoubleSpinBox *dirX;
    QLabel *label_3;
    QDoubleSpinBox *dirY;
    QLabel *label_4;
    QDoubleSpinBox *dirZ;
    QLabel *label_5;
    QDoubleSpinBox *dirLen;
    QCheckBox *checkNormal;
    QPushButton *viewButton;
    QSpacerItem *horizontalSpacer;
    QLabel *labelNormal;
    QCheckBox *makeSolid;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *taperAngle;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *PartGui__DlgExtrusion)
    {
        if (PartGui__DlgExtrusion->objectName().isEmpty())
            PartGui__DlgExtrusion->setObjectName(QString::fromUtf8("PartGui__DlgExtrusion"));
        PartGui__DlgExtrusion->resize(260, 504);
        gridLayout_3 = new QGridLayout(PartGui__DlgExtrusion);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_2 = new QGroupBox(PartGui__DlgExtrusion);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        dirX = new QDoubleSpinBox(groupBox_2);
        dirX->setObjectName(QString::fromUtf8("dirX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dirX->sizePolicy().hasHeightForWidth());
        dirX->setSizePolicy(sizePolicy1);
        dirX->setMinimum(-100);
        dirX->setMaximum(100);

        gridLayout->addWidget(dirX, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dirY = new QDoubleSpinBox(groupBox_2);
        dirY->setObjectName(QString::fromUtf8("dirY"));
        sizePolicy1.setHeightForWidth(dirY->sizePolicy().hasHeightForWidth());
        dirY->setSizePolicy(sizePolicy1);
        dirY->setMinimum(-100);
        dirY->setMaximum(100);

        gridLayout->addWidget(dirY, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        dirZ = new QDoubleSpinBox(groupBox_2);
        dirZ->setObjectName(QString::fromUtf8("dirZ"));
        sizePolicy1.setHeightForWidth(dirZ->sizePolicy().hasHeightForWidth());
        dirZ->setSizePolicy(sizePolicy1);
        dirZ->setMinimum(-100);
        dirZ->setMaximum(100);
        dirZ->setValue(1);

        gridLayout->addWidget(dirZ, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        dirLen = new QDoubleSpinBox(groupBox_2);
        dirLen->setObjectName(QString::fromUtf8("dirLen"));
        sizePolicy1.setHeightForWidth(dirLen->sizePolicy().hasHeightForWidth());
        dirLen->setSizePolicy(sizePolicy1);
        dirLen->setDecimals(3);
        dirLen->setMinimum(0.001);
        dirLen->setMaximum(2.14748e+09);
        dirLen->setValue(1);

        gridLayout->addWidget(dirLen, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        checkNormal = new QCheckBox(groupBox_2);
        checkNormal->setObjectName(QString::fromUtf8("checkNormal"));

        gridLayout_2->addWidget(checkNormal, 1, 0, 1, 1);

        viewButton = new QPushButton(groupBox_2);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));

        gridLayout_2->addWidget(viewButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        labelNormal = new QLabel(groupBox_2);
        labelNormal->setObjectName(QString::fromUtf8("labelNormal"));

        gridLayout_2->addWidget(labelNormal, 2, 0, 1, 3);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        makeSolid = new QCheckBox(PartGui__DlgExtrusion);
        makeSolid->setObjectName(QString::fromUtf8("makeSolid"));

        gridLayout_3->addWidget(makeSolid, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PartGui__DlgExtrusion);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        taperAngle = new QDoubleSpinBox(PartGui__DlgExtrusion);
        taperAngle->setObjectName(QString::fromUtf8("taperAngle"));
        taperAngle->setMinimum(-180);
        taperAngle->setMaximum(180);
        taperAngle->setSingleStep(5);

        horizontalLayout->addWidget(taperAngle);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        treeWidget = new QTreeWidget(PartGui__DlgExtrusion);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget->setIndentation(20);
        treeWidget->setRootIsDecorated(false);

        gridLayout_3->addWidget(treeWidget, 3, 0, 1, 1);

        QWidget::setTabOrder(treeWidget, dirX);
        QWidget::setTabOrder(dirX, dirY);
        QWidget::setTabOrder(dirY, dirZ);
        QWidget::setTabOrder(dirZ, dirLen);
        QWidget::setTabOrder(dirLen, checkNormal);

        retranslateUi(PartGui__DlgExtrusion);

        QMetaObject::connectSlotsByName(PartGui__DlgExtrusion);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgExtrusion)
    {
        PartGui__DlgExtrusion->setWindowTitle(QApplication::translate("PartGui::DlgExtrusion", "Extrude", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PartGui::DlgExtrusion", "Direction", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartGui::DlgExtrusion", "X:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PartGui::DlgExtrusion", "Y:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PartGui::DlgExtrusion", "Z:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PartGui::DlgExtrusion", "Length:", 0, QApplication::UnicodeUTF8));
        checkNormal->setText(QApplication::translate("PartGui::DlgExtrusion", "Along normal", 0, QApplication::UnicodeUTF8));
        viewButton->setText(QApplication::translate("PartGui::DlgExtrusion", "3D view", 0, QApplication::UnicodeUTF8));
        labelNormal->setText(QApplication::translate("PartGui::DlgExtrusion", "Note:This option works for planes only", 0, QApplication::UnicodeUTF8));
        makeSolid->setText(QApplication::translate("PartGui::DlgExtrusion", "Create solid", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::DlgExtrusion", "Taper outward angle", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PartGui::DlgExtrusion", "Shape", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgExtrusion: public Ui_DlgExtrusion {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGEXTRUSION_H
