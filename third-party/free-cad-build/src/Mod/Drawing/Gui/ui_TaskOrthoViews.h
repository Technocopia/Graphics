/********************************************************************************
** Form generated from reading UI file 'TaskOrthoViews.ui'
**
** Created: Thu Apr 18 07:23:43 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKORTHOVIEWS_H
#define UI_TASKORTHOVIEWS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

namespace DrawingGui {

class Ui_TaskOrthoViews
{
public:
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QComboBox *projection;
    QGridLayout *gridLayout_2;
    QLabel *textLabel1;
    QComboBox *primary;
    QLabel *label_2;
    QComboBox *rotate;
    QFrame *line;
    QGridLayout *gridLayout;
    QCheckBox *cb12;
    QCheckBox *cb13;
    QCheckBox *cb23;
    QCheckBox *cb33;
    QCheckBox *cb11;
    QCheckBox *cb31;
    QCheckBox *cb21;
    QCheckBox *cb32;
    QCheckBox *cb24;
    QCheckBox *cb20;
    QCheckBox *cb42;
    QCheckBox *cb22;
    QLabel *label_3;
    QCheckBox *cb02;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QCheckBox *auto_tog;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *scale_0;
    QLabel *label_5;
    QLineEdit *x_1;
    QLineEdit *y_2;
    QLabel *label_6;
    QLineEdit *spacing_h_3;
    QLineEdit *spacing_v_4;
    QFrame *line_3;
    QCheckBox *hidden;
    QCheckBox *smooth;
    QWidget *tab_2;

    void setupUi(QWidget *DrawingGui__TaskOrthoViews)
    {
        if (DrawingGui__TaskOrthoViews->objectName().isEmpty())
            DrawingGui__TaskOrthoViews->setObjectName(QString::fromUtf8("DrawingGui__TaskOrthoViews"));
        DrawingGui__TaskOrthoViews->resize(259, 496);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DrawingGui__TaskOrthoViews->sizePolicy().hasHeightForWidth());
        DrawingGui__TaskOrthoViews->setSizePolicy(sizePolicy);
        DrawingGui__TaskOrthoViews->setMinimumSize(QSize(250, 0));
        gridLayout_5 = new QGridLayout(DrawingGui__TaskOrthoViews);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(DrawingGui__TaskOrthoViews);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        projection = new QComboBox(DrawingGui__TaskOrthoViews);
        projection->setObjectName(QString::fromUtf8("projection"));
        projection->setEditable(false);

        horizontalLayout_3->addWidget(projection);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textLabel1 = new QLabel(DrawingGui__TaskOrthoViews);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout_2->addWidget(textLabel1, 0, 0, 1, 1);

        primary = new QComboBox(DrawingGui__TaskOrthoViews);
        primary->setObjectName(QString::fromUtf8("primary"));
        primary->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        primary->setFrame(true);

        gridLayout_2->addWidget(primary, 0, 1, 1, 1);

        label_2 = new QLabel(DrawingGui__TaskOrthoViews);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        rotate = new QComboBox(DrawingGui__TaskOrthoViews);
        rotate->insertItems(0, QStringList()
         << QString::fromUtf8("0")
         << QString::fromUtf8("90")
         << QString::fromUtf8("180")
         << QString::fromUtf8("270")
        );
        rotate->setObjectName(QString::fromUtf8("rotate"));

        gridLayout_2->addWidget(rotate, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 1, 0, 1, 1);

        line = new QFrame(DrawingGui__TaskOrthoViews);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb12 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb12->setObjectName(QString::fromUtf8("cb12"));
        cb12->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cb12->sizePolicy().hasHeightForWidth());
        cb12->setSizePolicy(sizePolicy1);
        cb12->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb12, 3, 1, 1, 1);

        cb13 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb13->setObjectName(QString::fromUtf8("cb13"));
        cb13->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb13->sizePolicy().hasHeightForWidth());
        cb13->setSizePolicy(sizePolicy1);
        cb13->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb13, 4, 1, 1, 1);

        cb23 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb23->setObjectName(QString::fromUtf8("cb23"));
        cb23->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb23->sizePolicy().hasHeightForWidth());
        cb23->setSizePolicy(sizePolicy1);
        cb23->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb23, 4, 2, 1, 1);

        cb33 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb33->setObjectName(QString::fromUtf8("cb33"));
        cb33->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb33->sizePolicy().hasHeightForWidth());
        cb33->setSizePolicy(sizePolicy1);
        cb33->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb33, 4, 3, 1, 1);

        cb11 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb11->setObjectName(QString::fromUtf8("cb11"));
        cb11->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb11->sizePolicy().hasHeightForWidth());
        cb11->setSizePolicy(sizePolicy1);
        cb11->setLayoutDirection(Qt::RightToLeft);
        cb11->setIconSize(QSize(16, 16));

        gridLayout->addWidget(cb11, 2, 1, 1, 1);

        cb31 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb31->setObjectName(QString::fromUtf8("cb31"));
        cb31->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb31->sizePolicy().hasHeightForWidth());
        cb31->setSizePolicy(sizePolicy1);
        cb31->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb31, 2, 3, 1, 1);

        cb21 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb21->setObjectName(QString::fromUtf8("cb21"));
        cb21->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb21->sizePolicy().hasHeightForWidth());
        cb21->setSizePolicy(sizePolicy1);
        cb21->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb21, 2, 2, 1, 1);

        cb32 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb32->setObjectName(QString::fromUtf8("cb32"));
        cb32->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb32->sizePolicy().hasHeightForWidth());
        cb32->setSizePolicy(sizePolicy1);
        cb32->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb32, 3, 3, 1, 1);

        cb24 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb24->setObjectName(QString::fromUtf8("cb24"));
        cb24->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb24->sizePolicy().hasHeightForWidth());
        cb24->setSizePolicy(sizePolicy1);
        cb24->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb24, 5, 2, 1, 1);

        cb20 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb20->setObjectName(QString::fromUtf8("cb20"));
        cb20->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb20->sizePolicy().hasHeightForWidth());
        cb20->setSizePolicy(sizePolicy1);
        cb20->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb20, 1, 2, 1, 1);

        cb42 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb42->setObjectName(QString::fromUtf8("cb42"));
        cb42->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb42->sizePolicy().hasHeightForWidth());
        cb42->setSizePolicy(sizePolicy1);
        cb42->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb42, 3, 4, 1, 1);

        cb22 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb22->setObjectName(QString::fromUtf8("cb22"));
        cb22->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb22->sizePolicy().hasHeightForWidth());
        cb22->setSizePolicy(sizePolicy1);
        cb22->setLayoutDirection(Qt::RightToLeft);
        cb22->setChecked(false);

        gridLayout->addWidget(cb22, 3, 2, 1, 1);

        label_3 = new QLabel(DrawingGui__TaskOrthoViews);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        cb02 = new QCheckBox(DrawingGui__TaskOrthoViews);
        cb02->setObjectName(QString::fromUtf8("cb02"));
        cb02->setEnabled(false);
        sizePolicy1.setHeightForWidth(cb02->sizePolicy().hasHeightForWidth());
        cb02->setSizePolicy(sizePolicy1);
        cb02->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(cb02, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 3, 0, 1, 1);

        line_2 = new QFrame(DrawingGui__TaskOrthoViews);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_2, 4, 0, 1, 1);

        tabWidget = new QTabWidget(DrawingGui__TaskOrthoViews);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(90, 230));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        auto_tog = new QCheckBox(tab);
        auto_tog->setObjectName(QString::fromUtf8("auto_tog"));
        auto_tog->setEnabled(true);
        auto_tog->setChecked(true);

        gridLayout_4->addWidget(auto_tog, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(false);
        label_4->setMargin(2);
        label_4->setIndent(0);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        scale_0 = new QLineEdit(tab);
        scale_0->setObjectName(QString::fromUtf8("scale_0"));
        scale_0->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scale_0->sizePolicy().hasHeightForWidth());
        scale_0->setSizePolicy(sizePolicy4);
        scale_0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(scale_0, 0, 1, 1, 2);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(false);
        label_5->setMargin(2);
        label_5->setIndent(0);

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        x_1 = new QLineEdit(tab);
        x_1->setObjectName(QString::fromUtf8("x_1"));
        x_1->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(x_1->sizePolicy().hasHeightForWidth());
        x_1->setSizePolicy(sizePolicy5);
        x_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(x_1, 1, 1, 1, 1);

        y_2 = new QLineEdit(tab);
        y_2->setObjectName(QString::fromUtf8("y_2"));
        y_2->setEnabled(false);
        sizePolicy5.setHeightForWidth(y_2->sizePolicy().hasHeightForWidth());
        y_2->setSizePolicy(sizePolicy5);
        y_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(y_2, 1, 2, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(false);
        label_6->setMargin(2);
        label_6->setIndent(0);

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        spacing_h_3 = new QLineEdit(tab);
        spacing_h_3->setObjectName(QString::fromUtf8("spacing_h_3"));
        spacing_h_3->setEnabled(false);
        spacing_h_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(spacing_h_3, 2, 1, 1, 1);

        spacing_v_4 = new QLineEdit(tab);
        spacing_v_4->setObjectName(QString::fromUtf8("spacing_v_4"));
        spacing_v_4->setEnabled(false);
        spacing_v_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(spacing_v_4, 2, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 0, 1, 1);

        line_3 = new QFrame(tab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 2, 0, 1, 1);

        hidden = new QCheckBox(tab);
        hidden->setObjectName(QString::fromUtf8("hidden"));
        hidden->setEnabled(true);

        gridLayout_4->addWidget(hidden, 3, 0, 1, 1);

        smooth = new QCheckBox(tab);
        smooth->setObjectName(QString::fromUtf8("smooth"));

        gridLayout_4->addWidget(smooth, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 5, 0, 1, 1);


        retranslateUi(DrawingGui__TaskOrthoViews);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DrawingGui__TaskOrthoViews);
    } // setupUi

    void retranslateUi(QWidget *DrawingGui__TaskOrthoViews)
    {
        DrawingGui__TaskOrthoViews->setWindowTitle(QApplication::translate("DrawingGui::TaskOrthoViews", "Orthographic Projection", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Projection", 0, QApplication::UnicodeUTF8));
        projection->clear();
        projection->insertItems(0, QStringList()
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Third Angle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DrawingGui::TaskOrthoViews", "First Angle", 0, QApplication::UnicodeUTF8)
        );
        textLabel1->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Primary View", 0, QApplication::UnicodeUTF8));
        primary->clear();
        primary->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Front", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Back", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Top", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DrawingGui::TaskOrthoViews", "Bottom", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "- Rotate", 0, QApplication::UnicodeUTF8));
        cb12->setText(QString());
        cb13->setText(QString());
        cb23->setText(QString());
        cb33->setText(QString());
        cb11->setText(QString());
        cb31->setText(QString());
        cb21->setText(QString());
        cb32->setText(QString());
        cb24->setText(QString());
        cb20->setText(QString());
        cb42->setText(QString());
#ifndef QT_NO_TOOLTIP
        cb22->setToolTip(QApplication::translate("DrawingGui::TaskOrthoViews", "Primary view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cb22->setText(QString());
        label_3->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Secondary Views", 0, QApplication::UnicodeUTF8));
        cb02->setText(QString());
        auto_tog->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Auto scale / position", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Scale", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Primary x / y", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Secondary dx / dy", 0, QApplication::UnicodeUTF8));
        hidden->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Show hidden", 0, QApplication::UnicodeUTF8));
        smooth->setText(QApplication::translate("DrawingGui::TaskOrthoViews", "Show smooth", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DrawingGui::TaskOrthoViews", "General", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DrawingGui::TaskOrthoViews", "Axonometric", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace DrawingGui

namespace DrawingGui {
namespace Ui {
    class TaskOrthoViews: public Ui_TaskOrthoViews {};
} // namespace Ui
} // namespace DrawingGui

#endif // UI_TASKORTHOVIEWS_H
