/********************************************************************************
** Form generated from reading UI file 'docktouchcontrols.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKTOUCHCONTROLS_H
#define UI_DOCKTOUCHCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockTouchControls
{
public:
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_touch_controls;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_top;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Numbers;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_d_2;
    QPushButton *pushButton_d_3;
    QPushButton *pushButton_d_5;
    QPushButton *pushButton_d_6;
    QPushButton *pushButton_d_4;
    QPushButton *pushButton_d_1;
    QPushButton *pushButton_d_7;
    QPushButton *pushButton_d_8;
    QPushButton *pushButton_d_9;
    QPushButton *pushButton_d_0;
    QPushButton *pushButton_d_back;
    QPushButton *pushButton_d_dec;
    QWidget *tab_Letters;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_k_a;
    QPushButton *pushButton_k_b;
    QPushButton *pushButton_k_k;
    QPushButton *pushButton_k_f;
    QPushButton *pushButton_k_e;
    QPushButton *pushButton_k_c;
    QPushButton *pushButton_k_p;
    QPushButton *pushButton_k_u;
    QPushButton *pushButton_k_d;
    QPushButton *pushButton_k_z;
    QPushButton *pushButton_k_g;
    QPushButton *pushButton_k_h;
    QPushButton *pushButton_k_i;
    QPushButton *pushButton_k_j;
    QPushButton *pushButton_k_o;
    QPushButton *pushButton_k_t;
    QPushButton *pushButton_k_y;
    QPushButton *pushButton_k_back;
    QPushButton *pushButton_k_case;
    QPushButton *pushButton_k_space;
    QPushButton *pushButton_k_q_mark;
    QPushButton *pushButton_k_v;
    QPushButton *pushButton_k_w;
    QPushButton *pushButton_k_x;
    QPushButton *pushButton_k_s;
    QPushButton *pushButton_k_r;
    QPushButton *pushButton_k_q;
    QPushButton *pushButton_k_l;
    QPushButton *pushButton_k_m;
    QPushButton *pushButton_k_n;
    QSplitter *splitter;
    QFrame *frame_FQ;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_fq_up;
    QPushButton *pushButton_fq_scan;
    QPushButton *pushButton_fq_down;
    QFrame *frame_SQ;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_sq_up;
    QPushButton *pushButton_sq_auto;
    QPushButton *pushButton_sq_down;
    QFrame *frame_middle;
    QGridLayout *gridLayout_3;
    QLabel *label_width;
    QLabel *label_offset;
    QLCDNumber *lcdNumber_offset;
    QLCDNumber *lcdNumber_width;
    QPushButton *pushButton_offset_up;
    QPushButton *pushButton_offset_down;
    QPushButton *pushButton_width_up;
    QPushButton *pushButton_width_down;
    QFrame *frame_bottom;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_decode;
    QPushButton *pushButton_gain;
    QPushButton *pushButton_replay;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_mute;
    QPushButton *pushButton_scan_custom;
    QPushButton *pushButton_record;
    QPushButton *pushButton_scan_fdpd;
    QPushButton *pushButton_scan_ems;
    QPushButton *pushButton_scan_wx;
    QFrame *frame_select;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_up;
    QPushButton *pushButton_enter;
    QPushButton *pushButton_down;

    void setupUi(QDockWidget *DockTouchControls)
    {
        if (DockTouchControls->objectName().isEmpty())
            DockTouchControls->setObjectName(QString::fromUtf8("DockTouchControls"));
        DockTouchControls->resize(295, 402);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockTouchControls->sizePolicy().hasHeightForWidth());
        DockTouchControls->setSizePolicy(sizePolicy);
        DockTouchControls->setMinimumSize(QSize(295, 402));
        DockTouchControls->setMaximumSize(QSize(480, 872));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(46, 52, 54, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(69, 78, 81, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(57, 65, 67, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(23, 26, 27, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(31, 35, 36, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(48, 140, 198, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QBrush brush13(QColor(239, 239, 239, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush14(QColor(202, 202, 202, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        QBrush brush15(QColor(159, 159, 159, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        QBrush brush16(QColor(184, 184, 184, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        QBrush brush17(QColor(118, 118, 118, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush17);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        QBrush brush18(QColor(247, 247, 247, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        QBrush brush19(QColor(0, 0, 0, 255));
        brush19.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush19);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush20(QColor(177, 177, 177, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        QBrush brush21(QColor(145, 145, 145, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush21);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        QBrush brush22(QColor(0, 0, 0, 255));
        brush22.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush22);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        DockTouchControls->setPalette(palette);
        DockTouchControls->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockTouchControls->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        sizePolicy.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy);
        dockWidgetContents->setMinimumSize(QSize(295, 0));
        dockWidgetContents->setMaximumSize(QSize(590, 980));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        QBrush brush23(QColor(0, 0, 0, 255));
        brush23.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush23);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        QBrush brush24(QColor(0, 0, 0, 255));
        brush24.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush24);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        dockWidgetContents->setPalette(palette1);
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_touch_controls = new QFrame(dockWidgetContents);
        frame_touch_controls->setObjectName(QString::fromUtf8("frame_touch_controls"));
        sizePolicy.setHeightForWidth(frame_touch_controls->sizePolicy().hasHeightForWidth());
        frame_touch_controls->setSizePolicy(sizePolicy);
        frame_touch_controls->setMinimumSize(QSize(295, 0));
        frame_touch_controls->setMaximumSize(QSize(590, 980));
        verticalLayout_3 = new QVBoxLayout(frame_touch_controls);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_top = new QFrame(frame_touch_controls);
        frame_top->setObjectName(QString::fromUtf8("frame_top"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame_top->sizePolicy().hasHeightForWidth());
        frame_top->setSizePolicy(sizePolicy1);
        frame_top->setMinimumSize(QSize(295, 0));
        frame_top->setMaximumSize(QSize(590, 450));
        horizontalLayout = new QHBoxLayout(frame_top);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 2, 0);
        tabWidget = new QTabWidget(frame_top);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(210, 0));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tab_Numbers = new QWidget();
        tab_Numbers->setObjectName(QString::fromUtf8("tab_Numbers"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab_Numbers->sizePolicy().hasHeightForWidth());
        tab_Numbers->setSizePolicy(sizePolicy2);
        tab_Numbers->setMinimumSize(QSize(200, 0));
        tab_Numbers->setMaximumSize(QSize(400, 348));
        gridLayout_5 = new QGridLayout(tab_Numbers);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(1, 1, 1, 1);
        pushButton_d_2 = new QPushButton(tab_Numbers);
        pushButton_d_2->setObjectName(QString::fromUtf8("pushButton_d_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(pushButton_d_2->sizePolicy().hasHeightForWidth());
        pushButton_d_2->setSizePolicy(sizePolicy3);
        pushButton_d_2->setMinimumSize(QSize(30, 43));
        pushButton_d_2->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_2->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_2, 0, 1, 1, 1);

        pushButton_d_3 = new QPushButton(tab_Numbers);
        pushButton_d_3->setObjectName(QString::fromUtf8("pushButton_d_3"));
        sizePolicy3.setHeightForWidth(pushButton_d_3->sizePolicy().hasHeightForWidth());
        pushButton_d_3->setSizePolicy(sizePolicy3);
        pushButton_d_3->setMinimumSize(QSize(30, 43));
        pushButton_d_3->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_3->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_3, 0, 2, 1, 1);

        pushButton_d_5 = new QPushButton(tab_Numbers);
        pushButton_d_5->setObjectName(QString::fromUtf8("pushButton_d_5"));
        sizePolicy3.setHeightForWidth(pushButton_d_5->sizePolicy().hasHeightForWidth());
        pushButton_d_5->setSizePolicy(sizePolicy3);
        pushButton_d_5->setMinimumSize(QSize(30, 43));
        pushButton_d_5->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_5->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_5, 1, 1, 1, 1);

        pushButton_d_6 = new QPushButton(tab_Numbers);
        pushButton_d_6->setObjectName(QString::fromUtf8("pushButton_d_6"));
        sizePolicy3.setHeightForWidth(pushButton_d_6->sizePolicy().hasHeightForWidth());
        pushButton_d_6->setSizePolicy(sizePolicy3);
        pushButton_d_6->setMinimumSize(QSize(30, 43));
        pushButton_d_6->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_6->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_6, 1, 2, 1, 1);

        pushButton_d_4 = new QPushButton(tab_Numbers);
        pushButton_d_4->setObjectName(QString::fromUtf8("pushButton_d_4"));
        sizePolicy3.setHeightForWidth(pushButton_d_4->sizePolicy().hasHeightForWidth());
        pushButton_d_4->setSizePolicy(sizePolicy3);
        pushButton_d_4->setMinimumSize(QSize(30, 43));
        pushButton_d_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_4->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_4, 1, 0, 1, 1);

        pushButton_d_1 = new QPushButton(tab_Numbers);
        pushButton_d_1->setObjectName(QString::fromUtf8("pushButton_d_1"));
        sizePolicy3.setHeightForWidth(pushButton_d_1->sizePolicy().hasHeightForWidth());
        pushButton_d_1->setSizePolicy(sizePolicy3);
        pushButton_d_1->setMinimumSize(QSize(30, 43));
        pushButton_d_1->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_1->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_1, 0, 0, 1, 1);

        pushButton_d_7 = new QPushButton(tab_Numbers);
        pushButton_d_7->setObjectName(QString::fromUtf8("pushButton_d_7"));
        sizePolicy3.setHeightForWidth(pushButton_d_7->sizePolicy().hasHeightForWidth());
        pushButton_d_7->setSizePolicy(sizePolicy3);
        pushButton_d_7->setMinimumSize(QSize(30, 43));
        pushButton_d_7->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_7->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_7, 2, 0, 1, 1);

        pushButton_d_8 = new QPushButton(tab_Numbers);
        pushButton_d_8->setObjectName(QString::fromUtf8("pushButton_d_8"));
        sizePolicy3.setHeightForWidth(pushButton_d_8->sizePolicy().hasHeightForWidth());
        pushButton_d_8->setSizePolicy(sizePolicy3);
        pushButton_d_8->setMinimumSize(QSize(30, 43));
        pushButton_d_8->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_8->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_8, 2, 1, 1, 1);

        pushButton_d_9 = new QPushButton(tab_Numbers);
        pushButton_d_9->setObjectName(QString::fromUtf8("pushButton_d_9"));
        sizePolicy3.setHeightForWidth(pushButton_d_9->sizePolicy().hasHeightForWidth());
        pushButton_d_9->setSizePolicy(sizePolicy3);
        pushButton_d_9->setMinimumSize(QSize(30, 43));
        pushButton_d_9->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_9->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_9, 2, 2, 1, 1);

        pushButton_d_0 = new QPushButton(tab_Numbers);
        pushButton_d_0->setObjectName(QString::fromUtf8("pushButton_d_0"));
        sizePolicy3.setHeightForWidth(pushButton_d_0->sizePolicy().hasHeightForWidth());
        pushButton_d_0->setSizePolicy(sizePolicy3);
        pushButton_d_0->setMinimumSize(QSize(30, 43));
        pushButton_d_0->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_0->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_0, 3, 1, 1, 1);

        pushButton_d_back = new QPushButton(tab_Numbers);
        pushButton_d_back->setObjectName(QString::fromUtf8("pushButton_d_back"));
        sizePolicy3.setHeightForWidth(pushButton_d_back->sizePolicy().hasHeightForWidth());
        pushButton_d_back->setSizePolicy(sizePolicy3);
        pushButton_d_back->setMinimumSize(QSize(30, 43));
        pushButton_d_back->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_back->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_back, 3, 2, 1, 1);

        pushButton_d_dec = new QPushButton(tab_Numbers);
        pushButton_d_dec->setObjectName(QString::fromUtf8("pushButton_d_dec"));
        sizePolicy3.setHeightForWidth(pushButton_d_dec->sizePolicy().hasHeightForWidth());
        pushButton_d_dec->setSizePolicy(sizePolicy3);
        pushButton_d_dec->setMinimumSize(QSize(30, 43));
        pushButton_d_dec->setMaximumSize(QSize(16777215, 16777215));
        pushButton_d_dec->setFocusPolicy(Qt::NoFocus);

        gridLayout_5->addWidget(pushButton_d_dec, 3, 0, 1, 1);

        tabWidget->addTab(tab_Numbers, QString());
        tab_Letters = new QWidget();
        tab_Letters->setObjectName(QString::fromUtf8("tab_Letters"));
        sizePolicy2.setHeightForWidth(tab_Letters->sizePolicy().hasHeightForWidth());
        tab_Letters->setSizePolicy(sizePolicy2);
        tab_Letters->setMinimumSize(QSize(200, 0));
        tab_Letters->setMaximumSize(QSize(400, 348));
        gridLayout_6 = new QGridLayout(tab_Letters);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        pushButton_k_a = new QPushButton(tab_Letters);
        pushButton_k_a->setObjectName(QString::fromUtf8("pushButton_k_a"));
        sizePolicy3.setHeightForWidth(pushButton_k_a->sizePolicy().hasHeightForWidth());
        pushButton_k_a->setSizePolicy(sizePolicy3);
        pushButton_k_a->setMinimumSize(QSize(35, 28));
        pushButton_k_a->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_a->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_a->setFocusPolicy(Qt::NoFocus);
        pushButton_k_a->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_a, 0, 0, 1, 1);

        pushButton_k_b = new QPushButton(tab_Letters);
        pushButton_k_b->setObjectName(QString::fromUtf8("pushButton_k_b"));
        sizePolicy3.setHeightForWidth(pushButton_k_b->sizePolicy().hasHeightForWidth());
        pushButton_k_b->setSizePolicy(sizePolicy3);
        pushButton_k_b->setMinimumSize(QSize(35, 28));
        pushButton_k_b->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_b->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_b->setFocusPolicy(Qt::NoFocus);
        pushButton_k_b->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_b, 0, 1, 1, 1);

        pushButton_k_k = new QPushButton(tab_Letters);
        pushButton_k_k->setObjectName(QString::fromUtf8("pushButton_k_k"));
        sizePolicy3.setHeightForWidth(pushButton_k_k->sizePolicy().hasHeightForWidth());
        pushButton_k_k->setSizePolicy(sizePolicy3);
        pushButton_k_k->setMinimumSize(QSize(35, 28));
        pushButton_k_k->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_k->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_k->setFocusPolicy(Qt::NoFocus);
        pushButton_k_k->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_k, 2, 0, 1, 1);

        pushButton_k_f = new QPushButton(tab_Letters);
        pushButton_k_f->setObjectName(QString::fromUtf8("pushButton_k_f"));
        sizePolicy3.setHeightForWidth(pushButton_k_f->sizePolicy().hasHeightForWidth());
        pushButton_k_f->setSizePolicy(sizePolicy3);
        pushButton_k_f->setMinimumSize(QSize(35, 28));
        pushButton_k_f->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_f->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_f->setFocusPolicy(Qt::NoFocus);
        pushButton_k_f->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_f, 1, 0, 1, 1);

        pushButton_k_e = new QPushButton(tab_Letters);
        pushButton_k_e->setObjectName(QString::fromUtf8("pushButton_k_e"));
        sizePolicy3.setHeightForWidth(pushButton_k_e->sizePolicy().hasHeightForWidth());
        pushButton_k_e->setSizePolicy(sizePolicy3);
        pushButton_k_e->setMinimumSize(QSize(35, 28));
        pushButton_k_e->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_e->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_e->setFocusPolicy(Qt::NoFocus);
        pushButton_k_e->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_e, 0, 4, 1, 1);

        pushButton_k_c = new QPushButton(tab_Letters);
        pushButton_k_c->setObjectName(QString::fromUtf8("pushButton_k_c"));
        sizePolicy3.setHeightForWidth(pushButton_k_c->sizePolicy().hasHeightForWidth());
        pushButton_k_c->setSizePolicy(sizePolicy3);
        pushButton_k_c->setMinimumSize(QSize(35, 28));
        pushButton_k_c->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_c->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_c->setFocusPolicy(Qt::NoFocus);
        pushButton_k_c->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_c, 0, 2, 1, 1);

        pushButton_k_p = new QPushButton(tab_Letters);
        pushButton_k_p->setObjectName(QString::fromUtf8("pushButton_k_p"));
        sizePolicy3.setHeightForWidth(pushButton_k_p->sizePolicy().hasHeightForWidth());
        pushButton_k_p->setSizePolicy(sizePolicy3);
        pushButton_k_p->setMinimumSize(QSize(35, 28));
        pushButton_k_p->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_p->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_p->setFocusPolicy(Qt::NoFocus);
        pushButton_k_p->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_p, 3, 0, 1, 1);

        pushButton_k_u = new QPushButton(tab_Letters);
        pushButton_k_u->setObjectName(QString::fromUtf8("pushButton_k_u"));
        sizePolicy3.setHeightForWidth(pushButton_k_u->sizePolicy().hasHeightForWidth());
        pushButton_k_u->setSizePolicy(sizePolicy3);
        pushButton_k_u->setMinimumSize(QSize(35, 28));
        pushButton_k_u->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_u->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_u->setFocusPolicy(Qt::NoFocus);
        pushButton_k_u->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_u, 4, 0, 1, 1);

        pushButton_k_d = new QPushButton(tab_Letters);
        pushButton_k_d->setObjectName(QString::fromUtf8("pushButton_k_d"));
        sizePolicy3.setHeightForWidth(pushButton_k_d->sizePolicy().hasHeightForWidth());
        pushButton_k_d->setSizePolicy(sizePolicy3);
        pushButton_k_d->setMinimumSize(QSize(35, 28));
        pushButton_k_d->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_d->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_d->setFocusPolicy(Qt::NoFocus);
        pushButton_k_d->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_d, 0, 3, 1, 1);

        pushButton_k_z = new QPushButton(tab_Letters);
        pushButton_k_z->setObjectName(QString::fromUtf8("pushButton_k_z"));
        sizePolicy3.setHeightForWidth(pushButton_k_z->sizePolicy().hasHeightForWidth());
        pushButton_k_z->setSizePolicy(sizePolicy3);
        pushButton_k_z->setMinimumSize(QSize(35, 28));
        pushButton_k_z->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_z->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_z->setFocusPolicy(Qt::NoFocus);
        pushButton_k_z->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_z, 5, 0, 1, 1);

        pushButton_k_g = new QPushButton(tab_Letters);
        pushButton_k_g->setObjectName(QString::fromUtf8("pushButton_k_g"));
        sizePolicy3.setHeightForWidth(pushButton_k_g->sizePolicy().hasHeightForWidth());
        pushButton_k_g->setSizePolicy(sizePolicy3);
        pushButton_k_g->setMinimumSize(QSize(35, 28));
        pushButton_k_g->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_g->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_g->setFocusPolicy(Qt::NoFocus);
        pushButton_k_g->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_g, 1, 1, 1, 1);

        pushButton_k_h = new QPushButton(tab_Letters);
        pushButton_k_h->setObjectName(QString::fromUtf8("pushButton_k_h"));
        sizePolicy3.setHeightForWidth(pushButton_k_h->sizePolicy().hasHeightForWidth());
        pushButton_k_h->setSizePolicy(sizePolicy3);
        pushButton_k_h->setMinimumSize(QSize(35, 28));
        pushButton_k_h->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_h->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_h->setFocusPolicy(Qt::NoFocus);
        pushButton_k_h->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_h, 1, 2, 1, 1);

        pushButton_k_i = new QPushButton(tab_Letters);
        pushButton_k_i->setObjectName(QString::fromUtf8("pushButton_k_i"));
        sizePolicy3.setHeightForWidth(pushButton_k_i->sizePolicy().hasHeightForWidth());
        pushButton_k_i->setSizePolicy(sizePolicy3);
        pushButton_k_i->setMinimumSize(QSize(35, 28));
        pushButton_k_i->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_i->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_i->setFocusPolicy(Qt::NoFocus);
        pushButton_k_i->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_i, 1, 3, 1, 1);

        pushButton_k_j = new QPushButton(tab_Letters);
        pushButton_k_j->setObjectName(QString::fromUtf8("pushButton_k_j"));
        sizePolicy3.setHeightForWidth(pushButton_k_j->sizePolicy().hasHeightForWidth());
        pushButton_k_j->setSizePolicy(sizePolicy3);
        pushButton_k_j->setMinimumSize(QSize(35, 28));
        pushButton_k_j->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_j->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_j->setFocusPolicy(Qt::NoFocus);
        pushButton_k_j->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_j, 1, 4, 1, 1);

        pushButton_k_o = new QPushButton(tab_Letters);
        pushButton_k_o->setObjectName(QString::fromUtf8("pushButton_k_o"));
        sizePolicy3.setHeightForWidth(pushButton_k_o->sizePolicy().hasHeightForWidth());
        pushButton_k_o->setSizePolicy(sizePolicy3);
        pushButton_k_o->setMinimumSize(QSize(35, 28));
        pushButton_k_o->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_o->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_o->setFocusPolicy(Qt::NoFocus);
        pushButton_k_o->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_o, 2, 4, 1, 1);

        pushButton_k_t = new QPushButton(tab_Letters);
        pushButton_k_t->setObjectName(QString::fromUtf8("pushButton_k_t"));
        sizePolicy3.setHeightForWidth(pushButton_k_t->sizePolicy().hasHeightForWidth());
        pushButton_k_t->setSizePolicy(sizePolicy3);
        pushButton_k_t->setMinimumSize(QSize(35, 28));
        pushButton_k_t->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_t->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_t->setFocusPolicy(Qt::NoFocus);
        pushButton_k_t->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_t, 3, 4, 1, 1);

        pushButton_k_y = new QPushButton(tab_Letters);
        pushButton_k_y->setObjectName(QString::fromUtf8("pushButton_k_y"));
        sizePolicy3.setHeightForWidth(pushButton_k_y->sizePolicy().hasHeightForWidth());
        pushButton_k_y->setSizePolicy(sizePolicy3);
        pushButton_k_y->setMinimumSize(QSize(35, 28));
        pushButton_k_y->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_y->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_y->setFocusPolicy(Qt::NoFocus);
        pushButton_k_y->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_y, 4, 4, 1, 1);

        pushButton_k_back = new QPushButton(tab_Letters);
        pushButton_k_back->setObjectName(QString::fromUtf8("pushButton_k_back"));
        sizePolicy3.setHeightForWidth(pushButton_k_back->sizePolicy().hasHeightForWidth());
        pushButton_k_back->setSizePolicy(sizePolicy3);
        pushButton_k_back->setMinimumSize(QSize(35, 28));
        pushButton_k_back->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_back->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_back->setFocusPolicy(Qt::NoFocus);
        pushButton_k_back->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_back, 5, 4, 1, 1);

        pushButton_k_case = new QPushButton(tab_Letters);
        pushButton_k_case->setObjectName(QString::fromUtf8("pushButton_k_case"));
        sizePolicy3.setHeightForWidth(pushButton_k_case->sizePolicy().hasHeightForWidth());
        pushButton_k_case->setSizePolicy(sizePolicy3);
        pushButton_k_case->setMinimumSize(QSize(35, 28));
        pushButton_k_case->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_case->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_case->setFocusPolicy(Qt::NoFocus);
        pushButton_k_case->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_case, 5, 3, 1, 1);

        pushButton_k_space = new QPushButton(tab_Letters);
        pushButton_k_space->setObjectName(QString::fromUtf8("pushButton_k_space"));
        sizePolicy3.setHeightForWidth(pushButton_k_space->sizePolicy().hasHeightForWidth());
        pushButton_k_space->setSizePolicy(sizePolicy3);
        pushButton_k_space->setMinimumSize(QSize(35, 28));
        pushButton_k_space->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_space->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_space->setFocusPolicy(Qt::NoFocus);
        pushButton_k_space->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_space, 5, 2, 1, 1);

        pushButton_k_q_mark = new QPushButton(tab_Letters);
        pushButton_k_q_mark->setObjectName(QString::fromUtf8("pushButton_k_q_mark"));
        sizePolicy3.setHeightForWidth(pushButton_k_q_mark->sizePolicy().hasHeightForWidth());
        pushButton_k_q_mark->setSizePolicy(sizePolicy3);
        pushButton_k_q_mark->setMinimumSize(QSize(35, 28));
        pushButton_k_q_mark->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_q_mark->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_q_mark->setFocusPolicy(Qt::NoFocus);
        pushButton_k_q_mark->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_q_mark, 5, 1, 1, 1);

        pushButton_k_v = new QPushButton(tab_Letters);
        pushButton_k_v->setObjectName(QString::fromUtf8("pushButton_k_v"));
        sizePolicy3.setHeightForWidth(pushButton_k_v->sizePolicy().hasHeightForWidth());
        pushButton_k_v->setSizePolicy(sizePolicy3);
        pushButton_k_v->setMinimumSize(QSize(35, 28));
        pushButton_k_v->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_v->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_v->setFocusPolicy(Qt::NoFocus);
        pushButton_k_v->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_v, 4, 1, 1, 1);

        pushButton_k_w = new QPushButton(tab_Letters);
        pushButton_k_w->setObjectName(QString::fromUtf8("pushButton_k_w"));
        sizePolicy3.setHeightForWidth(pushButton_k_w->sizePolicy().hasHeightForWidth());
        pushButton_k_w->setSizePolicy(sizePolicy3);
        pushButton_k_w->setMinimumSize(QSize(35, 28));
        pushButton_k_w->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_w->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_w->setFocusPolicy(Qt::NoFocus);
        pushButton_k_w->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_w, 4, 2, 1, 1);

        pushButton_k_x = new QPushButton(tab_Letters);
        pushButton_k_x->setObjectName(QString::fromUtf8("pushButton_k_x"));
        sizePolicy3.setHeightForWidth(pushButton_k_x->sizePolicy().hasHeightForWidth());
        pushButton_k_x->setSizePolicy(sizePolicy3);
        pushButton_k_x->setMinimumSize(QSize(35, 28));
        pushButton_k_x->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_x->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_x->setFocusPolicy(Qt::NoFocus);
        pushButton_k_x->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_x, 4, 3, 1, 1);

        pushButton_k_s = new QPushButton(tab_Letters);
        pushButton_k_s->setObjectName(QString::fromUtf8("pushButton_k_s"));
        sizePolicy3.setHeightForWidth(pushButton_k_s->sizePolicy().hasHeightForWidth());
        pushButton_k_s->setSizePolicy(sizePolicy3);
        pushButton_k_s->setMinimumSize(QSize(35, 28));
        pushButton_k_s->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_s->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_s->setFocusPolicy(Qt::NoFocus);
        pushButton_k_s->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_s, 3, 3, 1, 1);

        pushButton_k_r = new QPushButton(tab_Letters);
        pushButton_k_r->setObjectName(QString::fromUtf8("pushButton_k_r"));
        sizePolicy3.setHeightForWidth(pushButton_k_r->sizePolicy().hasHeightForWidth());
        pushButton_k_r->setSizePolicy(sizePolicy3);
        pushButton_k_r->setMinimumSize(QSize(35, 28));
        pushButton_k_r->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_r->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_r->setFocusPolicy(Qt::NoFocus);
        pushButton_k_r->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_r, 3, 2, 1, 1);

        pushButton_k_q = new QPushButton(tab_Letters);
        pushButton_k_q->setObjectName(QString::fromUtf8("pushButton_k_q"));
        sizePolicy3.setHeightForWidth(pushButton_k_q->sizePolicy().hasHeightForWidth());
        pushButton_k_q->setSizePolicy(sizePolicy3);
        pushButton_k_q->setMinimumSize(QSize(35, 28));
        pushButton_k_q->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_q->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_q->setFocusPolicy(Qt::NoFocus);
        pushButton_k_q->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_q, 3, 1, 1, 1);

        pushButton_k_l = new QPushButton(tab_Letters);
        pushButton_k_l->setObjectName(QString::fromUtf8("pushButton_k_l"));
        sizePolicy3.setHeightForWidth(pushButton_k_l->sizePolicy().hasHeightForWidth());
        pushButton_k_l->setSizePolicy(sizePolicy3);
        pushButton_k_l->setMinimumSize(QSize(35, 28));
        pushButton_k_l->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_l->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_l->setFocusPolicy(Qt::NoFocus);
        pushButton_k_l->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_l, 2, 1, 1, 1);

        pushButton_k_m = new QPushButton(tab_Letters);
        pushButton_k_m->setObjectName(QString::fromUtf8("pushButton_k_m"));
        sizePolicy3.setHeightForWidth(pushButton_k_m->sizePolicy().hasHeightForWidth());
        pushButton_k_m->setSizePolicy(sizePolicy3);
        pushButton_k_m->setMinimumSize(QSize(35, 28));
        pushButton_k_m->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_m->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_m->setFocusPolicy(Qt::NoFocus);
        pushButton_k_m->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_m, 2, 2, 1, 1);

        pushButton_k_n = new QPushButton(tab_Letters);
        pushButton_k_n->setObjectName(QString::fromUtf8("pushButton_k_n"));
        sizePolicy3.setHeightForWidth(pushButton_k_n->sizePolicy().hasHeightForWidth());
        pushButton_k_n->setSizePolicy(sizePolicy3);
        pushButton_k_n->setMinimumSize(QSize(35, 28));
        pushButton_k_n->setMaximumSize(QSize(16777215, 16777215));
        pushButton_k_n->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_k_n->setFocusPolicy(Qt::NoFocus);
        pushButton_k_n->setFlat(false);

        gridLayout_6->addWidget(pushButton_k_n, 2, 3, 1, 1);

        tabWidget->addTab(tab_Letters, QString());

        horizontalLayout->addWidget(tabWidget);

        splitter = new QSplitter(frame_top);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy4);
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(20);
        frame_FQ = new QFrame(splitter);
        frame_FQ->setObjectName(QString::fromUtf8("frame_FQ"));
        sizePolicy1.setHeightForWidth(frame_FQ->sizePolicy().hasHeightForWidth());
        frame_FQ->setSizePolicy(sizePolicy1);
        frame_FQ->setMinimumSize(QSize(80, 0));
        verticalLayout = new QVBoxLayout(frame_FQ);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_fq_up = new QPushButton(frame_FQ);
        pushButton_fq_up->setObjectName(QString::fromUtf8("pushButton_fq_up"));
        sizePolicy3.setHeightForWidth(pushButton_fq_up->sizePolicy().hasHeightForWidth());
        pushButton_fq_up->setSizePolicy(sizePolicy3);
        pushButton_fq_up->setMinimumSize(QSize(60, 0));
        pushButton_fq_up->setMaximumSize(QSize(120, 16777215));
        pushButton_fq_up->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(pushButton_fq_up);

        pushButton_fq_scan = new QPushButton(frame_FQ);
        pushButton_fq_scan->setObjectName(QString::fromUtf8("pushButton_fq_scan"));
        sizePolicy3.setHeightForWidth(pushButton_fq_scan->sizePolicy().hasHeightForWidth());
        pushButton_fq_scan->setSizePolicy(sizePolicy3);
        pushButton_fq_scan->setMinimumSize(QSize(60, 0));
        pushButton_fq_scan->setMaximumSize(QSize(120, 16777215));
        pushButton_fq_scan->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(pushButton_fq_scan);

        pushButton_fq_down = new QPushButton(frame_FQ);
        pushButton_fq_down->setObjectName(QString::fromUtf8("pushButton_fq_down"));
        sizePolicy3.setHeightForWidth(pushButton_fq_down->sizePolicy().hasHeightForWidth());
        pushButton_fq_down->setSizePolicy(sizePolicy3);
        pushButton_fq_down->setMinimumSize(QSize(60, 0));
        pushButton_fq_down->setMaximumSize(QSize(120, 16777215));
        pushButton_fq_down->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(pushButton_fq_down);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        splitter->addWidget(frame_FQ);
        frame_SQ = new QFrame(splitter);
        frame_SQ->setObjectName(QString::fromUtf8("frame_SQ"));
        sizePolicy1.setHeightForWidth(frame_SQ->sizePolicy().hasHeightForWidth());
        frame_SQ->setSizePolicy(sizePolicy1);
        frame_SQ->setMinimumSize(QSize(80, 0));
        verticalLayout_2 = new QVBoxLayout(frame_SQ);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_sq_up = new QPushButton(frame_SQ);
        pushButton_sq_up->setObjectName(QString::fromUtf8("pushButton_sq_up"));
        sizePolicy4.setHeightForWidth(pushButton_sq_up->sizePolicy().hasHeightForWidth());
        pushButton_sq_up->setSizePolicy(sizePolicy4);
        pushButton_sq_up->setMinimumSize(QSize(60, 0));
        pushButton_sq_up->setMaximumSize(QSize(120, 16777215));
        pushButton_sq_up->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(pushButton_sq_up);

        pushButton_sq_auto = new QPushButton(frame_SQ);
        pushButton_sq_auto->setObjectName(QString::fromUtf8("pushButton_sq_auto"));
        sizePolicy4.setHeightForWidth(pushButton_sq_auto->sizePolicy().hasHeightForWidth());
        pushButton_sq_auto->setSizePolicy(sizePolicy4);
        pushButton_sq_auto->setMinimumSize(QSize(60, 0));
        pushButton_sq_auto->setMaximumSize(QSize(120, 16777215));
        pushButton_sq_auto->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(pushButton_sq_auto);

        pushButton_sq_down = new QPushButton(frame_SQ);
        pushButton_sq_down->setObjectName(QString::fromUtf8("pushButton_sq_down"));
        sizePolicy4.setHeightForWidth(pushButton_sq_down->sizePolicy().hasHeightForWidth());
        pushButton_sq_down->setSizePolicy(sizePolicy4);
        pushButton_sq_down->setMinimumSize(QSize(60, 0));
        pushButton_sq_down->setMaximumSize(QSize(120, 16777215));
        pushButton_sq_down->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(pushButton_sq_down);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        splitter->addWidget(frame_SQ);

        horizontalLayout->addWidget(splitter);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addWidget(frame_top);

        frame_middle = new QFrame(frame_touch_controls);
        frame_middle->setObjectName(QString::fromUtf8("frame_middle"));
        sizePolicy.setHeightForWidth(frame_middle->sizePolicy().hasHeightForWidth());
        frame_middle->setSizePolicy(sizePolicy);
        frame_middle->setMinimumSize(QSize(295, 0));
        frame_middle->setMaximumSize(QSize(590, 80));
        gridLayout_3 = new QGridLayout(frame_middle);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 2, 0);
        label_width = new QLabel(frame_middle);
        label_width->setObjectName(QString::fromUtf8("label_width"));
        sizePolicy3.setHeightForWidth(label_width->sizePolicy().hasHeightForWidth());
        label_width->setSizePolicy(sizePolicy3);
        label_width->setMinimumSize(QSize(0, 0));
        label_width->setMaximumSize(QSize(16777215, 16777215));
        label_width->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_width, 0, 4, 1, 1);

        label_offset = new QLabel(frame_middle);
        label_offset->setObjectName(QString::fromUtf8("label_offset"));
        sizePolicy3.setHeightForWidth(label_offset->sizePolicy().hasHeightForWidth());
        label_offset->setSizePolicy(sizePolicy3);
        label_offset->setMinimumSize(QSize(0, 0));
        label_offset->setMaximumSize(QSize(16777215, 16777215));
        label_offset->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_offset, 0, 1, 1, 1);

        lcdNumber_offset = new QLCDNumber(frame_middle);
        lcdNumber_offset->setObjectName(QString::fromUtf8("lcdNumber_offset"));
        sizePolicy3.setHeightForWidth(lcdNumber_offset->sizePolicy().hasHeightForWidth());
        lcdNumber_offset->setSizePolicy(sizePolicy3);
        lcdNumber_offset->setMinimumSize(QSize(70, 20));
        lcdNumber_offset->setMaximumSize(QSize(16777215, 16777215));
        lcdNumber_offset->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_offset, 1, 1, 1, 1);

        lcdNumber_width = new QLCDNumber(frame_middle);
        lcdNumber_width->setObjectName(QString::fromUtf8("lcdNumber_width"));
        sizePolicy3.setHeightForWidth(lcdNumber_width->sizePolicy().hasHeightForWidth());
        lcdNumber_width->setSizePolicy(sizePolicy3);
        lcdNumber_width->setMinimumSize(QSize(70, 20));
        lcdNumber_width->setMaximumSize(QSize(16777215, 16777215));
        lcdNumber_width->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_width, 1, 4, 1, 1);

        pushButton_offset_up = new QPushButton(frame_middle);
        pushButton_offset_up->setObjectName(QString::fromUtf8("pushButton_offset_up"));
        sizePolicy3.setHeightForWidth(pushButton_offset_up->sizePolicy().hasHeightForWidth());
        pushButton_offset_up->setSizePolicy(sizePolicy3);
        pushButton_offset_up->setMinimumSize(QSize(30, 0));
        pushButton_offset_up->setMaximumSize(QSize(16777215, 16777215));
        pushButton_offset_up->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(pushButton_offset_up, 0, 0, 2, 1);

        pushButton_offset_down = new QPushButton(frame_middle);
        pushButton_offset_down->setObjectName(QString::fromUtf8("pushButton_offset_down"));
        sizePolicy3.setHeightForWidth(pushButton_offset_down->sizePolicy().hasHeightForWidth());
        pushButton_offset_down->setSizePolicy(sizePolicy3);
        pushButton_offset_down->setMinimumSize(QSize(30, 0));
        pushButton_offset_down->setMaximumSize(QSize(16777215, 16777215));
        pushButton_offset_down->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(pushButton_offset_down, 0, 2, 2, 1);

        pushButton_width_up = new QPushButton(frame_middle);
        pushButton_width_up->setObjectName(QString::fromUtf8("pushButton_width_up"));
        sizePolicy3.setHeightForWidth(pushButton_width_up->sizePolicy().hasHeightForWidth());
        pushButton_width_up->setSizePolicy(sizePolicy3);
        pushButton_width_up->setMinimumSize(QSize(30, 0));
        pushButton_width_up->setMaximumSize(QSize(16777215, 16777215));
        pushButton_width_up->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(pushButton_width_up, 0, 3, 2, 1);

        pushButton_width_down = new QPushButton(frame_middle);
        pushButton_width_down->setObjectName(QString::fromUtf8("pushButton_width_down"));
        sizePolicy3.setHeightForWidth(pushButton_width_down->sizePolicy().hasHeightForWidth());
        pushButton_width_down->setSizePolicy(sizePolicy3);
        pushButton_width_down->setMinimumSize(QSize(30, 0));
        pushButton_width_down->setMaximumSize(QSize(16777215, 16777215));
        pushButton_width_down->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(pushButton_width_down, 0, 5, 2, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 4);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(3, 1);
        gridLayout_3->setColumnStretch(4, 4);
        gridLayout_3->setColumnStretch(5, 1);

        verticalLayout_3->addWidget(frame_middle);

        frame_bottom = new QFrame(frame_touch_controls);
        frame_bottom->setObjectName(QString::fromUtf8("frame_bottom"));
        sizePolicy.setHeightForWidth(frame_bottom->sizePolicy().hasHeightForWidth());
        frame_bottom->setSizePolicy(sizePolicy);
        frame_bottom->setMinimumSize(QSize(295, 0));
        frame_bottom->setMaximumSize(QSize(590, 450));
        gridLayout_2 = new QGridLayout(frame_bottom);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 2, 0);
        pushButton_decode = new QPushButton(frame_bottom);
        pushButton_decode->setObjectName(QString::fromUtf8("pushButton_decode"));
        sizePolicy3.setHeightForWidth(pushButton_decode->sizePolicy().hasHeightForWidth());
        pushButton_decode->setSizePolicy(sizePolicy3);
        pushButton_decode->setMinimumSize(QSize(60, 0));
        pushButton_decode->setMaximumSize(QSize(16777215, 16777215));
        pushButton_decode->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_decode, 0, 2, 1, 1);

        pushButton_gain = new QPushButton(frame_bottom);
        pushButton_gain->setObjectName(QString::fromUtf8("pushButton_gain"));
        sizePolicy3.setHeightForWidth(pushButton_gain->sizePolicy().hasHeightForWidth());
        pushButton_gain->setSizePolicy(sizePolicy3);
        pushButton_gain->setMinimumSize(QSize(60, 0));
        pushButton_gain->setMaximumSize(QSize(16777215, 16777215));
        pushButton_gain->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_gain, 0, 0, 1, 1);

        pushButton_replay = new QPushButton(frame_bottom);
        pushButton_replay->setObjectName(QString::fromUtf8("pushButton_replay"));
        sizePolicy3.setHeightForWidth(pushButton_replay->sizePolicy().hasHeightForWidth());
        pushButton_replay->setSizePolicy(sizePolicy3);
        pushButton_replay->setMinimumSize(QSize(60, 0));
        pushButton_replay->setMaximumSize(QSize(16777215, 16777215));
        pushButton_replay->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_replay, 1, 1, 1, 1);

        pushButton_mod = new QPushButton(frame_bottom);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        sizePolicy3.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy3);
        pushButton_mod->setMinimumSize(QSize(60, 0));
        pushButton_mod->setMaximumSize(QSize(16777215, 16777215));
        pushButton_mod->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_mod, 0, 1, 1, 1);

        pushButton_mute = new QPushButton(frame_bottom);
        pushButton_mute->setObjectName(QString::fromUtf8("pushButton_mute"));
        sizePolicy3.setHeightForWidth(pushButton_mute->sizePolicy().hasHeightForWidth());
        pushButton_mute->setSizePolicy(sizePolicy3);
        pushButton_mute->setMinimumSize(QSize(60, 0));
        pushButton_mute->setMaximumSize(QSize(16777215, 16777215));
        pushButton_mute->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_mute, 1, 2, 1, 1);

        pushButton_scan_custom = new QPushButton(frame_bottom);
        pushButton_scan_custom->setObjectName(QString::fromUtf8("pushButton_scan_custom"));
        sizePolicy3.setHeightForWidth(pushButton_scan_custom->sizePolicy().hasHeightForWidth());
        pushButton_scan_custom->setSizePolicy(sizePolicy3);
        pushButton_scan_custom->setMinimumSize(QSize(60, 0));
        pushButton_scan_custom->setMaximumSize(QSize(16777215, 16777215));
        pushButton_scan_custom->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_scan_custom, 2, 0, 1, 1);

        pushButton_record = new QPushButton(frame_bottom);
        pushButton_record->setObjectName(QString::fromUtf8("pushButton_record"));
        sizePolicy3.setHeightForWidth(pushButton_record->sizePolicy().hasHeightForWidth());
        pushButton_record->setSizePolicy(sizePolicy3);
        pushButton_record->setMinimumSize(QSize(60, 0));
        pushButton_record->setMaximumSize(QSize(16777215, 16777215));
        pushButton_record->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_record, 1, 0, 1, 1);

        pushButton_scan_fdpd = new QPushButton(frame_bottom);
        pushButton_scan_fdpd->setObjectName(QString::fromUtf8("pushButton_scan_fdpd"));
        sizePolicy3.setHeightForWidth(pushButton_scan_fdpd->sizePolicy().hasHeightForWidth());
        pushButton_scan_fdpd->setSizePolicy(sizePolicy3);
        pushButton_scan_fdpd->setMinimumSize(QSize(60, 0));
        pushButton_scan_fdpd->setMaximumSize(QSize(16777215, 16777215));
        pushButton_scan_fdpd->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_scan_fdpd, 2, 2, 1, 1);

        pushButton_scan_ems = new QPushButton(frame_bottom);
        pushButton_scan_ems->setObjectName(QString::fromUtf8("pushButton_scan_ems"));
        sizePolicy3.setHeightForWidth(pushButton_scan_ems->sizePolicy().hasHeightForWidth());
        pushButton_scan_ems->setSizePolicy(sizePolicy3);
        pushButton_scan_ems->setMinimumSize(QSize(60, 0));
        pushButton_scan_ems->setMaximumSize(QSize(16777215, 16777215));
        pushButton_scan_ems->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_scan_ems, 2, 1, 1, 1);

        pushButton_scan_wx = new QPushButton(frame_bottom);
        pushButton_scan_wx->setObjectName(QString::fromUtf8("pushButton_scan_wx"));
        sizePolicy3.setHeightForWidth(pushButton_scan_wx->sizePolicy().hasHeightForWidth());
        pushButton_scan_wx->setSizePolicy(sizePolicy3);
        pushButton_scan_wx->setMinimumSize(QSize(60, 0));
        pushButton_scan_wx->setMaximumSize(QSize(16777215, 16777215));
        pushButton_scan_wx->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(pushButton_scan_wx, 2, 3, 1, 1);

        frame_select = new QFrame(frame_bottom);
        frame_select->setObjectName(QString::fromUtf8("frame_select"));
        sizePolicy.setHeightForWidth(frame_select->sizePolicy().hasHeightForWidth());
        frame_select->setSizePolicy(sizePolicy);
        frame_select->setMinimumSize(QSize(73, 0));
        verticalLayout_4 = new QVBoxLayout(frame_select);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(8, 8, 1, 8);
        pushButton_up = new QPushButton(frame_select);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        sizePolicy3.setHeightForWidth(pushButton_up->sizePolicy().hasHeightForWidth());
        pushButton_up->setSizePolicy(sizePolicy3);
        pushButton_up->setMinimumSize(QSize(60, 0));
        pushButton_up->setMaximumSize(QSize(140, 120));
        pushButton_up->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(pushButton_up);

        pushButton_enter = new QPushButton(frame_select);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        sizePolicy3.setHeightForWidth(pushButton_enter->sizePolicy().hasHeightForWidth());
        pushButton_enter->setSizePolicy(sizePolicy3);
        pushButton_enter->setMinimumSize(QSize(60, 0));
        pushButton_enter->setMaximumSize(QSize(140, 120));
        pushButton_enter->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(pushButton_enter);

        pushButton_down = new QPushButton(frame_select);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        sizePolicy3.setHeightForWidth(pushButton_down->sizePolicy().hasHeightForWidth());
        pushButton_down->setSizePolicy(sizePolicy3);
        pushButton_down->setMinimumSize(QSize(60, 0));
        pushButton_down->setMaximumSize(QSize(140, 120));
        pushButton_down->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(pushButton_down);


        gridLayout_2->addWidget(frame_select, 0, 3, 2, 1);


        verticalLayout_3->addWidget(frame_bottom);

        verticalLayout_3->setStretch(0, 6);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 6);

        horizontalLayout_2->addWidget(frame_touch_controls);

        DockTouchControls->setWidget(dockWidgetContents);

        retranslateUi(DockTouchControls);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DockTouchControls);
    } // setupUi

    void retranslateUi(QDockWidget *DockTouchControls)
    {
        DockTouchControls->setWindowTitle(QApplication::translate("DockTouchControls", "DockWidget", nullptr));
        pushButton_d_2->setText(QApplication::translate("DockTouchControls", "2", nullptr));
        pushButton_d_3->setText(QApplication::translate("DockTouchControls", "3", nullptr));
        pushButton_d_5->setText(QApplication::translate("DockTouchControls", "5", nullptr));
        pushButton_d_6->setText(QApplication::translate("DockTouchControls", "6", nullptr));
        pushButton_d_4->setText(QApplication::translate("DockTouchControls", "4", nullptr));
        pushButton_d_1->setText(QApplication::translate("DockTouchControls", "1", nullptr));
        pushButton_d_7->setText(QApplication::translate("DockTouchControls", "7", nullptr));
        pushButton_d_8->setText(QApplication::translate("DockTouchControls", "8", nullptr));
        pushButton_d_9->setText(QApplication::translate("DockTouchControls", "9", nullptr));
        pushButton_d_0->setText(QApplication::translate("DockTouchControls", "0", nullptr));
        pushButton_d_back->setText(QApplication::translate("DockTouchControls", "<", nullptr));
        pushButton_d_dec->setText(QApplication::translate("DockTouchControls", ".", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Numbers), QApplication::translate("DockTouchControls", "Numbers", nullptr));
        pushButton_k_a->setText(QApplication::translate("DockTouchControls", "A", nullptr));
        pushButton_k_b->setText(QApplication::translate("DockTouchControls", "B", nullptr));
        pushButton_k_k->setText(QApplication::translate("DockTouchControls", "K", nullptr));
        pushButton_k_f->setText(QApplication::translate("DockTouchControls", "F", nullptr));
        pushButton_k_e->setText(QApplication::translate("DockTouchControls", "E", nullptr));
        pushButton_k_c->setText(QApplication::translate("DockTouchControls", "C", nullptr));
        pushButton_k_p->setText(QApplication::translate("DockTouchControls", "P", nullptr));
        pushButton_k_u->setText(QApplication::translate("DockTouchControls", "U", nullptr));
        pushButton_k_d->setText(QApplication::translate("DockTouchControls", "D", nullptr));
        pushButton_k_z->setText(QApplication::translate("DockTouchControls", "Z", nullptr));
        pushButton_k_g->setText(QApplication::translate("DockTouchControls", "G", nullptr));
        pushButton_k_h->setText(QApplication::translate("DockTouchControls", "H", nullptr));
        pushButton_k_i->setText(QApplication::translate("DockTouchControls", "I", nullptr));
        pushButton_k_j->setText(QApplication::translate("DockTouchControls", "J", nullptr));
        pushButton_k_o->setText(QApplication::translate("DockTouchControls", "O", nullptr));
        pushButton_k_t->setText(QApplication::translate("DockTouchControls", "T", nullptr));
        pushButton_k_y->setText(QApplication::translate("DockTouchControls", "Y", nullptr));
        pushButton_k_back->setText(QApplication::translate("DockTouchControls", "<", nullptr));
        pushButton_k_case->setText(QApplication::translate("DockTouchControls", "case", nullptr));
        pushButton_k_space->setText(QApplication::translate("DockTouchControls", "_", nullptr));
        pushButton_k_q_mark->setText(QApplication::translate("DockTouchControls", "?", nullptr));
        pushButton_k_v->setText(QApplication::translate("DockTouchControls", "V", nullptr));
        pushButton_k_w->setText(QApplication::translate("DockTouchControls", "W", nullptr));
        pushButton_k_x->setText(QApplication::translate("DockTouchControls", "X", nullptr));
        pushButton_k_s->setText(QApplication::translate("DockTouchControls", "S", nullptr));
        pushButton_k_r->setText(QApplication::translate("DockTouchControls", "R", nullptr));
        pushButton_k_q->setText(QApplication::translate("DockTouchControls", "Q", nullptr));
        pushButton_k_l->setText(QApplication::translate("DockTouchControls", "L", nullptr));
        pushButton_k_m->setText(QApplication::translate("DockTouchControls", "M", nullptr));
        pushButton_k_n->setText(QApplication::translate("DockTouchControls", "N", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Letters), QApplication::translate("DockTouchControls", "Letters", nullptr));
        pushButton_fq_up->setText(QApplication::translate("DockTouchControls", "FQ \342\206\221", nullptr));
        pushButton_fq_scan->setText(QApplication::translate("DockTouchControls", "Scan", nullptr));
        pushButton_fq_down->setText(QApplication::translate("DockTouchControls", "FQ \342\206\223", nullptr));
        pushButton_sq_up->setText(QApplication::translate("DockTouchControls", "SQ \342\206\221", nullptr));
        pushButton_sq_auto->setText(QApplication::translate("DockTouchControls", "Auto", nullptr));
        pushButton_sq_down->setText(QApplication::translate("DockTouchControls", "SQ \342\206\223", nullptr));
        label_width->setText(QApplication::translate("DockTouchControls", "Width", nullptr));
        label_offset->setText(QApplication::translate("DockTouchControls", "Offset", nullptr));
        pushButton_offset_up->setText(QApplication::translate("DockTouchControls", "\342\206\221", nullptr));
        pushButton_offset_down->setText(QApplication::translate("DockTouchControls", "\342\206\223", nullptr));
        pushButton_width_up->setText(QApplication::translate("DockTouchControls", "\342\206\221", nullptr));
        pushButton_width_down->setText(QApplication::translate("DockTouchControls", "\342\206\223", nullptr));
        pushButton_decode->setText(QApplication::translate("DockTouchControls", "Decode\n"
"", nullptr));
        pushButton_gain->setText(QApplication::translate("DockTouchControls", "GAIN\n"
"", nullptr));
        pushButton_replay->setText(QApplication::translate("DockTouchControls", "Replay\n"
"RAW", nullptr));
        pushButton_mod->setText(QApplication::translate("DockTouchControls", "MOD\n"
"", nullptr));
        pushButton_mute->setText(QApplication::translate("DockTouchControls", "Mute\n"
"DATA", nullptr));
        pushButton_scan_custom->setText(QApplication::translate("DockTouchControls", "scan\n"
"CUST", nullptr));
        pushButton_record->setText(QApplication::translate("DockTouchControls", "Rec\n"
"RAW", nullptr));
        pushButton_scan_fdpd->setText(QApplication::translate("DockTouchControls", "scan\n"
"FD\\PD", nullptr));
        pushButton_scan_ems->setText(QApplication::translate("DockTouchControls", "scan\n"
"EMS", nullptr));
        pushButton_scan_wx->setText(QApplication::translate("DockTouchControls", "scan\n"
"WX", nullptr));
        pushButton_up->setText(QApplication::translate("DockTouchControls", "\342\206\221", nullptr));
        pushButton_enter->setText(QApplication::translate("DockTouchControls", "Enter", nullptr));
        pushButton_down->setText(QApplication::translate("DockTouchControls", "\342\206\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockTouchControls: public Ui_DockTouchControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKTOUCHCONTROLS_H
