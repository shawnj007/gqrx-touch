/********************************************************************************
** Form generated from reading UI file 'mainwindow_touch.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_TOUCH_H
#define UI_MAINWINDOW_TOUCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/freqctrl.h"
#include "qtgui/meter.h"
#include "qtgui/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionDSP;
    QAction *actionAFSK1200;
    QAction *actionSched;
    QAction *actionIoConfig;
    QAction *actionUserGroup;
    QAction *actionFullScreen;
    QAction *actionLoadSettings;
    QAction *actionSaveSettings;
    QAction *actionAddBookmark;
    QAction *actionRemoteControl;
    QAction *actionRemoteConfig;
    QAction *actionIqTool;
    QAction *actionNews;
    QAction *actionRemoteProtocol;
    QAction *actionKbdShortcuts;
    QAction *actionSaveWaterfall;
    QAction *actionDX_Cluster;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    CFreqCtrl *freqCtrl;
    QSpacerItem *horizontalSpacer_2;
    CMeter *sMeter;
    QSpacerItem *horizontalSpacer_1;
    CPlotter *plotter;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_RecentConfig;
    QMenu *menu_View;
    QMenu *menu_Help;
    QMenu *menu_Tools;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 436);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 436));
        MainWindow->setMaximumSize(QSize(1600, 916));
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
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush6);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QBrush brush11(QColor(239, 239, 239, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush12(QColor(202, 202, 202, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        QBrush brush13(QColor(159, 159, 159, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        QBrush brush14(QColor(184, 184, 184, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush15(QColor(118, 118, 118, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        QBrush brush16(QColor(247, 247, 247, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush16);
        QBrush brush17(QColor(0, 0, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush17);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
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
        QBrush brush18(QColor(177, 177, 177, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush18);
        QBrush brush19(QColor(145, 145, 145, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush19);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        QBrush brush20(QColor(0, 0, 0, 255));
        brush20.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush20);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/gqrx.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionDSP = new QAction(MainWindow);
        actionDSP->setObjectName(QString::fromUtf8("actionDSP"));
        actionDSP->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/play.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDSP->setIcon(icon1);
        actionAFSK1200 = new QAction(MainWindow);
        actionAFSK1200->setObjectName(QString::fromUtf8("actionAFSK1200"));
        actionSched = new QAction(MainWindow);
        actionSched->setObjectName(QString::fromUtf8("actionSched"));
        actionSched->setCheckable(true);
        actionSched->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/clock.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSched->setIcon(icon2);
        actionIoConfig = new QAction(MainWindow);
        actionIoConfig->setObjectName(QString::fromUtf8("actionIoConfig"));
        actionIoConfig->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIoConfig->setIcon(icon3);
        actionIoConfig->setVisible(true);
        actionUserGroup = new QAction(MainWindow);
        actionUserGroup->setObjectName(QString::fromUtf8("actionUserGroup"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUserGroup->setIcon(icon4);
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName(QString::fromUtf8("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/fullscreen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon5);
        actionLoadSettings = new QAction(MainWindow);
        actionLoadSettings->setObjectName(QString::fromUtf8("actionLoadSettings"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icons/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoadSettings->setIcon(icon6);
        actionSaveSettings = new QAction(MainWindow);
        actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/floppy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSettings->setIcon(icon7);
        actionAddBookmark = new QAction(MainWindow);
        actionAddBookmark->setObjectName(QString::fromUtf8("actionAddBookmark"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/bookmark-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddBookmark->setIcon(icon8);
        actionRemoteControl = new QAction(MainWindow);
        actionRemoteControl->setObjectName(QString::fromUtf8("actionRemoteControl"));
        actionRemoteControl->setCheckable(true);
        actionRemoteControl->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/tangeo-network-idle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoteControl->setIcon(icon9);
        actionRemoteConfig = new QAction(MainWindow);
        actionRemoteConfig->setObjectName(QString::fromUtf8("actionRemoteConfig"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoteConfig->setIcon(icon10);
        actionIqTool = new QAction(MainWindow);
        actionIqTool->setObjectName(QString::fromUtf8("actionIqTool"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIqTool->setIcon(icon11);
        actionNews = new QAction(MainWindow);
        actionNews->setObjectName(QString::fromUtf8("actionNews"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNews->setIcon(icon12);
        actionRemoteProtocol = new QAction(MainWindow);
        actionRemoteProtocol->setObjectName(QString::fromUtf8("actionRemoteProtocol"));
        actionRemoteProtocol->setIcon(icon12);
        actionKbdShortcuts = new QAction(MainWindow);
        actionKbdShortcuts->setObjectName(QString::fromUtf8("actionKbdShortcuts"));
        actionKbdShortcuts->setIcon(icon12);
        actionSaveWaterfall = new QAction(MainWindow);
        actionSaveWaterfall->setObjectName(QString::fromUtf8("actionSaveWaterfall"));
        actionDX_Cluster = new QAction(MainWindow);
        actionDX_Cluster->setObjectName(QString::fromUtf8("actionDX_Cluster"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 29, 29);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(5, 15, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        freqCtrl = new CFreqCtrl(frame);
        freqCtrl->setObjectName(QString::fromUtf8("freqCtrl"));
        sizePolicy1.setHeightForWidth(freqCtrl->sizePolicy().hasHeightForWidth());
        freqCtrl->setSizePolicy(sizePolicy1);
        freqCtrl->setMinimumSize(QSize(280, 40));
        freqCtrl->setMaximumSize(QSize(280, 16777215));
        freqCtrl->setFocusPolicy(Qt::ClickFocus);
        freqCtrl->setFrameShape(QFrame::StyledPanel);
        freqCtrl->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(freqCtrl);

        horizontalSpacer_2 = new QSpacerItem(5, 15, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        sMeter = new CMeter(frame);
        sMeter->setObjectName(QString::fromUtf8("sMeter"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sMeter->sizePolicy().hasHeightForWidth());
        sMeter->setSizePolicy(sizePolicy2);
        sMeter->setMinimumSize(QSize(150, 40));
        sMeter->setMaximumSize(QSize(450, 16777215));
        sMeter->setFrameShape(QFrame::StyledPanel);
        sMeter->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(sMeter);

        horizontalSpacer_1 = new QSpacerItem(5, 15, QSizePolicy::Ignored, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_1);


        verticalLayout_2->addWidget(frame);

        plotter = new CPlotter(centralWidget);
        plotter->setObjectName(QString::fromUtf8("plotter"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(plotter->sizePolicy().hasHeightForWidth());
        plotter->setSizePolicy(sizePolicy3);
        plotter->setMinimumSize(QSize(0, 115));
        plotter->setAutoFillBackground(true);
        plotter->setFrameShape(QFrame::StyledPanel);
        plotter->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(plotter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        sizePolicy3.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy3);
        menuBar->setMaximumSize(QSize(16777215, 44));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_RecentConfig = new QMenu(menu_File);
        menu_RecentConfig->setObjectName(QString::fromUtf8("menu_RecentConfig"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy4);
        statusBar->setMinimumSize(QSize(400, 0));
        statusBar->setMaximumSize(QSize(16777215, 0));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionDSP);
        menu_File->addSeparator();
        menu_File->addAction(actionIoConfig);
        menu_File->addAction(actionLoadSettings);
        menu_File->addAction(actionSaveSettings);
        menu_File->addAction(menu_RecentConfig->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionSaveWaterfall);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_Help->addAction(actionUserGroup);
        menu_Help->addAction(actionNews);
        menu_Help->addSeparator();
        menu_Help->addAction(actionRemoteProtocol);
        menu_Help->addAction(actionKbdShortcuts);
        menu_Help->addSeparator();
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionAboutQt);
        menu_Tools->addAction(actionRemoteControl);
        menu_Tools->addAction(actionRemoteConfig);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionAddBookmark);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionIqTool);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionAFSK1200);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionDX_Cluster);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "gqrx", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Quit application", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About Gqrx", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "Information about Gqrx", nullptr));
#endif // QT_NO_TOOLTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("MainWindow", "About the Qt toolkit", nullptr));
#endif // QT_NO_TOOLTIP
        actionDSP->setText(QApplication::translate("MainWindow", "Start DSP", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDSP->setToolTip(QApplication::translate("MainWindow", "Start DSP", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDSP->setStatusTip(QApplication::translate("MainWindow", "Start/stop DSP processing", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionDSP->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionAFSK1200->setText(QApplication::translate("MainWindow", "AFSK1200 Decoder", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAFSK1200->setToolTip(QApplication::translate("MainWindow", "Start AFSK1200 decoder", nullptr));
#endif // QT_NO_TOOLTIP
        actionSched->setText(QApplication::translate("MainWindow", "Scheduler", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSched->setToolTip(QApplication::translate("MainWindow", "Schedule recordings and other actions", nullptr));
#endif // QT_NO_TOOLTIP
        actionIoConfig->setText(QApplication::translate("MainWindow", "I/O Devices", nullptr));
#ifndef QT_NO_TOOLTIP
        actionIoConfig->setToolTip(QApplication::translate("MainWindow", "Configure I/O devices", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionIoConfig->setStatusTip(QApplication::translate("MainWindow", "Opens the hardware configuration dialog", nullptr));
#endif // QT_NO_STATUSTIP
        actionUserGroup->setText(QApplication::translate("MainWindow", "Gqrx user group", nullptr));
#ifndef QT_NO_TOOLTIP
        actionUserGroup->setToolTip(QApplication::translate("MainWindow", "Discussion group for Gqrx users", nullptr));
#endif // QT_NO_TOOLTIP
        actionFullScreen->setText(QApplication::translate("MainWindow", "Full screen", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFullScreen->setToolTip(QApplication::translate("MainWindow", "Toggle full screen mode", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionFullScreen->setShortcut(QApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        actionLoadSettings->setText(QApplication::translate("MainWindow", "Load settings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoadSettings->setToolTip(QApplication::translate("MainWindow", "Load previously stored configuration", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLoadSettings->setStatusTip(QApplication::translate("MainWindow", "Load previously stored settings from a file", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionLoadSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveSettings->setText(QApplication::translate("MainWindow", "Save settings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSaveSettings->setToolTip(QApplication::translate("MainWindow", "Save current configuration", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSaveSettings->setStatusTip(QApplication::translate("MainWindow", "Save current configuration to a file", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionSaveSettings->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionAddBookmark->setText(QApplication::translate("MainWindow", "Add bookmark", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAddBookmark->setToolTip(QApplication::translate("MainWindow", "Bookmark the current frequency and mode (Ctrl+Shift+B)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAddBookmark->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionRemoteControl->setText(QApplication::translate("MainWindow", "&Remote control", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoteControl->setToolTip(QApplication::translate("MainWindow", "Remote control via TCP", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRemoteControl->setStatusTip(QApplication::translate("MainWindow", "Activate the TCP interface", nullptr));
#endif // QT_NO_STATUSTIP
        actionRemoteConfig->setText(QApplication::translate("MainWindow", "Remote &control settings", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoteConfig->setToolTip(QApplication::translate("MainWindow", "Configure remote control settings", nullptr));
#endif // QT_NO_TOOLTIP
        actionIqTool->setText(QApplication::translate("MainWindow", "I/Q recorder", nullptr));
#ifndef QT_NO_TOOLTIP
        actionIqTool->setToolTip(QApplication::translate("MainWindow", "Record and play I/Q data", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionIqTool->setStatusTip(QApplication::translate("MainWindow", "Open I/Q recorder dialog", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionIqTool->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionNews->setText(QApplication::translate("MainWindow", "News", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNews->setToolTip(QApplication::translate("MainWindow", "Show news about this release", nullptr));
#endif // QT_NO_TOOLTIP
        actionRemoteProtocol->setText(QApplication::translate("MainWindow", "Remote control", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRemoteProtocol->setToolTip(QApplication::translate("MainWindow", "Remote control protocol", nullptr));
#endif // QT_NO_TOOLTIP
        actionKbdShortcuts->setText(QApplication::translate("MainWindow", "Keyboard shortcuts", nullptr));
#ifndef QT_NO_TOOLTIP
        actionKbdShortcuts->setToolTip(QApplication::translate("MainWindow", "Show help on keyboard shortcuts", nullptr));
#endif // QT_NO_TOOLTIP
        actionSaveWaterfall->setText(QApplication::translate("MainWindow", "Save waterfall", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSaveWaterfall->setStatusTip(QApplication::translate("MainWindow", "Save the current waterfall to a graphics file", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionSaveWaterfall->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionDX_Cluster->setText(QApplication::translate("MainWindow", "DX Cluster", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDX_Cluster->setToolTip(QApplication::translate("MainWindow", "Open DX Cluster Dialog", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDX_Cluster->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        freqCtrl->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
#ifndef QT_NO_TOOLTIP
        menu_RecentConfig->setToolTip(QApplication::translate("MainWindow", "Load recently used setting", nullptr));
#endif // QT_NO_TOOLTIP
        menu_RecentConfig->setTitle(QApplication::translate("MainWindow", "&Recent settings", nullptr));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menu_Tools->setTitle(QApplication::translate("MainWindow", "&Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_TOUCH_H
