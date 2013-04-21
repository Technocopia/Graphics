/********************************************************************************
** Form generated from reading UI file 'VisualInspection.ui'
**
** Created: Thu Apr 18 22:46:50 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALINSPECTION_H
#define UI_VISUALINSPECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include "Gui/PrefWidgets.h"

namespace InspectionGui {

class Ui_VisualInspection
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QTreeWidget *treeWidgetNominal;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QTreeWidget *treeWidgetActual;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonHelp;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout4;
    Gui::PrefDoubleSpinBox *prefFloatSpinBox2;
    QLabel *textLabel1;
    Gui::PrefDoubleSpinBox *prefFloatSpinBox1;
    QLabel *textLabel2;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;

    void setupUi(QDialog *InspectionGui__VisualInspection)
    {
        if (InspectionGui__VisualInspection->objectName().isEmpty())
            InspectionGui__VisualInspection->setObjectName(QString::fromUtf8("InspectionGui__VisualInspection"));
        InspectionGui__VisualInspection->resize(540, 406);
        InspectionGui__VisualInspection->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(InspectionGui__VisualInspection);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(InspectionGui__VisualInspection);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        treeWidgetNominal = new QTreeWidget(groupBox_2);
        treeWidgetNominal->setObjectName(QString::fromUtf8("treeWidgetNominal"));
        treeWidgetNominal->setRootIsDecorated(false);

        gridLayout1->addWidget(treeWidgetNominal, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(InspectionGui__VisualInspection);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        treeWidgetActual = new QTreeWidget(groupBox);
        treeWidgetActual->setObjectName(QString::fromUtf8("treeWidgetActual"));
        treeWidgetActual->setRootIsDecorated(false);

        gridLayout2->addWidget(treeWidgetActual, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        buttonHelp = new QPushButton(InspectionGui__VisualInspection);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        buttonHelp->setAutoDefault(true);

        hboxLayout->addWidget(buttonHelp);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonOk = new QPushButton(InspectionGui__VisualInspection);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout->addWidget(buttonOk);

        buttonCancel = new QPushButton(InspectionGui__VisualInspection);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        groupBox_3 = new QGroupBox(InspectionGui__VisualInspection);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout3 = new QGridLayout(groupBox_3);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        spacerItem1 = new QSpacerItem(61, 54, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem1, 0, 1, 1, 1);

        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        prefFloatSpinBox2 = new Gui::PrefDoubleSpinBox(groupBox_3);
        prefFloatSpinBox2->setObjectName(QString::fromUtf8("prefFloatSpinBox2"));
        prefFloatSpinBox2->setDecimals(3);
        prefFloatSpinBox2->setSingleStep(0.1);
        prefFloatSpinBox2->setProperty("prefEntry", QVariant(QByteArray("Thickness")));
        prefFloatSpinBox2->setProperty("prefPath", QVariant(QByteArray("Mod/Inspection/Inspection")));

        gridLayout4->addWidget(prefFloatSpinBox2, 1, 2, 1, 1);

        textLabel1 = new QLabel(groupBox_3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout4->addWidget(textLabel1, 0, 0, 1, 1);

        prefFloatSpinBox1 = new Gui::PrefDoubleSpinBox(groupBox_3);
        prefFloatSpinBox1->setObjectName(QString::fromUtf8("prefFloatSpinBox1"));
        prefFloatSpinBox1->setDecimals(3);
        prefFloatSpinBox1->setValue(0.05);
        prefFloatSpinBox1->setProperty("prefEntry", QVariant(QByteArray("SearchDistance")));
        prefFloatSpinBox1->setProperty("prefPath", QVariant(QByteArray("Mod/Inspection/Inspection")));

        gridLayout4->addWidget(prefFloatSpinBox1, 0, 2, 1, 1);

        textLabel2 = new QLabel(groupBox_3);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout4->addWidget(textLabel2, 1, 0, 1, 1);

        spacerItem2 = new QSpacerItem(91, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem2, 0, 1, 1, 1);

        spacerItem3 = new QSpacerItem(101, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem3, 1, 1, 1, 1);


        gridLayout3->addLayout(gridLayout4, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 2);

        QWidget::setTabOrder(prefFloatSpinBox1, prefFloatSpinBox2);
        QWidget::setTabOrder(prefFloatSpinBox2, buttonHelp);
        QWidget::setTabOrder(buttonHelp, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonCancel);

        retranslateUi(InspectionGui__VisualInspection);
        QObject::connect(buttonOk, SIGNAL(clicked()), InspectionGui__VisualInspection, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), InspectionGui__VisualInspection, SLOT(reject()));

        QMetaObject::connectSlotsByName(InspectionGui__VisualInspection);
    } // setupUi

    void retranslateUi(QDialog *InspectionGui__VisualInspection)
    {
        InspectionGui__VisualInspection->setWindowTitle(QApplication::translate("InspectionGui::VisualInspection", "Visual Inspection", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("InspectionGui::VisualInspection", "Nominal", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetNominal->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("InspectionGui::VisualInspection", "Objects", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("InspectionGui::VisualInspection", "Actual", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetActual->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("InspectionGui::VisualInspection", "Objects", 0, QApplication::UnicodeUTF8));
        buttonHelp->setText(QApplication::translate("InspectionGui::VisualInspection", "&Help", 0, QApplication::UnicodeUTF8));
        buttonHelp->setShortcut(QApplication::translate("InspectionGui::VisualInspection", "F1", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("InspectionGui::VisualInspection", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonCancel->setText(QApplication::translate("InspectionGui::VisualInspection", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
        groupBox_3->setTitle(QApplication::translate("InspectionGui::VisualInspection", "Parameter", 0, QApplication::UnicodeUTF8));
        prefFloatSpinBox2->setSuffix(QApplication::translate("InspectionGui::VisualInspection", " mm", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("InspectionGui::VisualInspection", "Search distance", 0, QApplication::UnicodeUTF8));
        prefFloatSpinBox1->setSuffix(QApplication::translate("InspectionGui::VisualInspection", " mm", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("InspectionGui::VisualInspection", "Thickness", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace InspectionGui

namespace InspectionGui {
namespace Ui {
    class VisualInspection: public Ui_VisualInspection {};
} // namespace Ui
} // namespace InspectionGui

#endif // UI_VISUALINSPECTION_H
