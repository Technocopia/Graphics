/********************************************************************************
** Form generated from reading UI file 'DlgRevolution.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGREVOLUTION_H
#define UI_DLGREVOLUTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

namespace PartGui {

class Ui_DlgRevolution
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *zPos;
    QLabel *label_5;
    QDoubleSpinBox *yPos;
    QComboBox *direction;
    QLabel *label_4;
    QLabel *label;
    QDoubleSpinBox *xPos;
    QDoubleSpinBox *angle;
    QSpacerItem *spacerItem;
    QTreeWidget *treeWidget;
    QPushButton *selectLine;

    void setupUi(QDialog *PartGui__DlgRevolution)
    {
        if (PartGui__DlgRevolution->objectName().isEmpty())
            PartGui__DlgRevolution->setObjectName(QString::fromUtf8("PartGui__DlgRevolution"));
        PartGui__DlgRevolution->resize(307, 231);
        gridLayout = new QGridLayout(PartGui__DlgRevolution);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(PartGui__DlgRevolution);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(PartGui__DlgRevolution);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        zPos = new QDoubleSpinBox(PartGui__DlgRevolution);
        zPos->setObjectName(QString::fromUtf8("zPos"));

        gridLayout1->addWidget(zPos, 3, 1, 1, 1);

        label_5 = new QLabel(PartGui__DlgRevolution);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_5, 0, 0, 1, 1);

        yPos = new QDoubleSpinBox(PartGui__DlgRevolution);
        yPos->setObjectName(QString::fromUtf8("yPos"));

        gridLayout1->addWidget(yPos, 2, 1, 1, 1);

        direction = new QComboBox(PartGui__DlgRevolution);
        direction->setObjectName(QString::fromUtf8("direction"));

        gridLayout1->addWidget(direction, 4, 1, 1, 1);

        label_4 = new QLabel(PartGui__DlgRevolution);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(PartGui__DlgRevolution);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(label, 4, 0, 1, 1);

        xPos = new QDoubleSpinBox(PartGui__DlgRevolution);
        xPos->setObjectName(QString::fromUtf8("xPos"));

        gridLayout1->addWidget(xPos, 1, 1, 1, 1);

        angle = new QDoubleSpinBox(PartGui__DlgRevolution);
        angle->setObjectName(QString::fromUtf8("angle"));
        angle->setMinimum(-360);
        angle->setMaximum(360);
        angle->setValue(360);

        gridLayout1->addWidget(angle, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(21, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 1, 1, 1);

        treeWidget = new QTreeWidget(PartGui__DlgRevolution);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeWidget->setIndentation(20);
        treeWidget->setRootIsDecorated(false);

        gridLayout->addWidget(treeWidget, 0, 0, 4, 1);

        selectLine = new QPushButton(PartGui__DlgRevolution);
        selectLine->setObjectName(QString::fromUtf8("selectLine"));

        gridLayout->addWidget(selectLine, 1, 1, 1, 1);

        QWidget::setTabOrder(treeWidget, angle);
        QWidget::setTabOrder(angle, xPos);
        QWidget::setTabOrder(xPos, yPos);
        QWidget::setTabOrder(yPos, zPos);
        QWidget::setTabOrder(zPos, direction);

        retranslateUi(PartGui__DlgRevolution);

        QMetaObject::connectSlotsByName(PartGui__DlgRevolution);
    } // setupUi

    void retranslateUi(QDialog *PartGui__DlgRevolution)
    {
        PartGui__DlgRevolution->setWindowTitle(QApplication::translate("PartGui::DlgRevolution", "Revolve", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PartGui::DlgRevolution", "Y:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PartGui::DlgRevolution", "X:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PartGui::DlgRevolution", "Angle:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PartGui::DlgRevolution", "Z:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::DlgRevolution", "Axis:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PartGui::DlgRevolution", "Shape", 0, QApplication::UnicodeUTF8));
        selectLine->setText(QApplication::translate("PartGui::DlgRevolution", "Select line in 3D view", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgRevolution: public Ui_DlgRevolution {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGREVOLUTION_H
