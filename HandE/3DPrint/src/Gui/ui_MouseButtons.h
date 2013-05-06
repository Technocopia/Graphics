/********************************************************************************
** Form generated from reading UI file 'MouseButtons.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEBUTTONS_H
#define UI_MOUSEBUTTONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

namespace Gui {
namespace Dialog {

class Ui_MouseButtons
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *selectionLabel;
    QLabel *label_3;
    QLabel *panningLabel;
    QLabel *label_4;
    QLabel *rotationLabel;
    QLabel *label_5;
    QLabel *zoomingLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Gui__Dialog__MouseButtons)
    {
        if (Gui__Dialog__MouseButtons->objectName().isEmpty())
            Gui__Dialog__MouseButtons->setObjectName(QString::fromUtf8("Gui__Dialog__MouseButtons"));
        Gui__Dialog__MouseButtons->resize(364, 239);
        gridLayout_3 = new QGridLayout(Gui__Dialog__MouseButtons);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(Gui__Dialog__MouseButtons);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        selectionLabel = new QLabel(groupBox);
        selectionLabel->setObjectName(QString::fromUtf8("selectionLabel"));

        gridLayout->addWidget(selectionLabel, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        panningLabel = new QLabel(groupBox);
        panningLabel->setObjectName(QString::fromUtf8("panningLabel"));

        gridLayout->addWidget(panningLabel, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        rotationLabel = new QLabel(groupBox);
        rotationLabel->setObjectName(QString::fromUtf8("rotationLabel"));

        gridLayout->addWidget(rotationLabel, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        zoomingLabel = new QLabel(groupBox);
        zoomingLabel->setObjectName(QString::fromUtf8("zoomingLabel"));

        gridLayout->addWidget(zoomingLabel, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Gui__Dialog__MouseButtons);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_3->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__MouseButtons);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gui__Dialog__MouseButtons, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gui__Dialog__MouseButtons, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gui__Dialog__MouseButtons);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__MouseButtons)
    {
        Gui__Dialog__MouseButtons->setWindowTitle(QApplication::translate("Gui::Dialog::MouseButtons", "Mouse buttons", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Gui::Dialog::MouseButtons", "Configuration", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::MouseButtons", "Selection:", 0, QApplication::UnicodeUTF8));
        selectionLabel->setText(QString());
        label_3->setText(QApplication::translate("Gui::Dialog::MouseButtons", "Panning", 0, QApplication::UnicodeUTF8));
        panningLabel->setText(QString());
        label_4->setText(QApplication::translate("Gui::Dialog::MouseButtons", "Rotation:", 0, QApplication::UnicodeUTF8));
        rotationLabel->setText(QString());
        label_5->setText(QApplication::translate("Gui::Dialog::MouseButtons", "Zooming:", 0, QApplication::UnicodeUTF8));
        zoomingLabel->setText(QString());
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class MouseButtons: public Ui_MouseButtons {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_MOUSEBUTTONS_H
