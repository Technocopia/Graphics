/********************************************************************************
** Form generated from reading UI file 'Mirroring.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIRRORING_H
#define UI_MIRRORING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

namespace PartGui {

class Ui_Mirroring
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *shapes;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *baseX;
    QLabel *label_4;
    QDoubleSpinBox *baseY;
    QLabel *label_5;
    QDoubleSpinBox *baseZ;

    void setupUi(QWidget *PartGui__Mirroring)
    {
        if (PartGui__Mirroring->objectName().isEmpty())
            PartGui__Mirroring->setObjectName(QString::fromUtf8("PartGui__Mirroring"));
        PartGui__Mirroring->resize(279, 543);
        gridLayout = new QGridLayout(PartGui__Mirroring);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        shapes = new QTreeWidget(PartGui__Mirroring);
        shapes->setObjectName(QString::fromUtf8("shapes"));
        shapes->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed);
        shapes->setSelectionMode(QAbstractItemView::ExtendedSelection);
        shapes->setRootIsDecorated(false);
        shapes->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(shapes, 0, 0, 1, 7);

        label = new QLabel(PartGui__Mirroring);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox = new QComboBox(PartGui__Mirroring);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 6);

        label_2 = new QLabel(PartGui__Mirroring);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(PartGui__Mirroring);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        baseX = new QDoubleSpinBox(PartGui__Mirroring);
        baseX->setObjectName(QString::fromUtf8("baseX"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(baseX->sizePolicy().hasHeightForWidth());
        baseX->setSizePolicy(sizePolicy);

        gridLayout->addWidget(baseX, 2, 2, 1, 1);

        label_4 = new QLabel(PartGui__Mirroring);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 3, 1, 1);

        baseY = new QDoubleSpinBox(PartGui__Mirroring);
        baseY->setObjectName(QString::fromUtf8("baseY"));
        sizePolicy.setHeightForWidth(baseY->sizePolicy().hasHeightForWidth());
        baseY->setSizePolicy(sizePolicy);

        gridLayout->addWidget(baseY, 2, 4, 1, 1);

        label_5 = new QLabel(PartGui__Mirroring);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 2, 5, 1, 1);

        baseZ = new QDoubleSpinBox(PartGui__Mirroring);
        baseZ->setObjectName(QString::fromUtf8("baseZ"));
        sizePolicy.setHeightForWidth(baseZ->sizePolicy().hasHeightForWidth());
        baseZ->setSizePolicy(sizePolicy);

        gridLayout->addWidget(baseZ, 2, 6, 1, 1);


        retranslateUi(PartGui__Mirroring);

        QMetaObject::connectSlotsByName(PartGui__Mirroring);
    } // setupUi

    void retranslateUi(QWidget *PartGui__Mirroring)
    {
        PartGui__Mirroring->setWindowTitle(QApplication::translate("PartGui::Mirroring", "Mirroring", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = shapes->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PartGui::Mirroring", "Shapes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PartGui::Mirroring", "Mirror plane:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("PartGui::Mirroring", "XY plane", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::Mirroring", "XZ plane", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PartGui::Mirroring", "YZ plane", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("PartGui::Mirroring", "Base point:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PartGui::Mirroring", "x", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PartGui::Mirroring", "y", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PartGui::Mirroring", "z", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class Mirroring: public Ui_Mirroring {};
} // namespace Ui
} // namespace PartGui

#endif // UI_MIRRORING_H
