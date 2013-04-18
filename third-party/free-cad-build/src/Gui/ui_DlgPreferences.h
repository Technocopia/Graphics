/********************************************************************************
** Form generated from reading UI file 'DlgPreferences.ui'
**
** Created: Thu Apr 18 07:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPREFERENCES_H
#define UI_DLGPREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgPreferences
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QListWidget *listBox;
    QStackedWidget *tabWidgetStack;
    QHBoxLayout *hboxLayout1;
    QPushButton *buttonHelp;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonApply;
    QPushButton *buttonCancel;

    void setupUi(QDialog *Gui__Dialog__DlgPreferences)
    {
        if (Gui__Dialog__DlgPreferences->objectName().isEmpty())
            Gui__Dialog__DlgPreferences->setObjectName(QString::fromUtf8("Gui__Dialog__DlgPreferences"));
        Gui__Dialog__DlgPreferences->resize(570, 454);
        Gui__Dialog__DlgPreferences->setSizeGripEnabled(true);
        Gui__Dialog__DlgPreferences->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgPreferences);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        listBox = new QListWidget(Gui__Dialog__DlgPreferences);
        listBox->setObjectName(QString::fromUtf8("listBox"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listBox->sizePolicy().hasHeightForWidth());
        listBox->setSizePolicy(sizePolicy);
        listBox->setMinimumSize(QSize(120, 0));
        listBox->setMaximumSize(QSize(128, 16777215));
        listBox->setFrameShape(QFrame::StyledPanel);
        listBox->setFrameShadow(QFrame::Sunken);
        listBox->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBox->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBox->setIconSize(QSize(96, 96));
        listBox->setSpacing(12);
        listBox->setViewMode(QListView::IconMode);

        hboxLayout->addWidget(listBox);

        tabWidgetStack = new QStackedWidget(Gui__Dialog__DlgPreferences);
        tabWidgetStack->setObjectName(QString::fromUtf8("tabWidgetStack"));

        hboxLayout->addWidget(tabWidgetStack);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        buttonHelp = new QPushButton(Gui__Dialog__DlgPreferences);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        buttonHelp->setAutoDefault(true);

        hboxLayout1->addWidget(buttonHelp);

        spacerItem = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        buttonOk = new QPushButton(Gui__Dialog__DlgPreferences);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        hboxLayout1->addWidget(buttonOk);

        buttonApply = new QPushButton(Gui__Dialog__DlgPreferences);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        buttonApply->setAutoDefault(true);

        hboxLayout1->addWidget(buttonApply);

        buttonCancel = new QPushButton(Gui__Dialog__DlgPreferences);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout1->addWidget(buttonCancel);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

        QWidget::setTabOrder(listBox, buttonHelp);
        QWidget::setTabOrder(buttonHelp, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonApply);
        QWidget::setTabOrder(buttonApply, buttonCancel);

        retranslateUi(Gui__Dialog__DlgPreferences);
        QObject::connect(buttonOk, SIGNAL(clicked()), Gui__Dialog__DlgPreferences, SLOT(accept()));
        QObject::connect(buttonCancel, SIGNAL(clicked()), Gui__Dialog__DlgPreferences, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgPreferences);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgPreferences)
    {
        Gui__Dialog__DlgPreferences->setWindowTitle(QApplication::translate("Gui::Dialog::DlgPreferences", "Preferences", 0, QApplication::UnicodeUTF8));
        buttonHelp->setText(QApplication::translate("Gui::Dialog::DlgPreferences", "&Help", 0, QApplication::UnicodeUTF8));
        buttonHelp->setShortcut(QApplication::translate("Gui::Dialog::DlgPreferences", "Alt+H", 0, QApplication::UnicodeUTF8));
        buttonOk->setText(QApplication::translate("Gui::Dialog::DlgPreferences", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
        buttonApply->setText(QApplication::translate("Gui::Dialog::DlgPreferences", "&Apply", 0, QApplication::UnicodeUTF8));
        buttonApply->setShortcut(QApplication::translate("Gui::Dialog::DlgPreferences", "Alt+A", 0, QApplication::UnicodeUTF8));
        buttonCancel->setText(QApplication::translate("Gui::Dialog::DlgPreferences", "&Cancel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgPreferences: public Ui_DlgPreferences {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGPREFERENCES_H
