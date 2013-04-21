/********************************************************************************
** Form generated from reading UI file 'DemoMode.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOMODE_H
#define UI_DEMOMODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

namespace Gui {
namespace Dialog {

class Ui_DemoMode
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QSlider *speedSlider;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QCheckBox *fullscreen;
    QCheckBox *timerCheck;
    QSpinBox *timeout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout3;
    QSlider *angleSlider;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QPushButton *playButton;
    QPushButton *stopButton;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;

    void setupUi(QDialog *Gui__Dialog__DemoMode)
    {
        if (Gui__Dialog__DemoMode->objectName().isEmpty())
            Gui__Dialog__DemoMode->setObjectName(QString::fromUtf8("Gui__Dialog__DemoMode"));
        Gui__Dialog__DemoMode->resize(269, 267);
        gridLayout = new QGridLayout(Gui__Dialog__DemoMode);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Gui__Dialog__DemoMode);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        speedSlider = new QSlider(groupBox_2);
        speedSlider->setObjectName(QString::fromUtf8("speedSlider"));
        speedSlider->setMinimum(1);
        speedSlider->setMaximum(100);
        speedSlider->setValue(5);
        speedSlider->setOrientation(Qt::Horizontal);

        gridLayout2->addWidget(speedSlider, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox_2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        fullscreen = new QCheckBox(groupBox);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));

        hboxLayout->addWidget(fullscreen);

        timerCheck = new QCheckBox(groupBox);
        timerCheck->setObjectName(QString::fromUtf8("timerCheck"));

        hboxLayout->addWidget(timerCheck);

        timeout = new QSpinBox(groupBox);
        timeout->setObjectName(QString::fromUtf8("timeout"));
        timeout->setEnabled(false);
        timeout->setMaximum(600);
        timeout->setValue(30);

        hboxLayout->addWidget(timeout);


        gridLayout1->addLayout(hboxLayout, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout3 = new QGridLayout(groupBox_3);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        angleSlider = new QSlider(groupBox_3);
        angleSlider->setObjectName(QString::fromUtf8("angleSlider"));
        angleSlider->setMinimum(-90);
        angleSlider->setMaximum(90);
        angleSlider->setOrientation(Qt::Horizontal);

        gridLayout3->addWidget(angleSlider, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout3->addWidget(label_4, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout3->addWidget(label_3, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox_3, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        playButton = new QPushButton(Gui__Dialog__DemoMode);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        hboxLayout1->addWidget(playButton);

        stopButton = new QPushButton(Gui__Dialog__DemoMode);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        hboxLayout1->addWidget(stopButton);

        spacerItem1 = new QSpacerItem(81, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        okButton = new QPushButton(Gui__Dialog__DemoMode);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

        QWidget::setTabOrder(angleSlider, speedSlider);
        QWidget::setTabOrder(speedSlider, fullscreen);
        QWidget::setTabOrder(fullscreen, timerCheck);
        QWidget::setTabOrder(timerCheck, playButton);
        QWidget::setTabOrder(playButton, stopButton);
        QWidget::setTabOrder(stopButton, okButton);

        retranslateUi(Gui__Dialog__DemoMode);
        QObject::connect(okButton, SIGNAL(clicked()), Gui__Dialog__DemoMode, SLOT(accept()));
        QObject::connect(timerCheck, SIGNAL(toggled(bool)), timeout, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Gui__Dialog__DemoMode);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DemoMode)
    {
        Gui__Dialog__DemoMode->setWindowTitle(QApplication::translate("Gui::Dialog::DemoMode", "View Turntable", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("Gui::Dialog::DemoMode", "Speed", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gui::Dialog::DemoMode", "Maximum", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gui::Dialog::DemoMode", "Minimum", 0, QApplication::UnicodeUTF8));
        fullscreen->setText(QApplication::translate("Gui::Dialog::DemoMode", "Fullscreen", 0, QApplication::UnicodeUTF8));
        timerCheck->setText(QApplication::translate("Gui::Dialog::DemoMode", "Enable timer", 0, QApplication::UnicodeUTF8));
        timeout->setSuffix(QApplication::translate("Gui::Dialog::DemoMode", " s", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Gui::Dialog::DemoMode", "Angle", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Gui::Dialog::DemoMode", "90\302\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gui::Dialog::DemoMode", "-90\302\260", 0, QApplication::UnicodeUTF8));
        playButton->setText(QApplication::translate("Gui::Dialog::DemoMode", "Play", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("Gui::Dialog::DemoMode", "Stop", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("Gui::Dialog::DemoMode", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DemoMode: public Ui_DemoMode {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DEMOMODE_H
