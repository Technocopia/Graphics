/********************************************************************************
** Form generated from reading UI file 'DlgBooleanOperation.ui'
**
** Created: Thu Apr 18 07:17:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGBOOLEANOPERATION_H
#define UI_DLGBOOLEANOPERATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

namespace PartGui {

class Ui_DlgBooleanOperation
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QRadioButton *sectionButton;
    QRadioButton *diffButton;
    QRadioButton *unionButton;
    QRadioButton *interButton;
    QTreeWidget *firstShape;
    QTreeWidget *secondShape;
    QSpacerItem *horizontalSpacer;
    QPushButton *swapButton;

    void setupUi(QWidget *PartGui__DlgBooleanOperation)
    {
        if (PartGui__DlgBooleanOperation->objectName().isEmpty())
            PartGui__DlgBooleanOperation->setObjectName(QString::fromUtf8("PartGui__DlgBooleanOperation"));
        PartGui__DlgBooleanOperation->resize(264, 408);
        gridLayout = new QGridLayout(PartGui__DlgBooleanOperation);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(PartGui__DlgBooleanOperation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        sectionButton = new QRadioButton(groupBox);
        sectionButton->setObjectName(QString::fromUtf8("sectionButton"));

        gridLayout1->addWidget(sectionButton, 1, 1, 1, 1);

        diffButton = new QRadioButton(groupBox);
        diffButton->setObjectName(QString::fromUtf8("diffButton"));

        gridLayout1->addWidget(diffButton, 0, 1, 1, 1);

        unionButton = new QRadioButton(groupBox);
        unionButton->setObjectName(QString::fromUtf8("unionButton"));
        unionButton->setChecked(true);

        gridLayout1->addWidget(unionButton, 0, 0, 1, 1);

        interButton = new QRadioButton(groupBox);
        interButton->setObjectName(QString::fromUtf8("interButton"));

        gridLayout1->addWidget(interButton, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        firstShape = new QTreeWidget(PartGui__DlgBooleanOperation);
        new QTreeWidgetItem(firstShape);
        new QTreeWidgetItem(firstShape);
        new QTreeWidgetItem(firstShape);
        new QTreeWidgetItem(firstShape);
        firstShape->setObjectName(QString::fromUtf8("firstShape"));
        firstShape->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed);
        firstShape->setRootIsDecorated(false);
        firstShape->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(firstShape, 1, 0, 1, 1);

        secondShape = new QTreeWidget(PartGui__DlgBooleanOperation);
        new QTreeWidgetItem(secondShape);
        new QTreeWidgetItem(secondShape);
        new QTreeWidgetItem(secondShape);
        new QTreeWidgetItem(secondShape);
        secondShape->setObjectName(QString::fromUtf8("secondShape"));
        secondShape->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::EditKeyPressed);
        secondShape->setRootIsDecorated(false);
        secondShape->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(secondShape, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        swapButton = new QPushButton(PartGui__DlgBooleanOperation);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));

        gridLayout->addWidget(swapButton, 2, 1, 1, 1);


        retranslateUi(PartGui__DlgBooleanOperation);

        QMetaObject::connectSlotsByName(PartGui__DlgBooleanOperation);
    } // setupUi

    void retranslateUi(QWidget *PartGui__DlgBooleanOperation)
    {
        PartGui__DlgBooleanOperation->setWindowTitle(QApplication::translate("PartGui::DlgBooleanOperation", "Boolean Operation", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PartGui::DlgBooleanOperation", "Boolean operation", 0, QApplication::UnicodeUTF8));
        sectionButton->setText(QApplication::translate("PartGui::DlgBooleanOperation", "Section", 0, QApplication::UnicodeUTF8));
        diffButton->setText(QApplication::translate("PartGui::DlgBooleanOperation", "Difference", 0, QApplication::UnicodeUTF8));
        unionButton->setText(QApplication::translate("PartGui::DlgBooleanOperation", "Union", 0, QApplication::UnicodeUTF8));
        interButton->setText(QApplication::translate("PartGui::DlgBooleanOperation", "Intersection", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = firstShape->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "First shape", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = firstShape->isSortingEnabled();
        firstShape->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = firstShape->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Solids", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = firstShape->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Shells", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = firstShape->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Compounds", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = firstShape->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Faces", 0, QApplication::UnicodeUTF8));
        firstShape->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem5 = secondShape->headerItem();
        ___qtreewidgetitem5->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Second shape", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = secondShape->isSortingEnabled();
        secondShape->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem6 = secondShape->topLevelItem(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Solids", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = secondShape->topLevelItem(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Shells", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = secondShape->topLevelItem(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Compounds", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = secondShape->topLevelItem(3);
        ___qtreewidgetitem9->setText(0, QApplication::translate("PartGui::DlgBooleanOperation", "Faces", 0, QApplication::UnicodeUTF8));
        secondShape->setSortingEnabled(__sortingEnabled1);

        swapButton->setText(QApplication::translate("PartGui::DlgBooleanOperation", "Swap selection", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class DlgBooleanOperation: public Ui_DlgBooleanOperation {};
} // namespace Ui
} // namespace PartGui

#endif // UI_DLGBOOLEANOPERATION_H
