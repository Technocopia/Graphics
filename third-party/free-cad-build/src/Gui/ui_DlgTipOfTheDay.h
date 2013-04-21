/********************************************************************************
** Form generated from reading UI file 'DlgTipOfTheDay.ui'
**
** Created: Thu Apr 18 22:16:54 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTIPOFTHEDAY_H
#define UI_DLGTIPOFTHEDAY_H

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
#include <QtGui/QSpacerItem>

namespace Gui {
namespace Dialog {

class Ui_DlgTipOfTheDay
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QLabel *pixmapLightbulb;
    QLabel *textTip;
    QLabel *textHeader;
    QHBoxLayout *hboxLayout;
    QCheckBox *checkShowTips;
    QSpacerItem *spacerItem1;
    QPushButton *buttonNextTip;
    QPushButton *buttonClose;

    void setupUi(QDialog *Gui__Dialog__DlgTipOfTheDay)
    {
        if (Gui__Dialog__DlgTipOfTheDay->objectName().isEmpty())
            Gui__Dialog__DlgTipOfTheDay->setObjectName(QString::fromUtf8("Gui__Dialog__DlgTipOfTheDay"));
        Gui__Dialog__DlgTipOfTheDay->resize(411, 270);
        Gui__Dialog__DlgTipOfTheDay->setModal(true);
        gridLayout = new QGridLayout(Gui__Dialog__DlgTipOfTheDay);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox1 = new QGroupBox(Gui__Dialog__DlgTipOfTheDay);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QPalette palette;
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(134, 132, 127));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(134, 132, 127));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(236, 233, 216));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(118, 116, 108));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(245, 244, 235));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(118, 116, 108));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(118, 116, 108));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(134, 132, 127));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(134, 132, 127));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        groupBox1->setPalette(palette);
        groupBox1->setAutoFillBackground(true);
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(1);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacerItem = new QSpacerItem(30, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 2, 0, 1, 1);

        pixmapLightbulb = new QLabel(groupBox1);
        pixmapLightbulb->setObjectName(QString::fromUtf8("pixmapLightbulb"));
        pixmapLightbulb->setMinimumSize(QSize(40, 46));
        pixmapLightbulb->setMaximumSize(QSize(40, 32767));
        QPalette palette1;
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(134, 132, 127));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette1.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(134, 132, 127));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(236, 233, 216));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(0, 0, 0));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette1.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(118, 116, 108));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(245, 244, 235));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(118, 116, 108));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(118, 116, 108));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(134, 132, 127));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(134, 132, 127));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette1.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        pixmapLightbulb->setPalette(palette1);
        pixmapLightbulb->setPixmap(QPixmap(QString::fromUtf8(":/icons/bulb.xpm")));
        pixmapLightbulb->setScaledContents(false);
        pixmapLightbulb->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout1->addWidget(pixmapLightbulb, 0, 0, 2, 1);

        textTip = new QLabel(groupBox1);
        textTip->setObjectName(QString::fromUtf8("textTip"));
        QPalette palette2;
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette2.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(236, 233, 216));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(0, 0, 0));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette2.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(118, 116, 108));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(245, 244, 235));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(118, 116, 108));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(118, 116, 108));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette2.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        textTip->setPalette(palette2);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        textTip->setFont(font);
        textTip->setAutoFillBackground(true);
        textTip->setAlignment(Qt::AlignVCenter);
        textTip->setWordWrap(true);
        textTip->setIndent(5);

        gridLayout1->addWidget(textTip, 1, 1, 2, 1);

        textHeader = new QLabel(groupBox1);
        textHeader->setObjectName(QString::fromUtf8("textHeader"));
        textHeader->setMaximumSize(QSize(32767, 50));
        QPalette palette3;
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette3.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(241, 239, 226));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(113, 111, 100));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(236, 233, 216));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(0, 0, 0));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette3.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(118, 116, 108));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(236, 233, 216));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(245, 244, 235));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(172, 168, 153));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(157, 155, 144));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(118, 116, 108));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(118, 116, 108));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(49, 106, 197));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(255, 0, 255));
        palette3.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        textHeader->setPalette(palette3);
        textHeader->setAutoFillBackground(true);
        textHeader->setAlignment(Qt::AlignVCenter);

        gridLayout1->addWidget(textHeader, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox1, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        checkShowTips = new QCheckBox(Gui__Dialog__DlgTipOfTheDay);
        checkShowTips->setObjectName(QString::fromUtf8("checkShowTips"));

        hboxLayout->addWidget(checkShowTips);

        spacerItem1 = new QSpacerItem(40, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        buttonNextTip = new QPushButton(Gui__Dialog__DlgTipOfTheDay);
        buttonNextTip->setObjectName(QString::fromUtf8("buttonNextTip"));
        buttonNextTip->setDefault(true);

        hboxLayout->addWidget(buttonNextTip);

        buttonClose = new QPushButton(Gui__Dialog__DlgTipOfTheDay);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));

        hboxLayout->addWidget(buttonClose);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(Gui__Dialog__DlgTipOfTheDay);
        QObject::connect(buttonClose, SIGNAL(clicked()), Gui__Dialog__DlgTipOfTheDay, SLOT(close()));

        QMetaObject::connectSlotsByName(Gui__Dialog__DlgTipOfTheDay);
    } // setupUi

    void retranslateUi(QDialog *Gui__Dialog__DlgTipOfTheDay)
    {
        Gui__Dialog__DlgTipOfTheDay->setWindowTitle(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "Tip of the day", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QString());
        textTip->setText(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "Tip of the day", 0, QApplication::UnicodeUTF8));
        textHeader->setText(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "<b><font face=\"Times New Roman\"><font size=\"+3\">Did you know...</font></font></b>", 0, QApplication::UnicodeUTF8));
        checkShowTips->setText(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "&Show tips at start up", 0, QApplication::UnicodeUTF8));
        checkShowTips->setShortcut(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "Alt+S", 0, QApplication::UnicodeUTF8));
        buttonNextTip->setText(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "&Next Tip", 0, QApplication::UnicodeUTF8));
        buttonNextTip->setShortcut(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "Alt+N", 0, QApplication::UnicodeUTF8));
        buttonClose->setText(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "&Close", 0, QApplication::UnicodeUTF8));
        buttonClose->setShortcut(QApplication::translate("Gui::Dialog::DlgTipOfTheDay", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Dialog
} // namespace Gui

namespace Gui {
namespace Dialog {
namespace Ui {
    class DlgTipOfTheDay: public Ui_DlgTipOfTheDay {};
} // namespace Ui
} // namespace Dialog
} // namespace Gui

#endif // UI_DLGTIPOFTHEDAY_H
