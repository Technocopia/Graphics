/********************************************************************************
** Form generated from reading UI file 'Location.ui'
**
** Created: Thu Apr 18 22:32:06 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATION_H
#define UI_LOCATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Gui/InputVector.h"

namespace PartGui {

class Ui_Location
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    Gui::LocationWidget *loc;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *viewPositionButton;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *PartGui__Location)
    {
        if (PartGui__Location->objectName().isEmpty())
            PartGui__Location->setObjectName(QString::fromUtf8("PartGui__Location"));
        PartGui__Location->resize(209, 205);
        PartGui__Location->setProperty("sizeGripEnabled", QVariant(true));
        gridLayout_2 = new QGridLayout(PartGui__Location);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(PartGui__Location);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loc = new Gui::LocationWidget(groupBox);
        loc->setObjectName(QString::fromUtf8("loc"));

        gridLayout->addWidget(loc, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        viewPositionButton = new QPushButton(groupBox);
        viewPositionButton->setObjectName(QString::fromUtf8("viewPositionButton"));

        horizontalLayout->addWidget(viewPositionButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(PartGui__Location);

        QMetaObject::connectSlotsByName(PartGui__Location);
    } // setupUi

    void retranslateUi(QWidget *PartGui__Location)
    {
        PartGui__Location->setWindowTitle(QApplication::translate("PartGui::Location", "Location", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PartGui::Location", "Position", 0, QApplication::UnicodeUTF8));
        viewPositionButton->setText(QApplication::translate("PartGui::Location", "3D View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace PartGui

namespace PartGui {
namespace Ui {
    class Location: public Ui_Location {};
} // namespace Ui
} // namespace PartGui

#endif // UI_LOCATION_H
