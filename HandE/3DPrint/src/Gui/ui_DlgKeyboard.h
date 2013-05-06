/********************************************************************************
** Form generated from reading UI file 'DlgKeyboard.ui'
**
** Created: Thu Apr 18 22:16:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGKEYBOARD_H
#define UI_DLGKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Gui/Widgets.h"

namespace Gui {
namespace Dialog {

class Ui_DlgCustomKeyboard
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QLabel *textLabelDescriptionHeader;
    QLabel *textLabelDescription;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QLabel *TextLabelCategory;
    QComboBox *categoryBox;
    QLabel *TextLabelCommands;
    QTreeWidget *commandTreeWidget;
    QVBoxLayout *vboxLayout2;
    QLabel *textLabelShortcut;
    Gui::AccelLineEdit *accelLineEditShortcut;
    QLabel *textLabelNewShortcut;
    Gui::AccelLineEdit *editShortcut;
    QLabel *textLabelAssigned;
    QTreeWidget *assignedTreeWidget;
    QVBoxLayout *vboxLayout3;
    QPushButton *buttonAssign;
    QPushButton *buttonReset;
    QPushButton *buttonResetAll;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *Gui__Dialog__DlgCustomKeyboard)
    {
        if (Gui__Dialog__DlgCustomKeyboard->objectName().isEmpty())
            Gui__Dialog__DlgCustomKeyboard->setObjectName(QString::fromUtf8("Gui__Dialog__DlgCustomKeyboard"));
        Gui__Dialog__DlgCustomKeyboard->resize(578, 344);
        gridLayout = new QGridLayout(Gui__Dialog__DlgCustomKeyboard);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabelDescriptionHeader = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelDescriptionHeader->setObjectName(QString::fromUtf8("textLabelDescriptionHeader"));

        vboxLayout->addWidget(textLabelDescriptionHeader);

        textLabelDescription = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelDescription->setObjectName(QString::fromUtf8("textLabelDescription"));

        vboxLayout->addWidget(textLabelDescription);


        gridLayout->addLayout(vboxLayout, 1, 0, 1, 4);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        TextLabelCategory = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        TextLabelCategory->setObjectName(QString::fromUtf8("TextLabelCategory"));

        vboxLayout1->addWidget(TextLabelCategory);

        categoryBox = new QComboBox(Gui__Dialog__DlgCustomKeyboard);
        categoryBox->setObjectName(QString::fromUtf8("categoryBox"));

        vboxLayout1->addWidget(categoryBox);

        TextLabelCommands = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        TextLabelCommands->setObjectName(QString::fromUtf8("TextLabelCommands"));

        vboxLayout1->addWidget(TextLabelCommands);

        commandTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomKeyboard);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        commandTreeWidget->setHeaderItem(__qtreewidgetitem);
        commandTreeWidget->setObjectName(QString::fromUtf8("commandTreeWidget"));
        commandTreeWidget->setMinimumSize(QSize(220, 0));
        commandTreeWidget->setRootIsDecorated(false);

        vboxLayout1->addWidget(commandTreeWidget);


        gridLayout->addLayout(vboxLayout1, 0, 0, 1, 1);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        textLabelShortcut = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelShortcut->setObjectName(QString::fromUtf8("textLabelShortcut"));

        vboxLayout2->addWidget(textLabelShortcut);

        accelLineEditShortcut = new Gui::AccelLineEdit(Gui__Dialog__DlgCustomKeyboard);
        accelLineEditShortcut->setObjectName(QString::fromUtf8("accelLineEditShortcut"));
        accelLineEditShortcut->setEnabled(false);

        vboxLayout2->addWidget(accelLineEditShortcut);

        textLabelNewShortcut = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelNewShortcut->setObjectName(QString::fromUtf8("textLabelNewShortcut"));

        vboxLayout2->addWidget(textLabelNewShortcut);

        editShortcut = new Gui::AccelLineEdit(Gui__Dialog__DlgCustomKeyboard);
        editShortcut->setObjectName(QString::fromUtf8("editShortcut"));

        vboxLayout2->addWidget(editShortcut);

        textLabelAssigned = new QLabel(Gui__Dialog__DlgCustomKeyboard);
        textLabelAssigned->setObjectName(QString::fromUtf8("textLabelAssigned"));

        vboxLayout2->addWidget(textLabelAssigned);

        assignedTreeWidget = new QTreeWidget(Gui__Dialog__DlgCustomKeyboard);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        assignedTreeWidget->setHeaderItem(__qtreewidgetitem1);
        assignedTreeWidget->setObjectName(QString::fromUtf8("assignedTreeWidget"));
        assignedTreeWidget->setEnabled(false);
        assignedTreeWidget->setMinimumSize(QSize(220, 0));
        assignedTreeWidget->setRootIsDecorated(false);

        vboxLayout2->addWidget(assignedTreeWidget);


        gridLayout->addLayout(vboxLayout2, 0, 1, 1, 1);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        buttonAssign = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonAssign->setObjectName(QString::fromUtf8("buttonAssign"));

        vboxLayout3->addWidget(buttonAssign);

        buttonReset = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));

        vboxLayout3->addWidget(buttonReset);

        buttonResetAll = new QPushButton(Gui__Dialog__DlgCustomKeyboard);
        buttonResetAll->setObjectName(QString::fromUtf8("buttonResetAll"));

        vboxLayout3->addWidget(buttonResetAll);

        spacerItem1 = new QSpacerItem(41, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem1);


        gridLayout->addLayout(vboxLayout3, 0, 3, 1, 1);

#ifndef QT_NO_SHORTCUT
        TextLabelCategory->setBuddy(categoryBox);
        TextLabelCommands->setBuddy(commandTreeWidget);
        textLabelNewShortcut->setBuddy(editShortcut);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(categoryBox, commandTreeWidget);
        QWidget::setTabOrder(commandTreeWidget, accelLineEditShortcut);
        QWidget::setTabOrder(accelLineEditShortcut, buttonAssign);
        QWidget::setTabOrder(buttonAssign, buttonReset);
        QWidget::setTabOrder(buttonReset, buttonResetAll);

        retranslateUi(Gui__Dialog__DlgCustomKeyboard);

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgCustomKeyboard);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgCustomKeyboard)
    {
        Gui__Dialog__DlgCustomKeyboard->setWindowTitle(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Keyboard", 0, QApplication::UnicodeUTF8));
        textLabelDescriptionHeader->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Description:", 0, QApplication::UnicodeUTF8));
        textLabelDescription->setText(QString());
        TextLabelCategory->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Category:", 0, QApplication::UnicodeUTF8));
        TextLabelCommands->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "C&ommands:", 0, QApplication::UnicodeUTF8));
        textLabelShortcut->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Current shortcut:", 0, QApplication::UnicodeUTF8));
        textLabelNewShortcut->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Press &new shortcut:", 0, QApplication::UnicodeUTF8));
        textLabelAssigned->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Currently assigned to:", 0, QApplication::UnicodeUTF8));
        buttonAssign->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Assign", 0, QApplication::UnicodeUTF8));
        buttonAssign->setShortcut(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+A", 0, QApplication::UnicodeUTF8));
        buttonReset->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "&Reset", 0, QApplication::UnicodeUTF8));
        buttonReset->setShortcut(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+R", 0, QApplication::UnicodeUTF8));
        buttonResetAll->setText(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Re&set All", 0, QApplication::UnicodeUTF8));
        buttonResetAll->setShortcut(QApplication::translate("Gui::Dialog::DlgCustomKeyboard", "Alt+S", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgCustomKeyboard: public Ui_DlgCustomKeyboard {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGKEYBOARD_H
