/********************************************************************************
** Form generated from reading UI file 'DlgSettingsImage.ui'
**
** Created: Thu Apr 18 07:04:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSETTINGSIMAGE_H
#define UI_DLGSETTINGSIMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

namespace Gui {
namespace Dialog {

class Ui_DlgSettingsImage
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxProp;
    QGridLayout *gridLayout1;
    QLabel *textLabelColor;
    QComboBox *comboBackground;
    QGroupBox *groupBoxDim;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem;
    QSpinBox *spinHeight;
    QSpinBox *spinWidth;
    QLabel *label_2;
    QLabel *textLabelWidth;
    QComboBox *standardSizeBox;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QLabel *label_3;
    QSpacerItem *spacerItem2;
    QLabel *textLabelHeight;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QPushButton *buttonRatioScreen;
    QPushButton *buttonRatio4x3;
    QPushButton *buttonRatio16x9;
    QPushButton *buttonRatio1x1;
    QGroupBox *buttonGroupComment;
    QGridLayout *gridLayout4;
    QRadioButton *radioButtonMiba;
    QTextEdit *textEditComment;
    QRadioButton *radioButtonComment;

    void setupUi(QWidget *Gui__Dialog__DlgSettingsImage)
    {
        if (Gui__Dialog__DlgSettingsImage->objectName().isEmpty())
            Gui__Dialog__DlgSettingsImage->setObjectName(QString::fromUtf8("Gui__Dialog__DlgSettingsImage"));
        Gui__Dialog__DlgSettingsImage->resize(440, 519);
        gridLayout = new QGridLayout(Gui__Dialog__DlgSettingsImage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxProp = new QGroupBox(Gui__Dialog__DlgSettingsImage);
        groupBoxProp->setObjectName(QString::fromUtf8("groupBoxProp"));
        gridLayout1 = new QGridLayout(groupBoxProp);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabelColor = new QLabel(groupBoxProp);
        textLabelColor->setObjectName(QString::fromUtf8("textLabelColor"));

        gridLayout1->addWidget(textLabelColor, 0, 0, 1, 1);

        comboBackground = new QComboBox(groupBoxProp);
        comboBackground->setObjectName(QString::fromUtf8("comboBackground"));

        gridLayout1->addWidget(comboBackground, 0, 2, 1, 1);


        gridLayout->addWidget(groupBoxProp, 1, 0, 1, 1);

        groupBoxDim = new QGroupBox(Gui__Dialog__DlgSettingsImage);
        groupBoxDim->setObjectName(QString::fromUtf8("groupBoxDim"));
        gridLayout2 = new QGridLayout(groupBoxDim);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem, 1, 1, 1, 1);

        spinHeight = new QSpinBox(groupBoxDim);
        spinHeight->setObjectName(QString::fromUtf8("spinHeight"));
        spinHeight->setMaximum(32767);
        spinHeight->setMinimum(1);

        gridLayout3->addWidget(spinHeight, 2, 2, 1, 1);

        spinWidth = new QSpinBox(groupBoxDim);
        spinWidth->setObjectName(QString::fromUtf8("spinWidth"));
        spinWidth->setMaximum(32767);
        spinWidth->setMinimum(1);

        gridLayout3->addWidget(spinWidth, 1, 2, 1, 1);

        label_2 = new QLabel(groupBoxDim);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout3->addWidget(label_2, 1, 3, 1, 1);

        textLabelWidth = new QLabel(groupBoxDim);
        textLabelWidth->setObjectName(QString::fromUtf8("textLabelWidth"));

        gridLayout3->addWidget(textLabelWidth, 1, 0, 1, 1);

        standardSizeBox = new QComboBox(groupBoxDim);
        standardSizeBox->setObjectName(QString::fromUtf8("standardSizeBox"));

        gridLayout3->addWidget(standardSizeBox, 0, 2, 1, 2);

        label = new QLabel(groupBoxDim);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout3->addWidget(label, 0, 0, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem1, 0, 1, 1, 1);

        label_3 = new QLabel(groupBoxDim);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout3->addWidget(label_3, 2, 3, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem2, 2, 1, 1, 1);

        textLabelHeight = new QLabel(groupBoxDim);
        textLabelHeight->setObjectName(QString::fromUtf8("textLabelHeight"));

        gridLayout3->addWidget(textLabelHeight, 2, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(groupBoxDim);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        hboxLayout->addWidget(textLabel1);

        buttonRatioScreen = new QPushButton(groupBoxDim);
        buttonRatioScreen->setObjectName(QString::fromUtf8("buttonRatioScreen"));

        hboxLayout->addWidget(buttonRatioScreen);

        buttonRatio4x3 = new QPushButton(groupBoxDim);
        buttonRatio4x3->setObjectName(QString::fromUtf8("buttonRatio4x3"));

        hboxLayout->addWidget(buttonRatio4x3);

        buttonRatio16x9 = new QPushButton(groupBoxDim);
        buttonRatio16x9->setObjectName(QString::fromUtf8("buttonRatio16x9"));

        hboxLayout->addWidget(buttonRatio16x9);

        buttonRatio1x1 = new QPushButton(groupBoxDim);
        buttonRatio1x1->setObjectName(QString::fromUtf8("buttonRatio1x1"));

        hboxLayout->addWidget(buttonRatio1x1);


        gridLayout2->addLayout(hboxLayout, 1, 0, 1, 1);


        gridLayout->addWidget(groupBoxDim, 0, 0, 1, 1);

        buttonGroupComment = new QGroupBox(Gui__Dialog__DlgSettingsImage);
        buttonGroupComment->setObjectName(QString::fromUtf8("buttonGroupComment"));
        buttonGroupComment->setEnabled(false);
        gridLayout4 = new QGridLayout(buttonGroupComment);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        radioButtonMiba = new QRadioButton(buttonGroupComment);
        radioButtonMiba->setObjectName(QString::fromUtf8("radioButtonMiba"));
        radioButtonMiba->setChecked(true);

        gridLayout4->addWidget(radioButtonMiba, 0, 0, 1, 1);

        textEditComment = new QTextEdit(buttonGroupComment);
        textEditComment->setObjectName(QString::fromUtf8("textEditComment"));
        textEditComment->setEnabled(false);

        gridLayout4->addWidget(textEditComment, 2, 0, 1, 1);

        radioButtonComment = new QRadioButton(buttonGroupComment);
        radioButtonComment->setObjectName(QString::fromUtf8("radioButtonComment"));

        gridLayout4->addWidget(radioButtonComment, 1, 0, 1, 1);


        gridLayout->addWidget(buttonGroupComment, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabelColor->setBuddy(comboBackground);
        textLabelWidth->setBuddy(spinWidth);
        textLabelHeight->setBuddy(spinHeight);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(standardSizeBox, spinWidth);
        QWidget::setTabOrder(spinWidth, spinHeight);
        QWidget::setTabOrder(spinHeight, buttonRatioScreen);
        QWidget::setTabOrder(buttonRatioScreen, buttonRatio4x3);
        QWidget::setTabOrder(buttonRatio4x3, buttonRatio16x9);
        QWidget::setTabOrder(buttonRatio16x9, buttonRatio1x1);
        QWidget::setTabOrder(buttonRatio1x1, comboBackground);
        QWidget::setTabOrder(comboBackground, radioButtonMiba);
        QWidget::setTabOrder(radioButtonMiba, radioButtonComment);
        QWidget::setTabOrder(radioButtonComment, textEditComment);

        retranslateUi(Gui__Dialog__DlgSettingsImage);
        QObject::connect(radioButtonComment, SIGNAL(toggled(bool)), textEditComment, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgSettingsImage);
    } // setupUi

    void retranslateUi(QWidget *Gui__Dialog__DlgSettingsImage)
    {
        Gui__Dialog__DlgSettingsImage->setWindowTitle(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Image settings", 0, QApplication::UnicodeUTF8));
        groupBoxProp->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Image properties", 0, QApplication::UnicodeUTF8));
        textLabelColor->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Back&ground:", 0, QApplication::UnicodeUTF8));
        comboBackground->clear();
        comboBackground->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Current", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "White", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Black", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Transparent", 0, QApplication::UnicodeUTF8)
        );
        groupBoxDim->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Image dimensions", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Pixel", 0, QApplication::UnicodeUTF8));
        textLabelWidth->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "&Width:", 0, QApplication::UnicodeUTF8));
        standardSizeBox->clear();
        standardSizeBox->insertItems(0, QStringList()
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Current screen", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Icon       32  x 32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Icon       64 x 64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "Icon       128 x 128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "CGA       320 x 200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "QVGA     320 x 240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "VGA       640 x 480", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "NTSC     720 x 480", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "PAL        768 x 578", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "SVGA     800 x 600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "XGA       1024 x 768", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "HD720   1280 x 720", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "SXGA     1280 x 1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "SXGA+   1400 x 1050", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "UXGA     1600 x 1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "HD1080 1920 x 1080", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "WUXGA  1920 x 1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "QXGA     2048 x 1538", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "WQXGA  2560 x 1600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "QSXGA   2560 x 2048", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "QUXGA   3200 \303\227 2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "HUXGA   6400 \303\227 4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Gui::Dialog::DlgSettingsImage", "!!!          10000 x 10000", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Standard sizes:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Pixel", 0, QApplication::UnicodeUTF8));
        textLabelHeight->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "&Height:", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Aspect ratio:", 0, QApplication::UnicodeUTF8));
        buttonRatioScreen->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "&Screen", 0, QApplication::UnicodeUTF8));
        buttonRatioScreen->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Alt+S", 0, QApplication::UnicodeUTF8));
        buttonRatio4x3->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "&4:3", 0, QApplication::UnicodeUTF8));
        buttonRatio4x3->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Alt+4", 0, QApplication::UnicodeUTF8));
        buttonRatio16x9->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "1&6:9", 0, QApplication::UnicodeUTF8));
        buttonRatio16x9->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Alt+6", 0, QApplication::UnicodeUTF8));
        buttonRatio1x1->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "&1:1", 0, QApplication::UnicodeUTF8));
        buttonRatio1x1->setShortcut(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Alt+1", 0, QApplication::UnicodeUTF8));
        buttonGroupComment->setTitle(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Image comment", 0, QApplication::UnicodeUTF8));
        radioButtonMiba->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Insert MIBA", 0, QApplication::UnicodeUTF8));
        radioButtonComment->setText(QApplication::translate("Gui::Dialog::DlgSettingsImage", "Insert comment", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgSettingsImage: public Ui_DlgSettingsImage {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGSETTINGSIMAGE_H
