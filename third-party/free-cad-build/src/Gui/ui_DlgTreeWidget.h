/********************************************************************************
** Form generated from reading UI file 'DlgTreeWidget.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTREEWIDGET_H
#define UI_DLGTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

namespace Gui {

class Ui_DlgTreeWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QTreeWidget *treeWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Gui__DlgTreeWidget)
    {
        if (Gui__DlgTreeWidget->objectName().isEmpty())
            Gui__DlgTreeWidget->setObjectName(QString::fromUtf8("Gui__DlgTreeWidget"));
        Gui__DlgTreeWidget->resize(379, 283);
        gridLayout = new QGridLayout(Gui__DlgTreeWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Gui__DlgTreeWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        treeWidget = new QTreeWidget(groupBox);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout1->addWidget(treeWidget, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 2, 2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(Gui__DlgTreeWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(Gui__DlgTreeWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 1, 1, 1);


        retranslateUi(Gui__DlgTreeWidget);
        QObject::connect(okButton, SIGNAL(clicked()), Gui__DlgTreeWidget, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Gui__DlgTreeWidget, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__DlgTreeWidget);
    } // setupUi

    void retranslateUi(QDialog *Gui__DlgTreeWidget)
    {
        Gui__DlgTreeWidget->setWindowTitle(QApplication::translate("Gui::DlgTreeWidget", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Gui::DlgTreeWidget", "Items", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("Gui::DlgTreeWidget", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Gui::DlgTreeWidget", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Gui

namespace Gui {
namespace Ui {
    class DlgTreeWidget: public Ui_DlgTreeWidget {};
} // namespace Ui
} // namespace Gui

#endif // UI_DLGTREEWIDGET_H
