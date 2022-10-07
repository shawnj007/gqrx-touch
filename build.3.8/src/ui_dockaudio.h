/********************************************************************************
** Form generated from reading UI file 'dockaudio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKAUDIO_H
#define UI_DOCKAUDIO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/ctk/ctkRangeSlider.h"
#include "qtgui/plotter.h"

QT_BEGIN_NAMESPACE

class Ui_DockAudio
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_4;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    CPlotter *audioSpectrum;
    QWidget *tab_FFT;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_pan;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fftSplitLabel1;
    QSlider *fftSplitSlider;
    QLabel *fftSplitLabel2;
    QFrame *frame_range;
    QGridLayout *gridLayout_2;
    QPushButton *audioLockButton;
    ctkRangeSlider *wfRangeSlider;
    ctkRangeSlider *pandRangeSlider;
    QLabel *pandRangeLabel;
    QLabel *wfRangeLabel;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_recording;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_recording;
    QGridLayout *gridLayout_4;
    QPushButton *recDirButton;
    QLineEdit *recDirEdit;
    QLabel *recDirLabel;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_network;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_network;
    QGridLayout *gridLayout_8;
    QLabel *hostLabel;
    QLabel *portLabel;
    QLineEdit *udpHost;
    QSpinBox *udpPort;
    QPushButton *udpStereo;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_output;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_output;
    QGridLayout *gridLayout;
    QPushButton *audioStreamButton;
    QPushButton *audioConfButton;
    QPushButton *audioRecButton;
    QPushButton *audioMuteButton;
    QPushButton *audioPlayButton;
    QLabel *audioGainLabel;
    QLabel *audioGainDbLabel;
    QSlider *audioGainSlider;
    QLabel *audioRecLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockAudio)
    {
        if (DockAudio->objectName().isEmpty())
            DockAudio->setObjectName(QString::fromUtf8("DockAudio"));
        DockAudio->resize(450, 337);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockAudio->sizePolicy().hasHeightForWidth());
        DockAudio->setSizePolicy(sizePolicy);
        DockAudio->setMinimumSize(QSize(450, 156));
        DockAudio->setMaximumSize(QSize(524287, 360));
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
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QBrush brush8(QColor(239, 239, 239, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush9(QColor(202, 202, 202, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        QBrush brush10(QColor(159, 159, 159, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        QBrush brush11(QColor(184, 184, 184, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush12(QColor(118, 118, 118, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        QBrush brush13(QColor(247, 247, 247, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
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
        QBrush brush14(QColor(177, 177, 177, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        DockAudio->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockAudio->setWindowIcon(icon);
        DockAudio->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockAudio->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        dockWidgetContents->setMinimumSize(QSize(450, 137));
        dockWidgetContents->setMaximumSize(QSize(16777215, 360));
        dockWidgetContents->setSizeIncrement(QSize(0, 0));
        QPalette palette1;
        QBrush brush15(QColor(48, 140, 198, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush15);
        QBrush brush16(QColor(145, 145, 145, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush16);
        dockWidgetContents->setPalette(palette1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget_4 = new QTabWidget(dockWidgetContents);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget_4->sizePolicy().hasHeightForWidth());
        tabWidget_4->setSizePolicy(sizePolicy2);
        tabWidget_4->setMinimumSize(QSize(400, 137));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(400, 106));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        audioSpectrum = new CPlotter(tab);
        audioSpectrum->setObjectName(QString::fromUtf8("audioSpectrum"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(audioSpectrum->sizePolicy().hasHeightForWidth());
        audioSpectrum->setSizePolicy(sizePolicy3);
        audioSpectrum->setMinimumSize(QSize(50, 0));
        audioSpectrum->setMaximumSize(QSize(16777215, 16777215));
        audioSpectrum->setFrameShape(QFrame::StyledPanel);
        audioSpectrum->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(audioSpectrum, 0, 0, 1, 1);

        tabWidget_4->addTab(tab, QString());
        tab_FFT = new QWidget();
        tab_FFT->setObjectName(QString::fromUtf8("tab_FFT"));
        tab_FFT->setMinimumSize(QSize(400, 106));
        verticalLayout_4 = new QVBoxLayout(tab_FFT);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_pan = new QFrame(tab_FFT);
        frame_pan->setObjectName(QString::fromUtf8("frame_pan"));
        frame_pan->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_3 = new QHBoxLayout(frame_pan);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        fftSplitLabel1 = new QLabel(frame_pan);
        fftSplitLabel1->setObjectName(QString::fromUtf8("fftSplitLabel1"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fftSplitLabel1->sizePolicy().hasHeightForWidth());
        fftSplitLabel1->setSizePolicy(sizePolicy4);
        fftSplitLabel1->setMinimumSize(QSize(0, 25));
        fftSplitLabel1->setMaximumSize(QSize(16777215, 100));
        fftSplitLabel1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(fftSplitLabel1);

        fftSplitSlider = new QSlider(frame_pan);
        fftSplitSlider->setObjectName(QString::fromUtf8("fftSplitSlider"));
        sizePolicy2.setHeightForWidth(fftSplitSlider->sizePolicy().hasHeightForWidth());
        fftSplitSlider->setSizePolicy(sizePolicy2);
        fftSplitSlider->setMinimumSize(QSize(0, 25));
        fftSplitSlider->setMaximumSize(QSize(16777215, 100));
        fftSplitSlider->setMinimum(0);
        fftSplitSlider->setMaximum(100);
        fftSplitSlider->setValue(100);
        fftSplitSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(fftSplitSlider);

        fftSplitLabel2 = new QLabel(frame_pan);
        fftSplitLabel2->setObjectName(QString::fromUtf8("fftSplitLabel2"));
        sizePolicy2.setHeightForWidth(fftSplitLabel2->sizePolicy().hasHeightForWidth());
        fftSplitLabel2->setSizePolicy(sizePolicy2);
        fftSplitLabel2->setMinimumSize(QSize(0, 25));
        fftSplitLabel2->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_3->addWidget(fftSplitLabel2);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_4->addWidget(frame_pan);

        frame_range = new QFrame(tab_FFT);
        frame_range->setObjectName(QString::fromUtf8("frame_range"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame_range->sizePolicy().hasHeightForWidth());
        frame_range->setSizePolicy(sizePolicy5);
        frame_range->setMaximumSize(QSize(16777215, 100));
        gridLayout_2 = new QGridLayout(frame_range);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        audioLockButton = new QPushButton(frame_range);
        audioLockButton->setObjectName(QString::fromUtf8("audioLockButton"));
        sizePolicy4.setHeightForWidth(audioLockButton->sizePolicy().hasHeightForWidth());
        audioLockButton->setSizePolicy(sizePolicy4);
        audioLockButton->setMinimumSize(QSize(0, 25));
        audioLockButton->setMaximumSize(QSize(16777215, 200));
        audioLockButton->setCheckable(true);
        audioLockButton->setAutoDefault(false);

        gridLayout_2->addWidget(audioLockButton, 0, 2, 2, 1);

        wfRangeSlider = new ctkRangeSlider(frame_range);
        wfRangeSlider->setObjectName(QString::fromUtf8("wfRangeSlider"));
        sizePolicy4.setHeightForWidth(wfRangeSlider->sizePolicy().hasHeightForWidth());
        wfRangeSlider->setSizePolicy(sizePolicy4);
        wfRangeSlider->setMinimumSize(QSize(0, 25));
        wfRangeSlider->setMaximumSize(QSize(16777215, 100));
        wfRangeSlider->setMinimum(-120);
        wfRangeSlider->setMaximum(0);
        wfRangeSlider->setValue(-80);
        wfRangeSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(wfRangeSlider, 1, 1, 1, 1);

        pandRangeSlider = new ctkRangeSlider(frame_range);
        pandRangeSlider->setObjectName(QString::fromUtf8("pandRangeSlider"));
        sizePolicy4.setHeightForWidth(pandRangeSlider->sizePolicy().hasHeightForWidth());
        pandRangeSlider->setSizePolicy(sizePolicy4);
        pandRangeSlider->setMinimumSize(QSize(0, 25));
        pandRangeSlider->setMaximumSize(QSize(16777215, 100));
        pandRangeSlider->setMinimum(-120);
        pandRangeSlider->setMaximum(0);
        pandRangeSlider->setValue(-80);
        pandRangeSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(pandRangeSlider, 0, 1, 1, 1);

        pandRangeLabel = new QLabel(frame_range);
        pandRangeLabel->setObjectName(QString::fromUtf8("pandRangeLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pandRangeLabel->sizePolicy().hasHeightForWidth());
        pandRangeLabel->setSizePolicy(sizePolicy6);
        pandRangeLabel->setMinimumSize(QSize(140, 25));
        pandRangeLabel->setMaximumSize(QSize(16777215, 16777215));
        pandRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(pandRangeLabel, 0, 0, 1, 1);

        wfRangeLabel = new QLabel(frame_range);
        wfRangeLabel->setObjectName(QString::fromUtf8("wfRangeLabel"));
        sizePolicy6.setHeightForWidth(wfRangeLabel->sizePolicy().hasHeightForWidth());
        wfRangeLabel->setSizePolicy(sizePolicy6);
        wfRangeLabel->setMinimumSize(QSize(140, 25));
        wfRangeLabel->setMaximumSize(QSize(16777215, 16777215));
        wfRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(wfRangeLabel, 1, 0, 1, 1);


        verticalLayout_4->addWidget(frame_range);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        tabWidget_4->addTab(tab_FFT, QString());
        tab_recording = new QWidget();
        tab_recording->setObjectName(QString::fromUtf8("tab_recording"));
        tab_recording->setMinimumSize(QSize(400, 106));
        tab_recording->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(tab_recording);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_recording = new QFrame(tab_recording);
        frame_recording->setObjectName(QString::fromUtf8("frame_recording"));
        frame_recording->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_4 = new QGridLayout(frame_recording);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        recDirButton = new QPushButton(frame_recording);
        recDirButton->setObjectName(QString::fromUtf8("recDirButton"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(1);
        sizePolicy7.setHeightForWidth(recDirButton->sizePolicy().hasHeightForWidth());
        recDirButton->setSizePolicy(sizePolicy7);
        recDirButton->setMinimumSize(QSize(0, 25));
        recDirButton->setMaximumSize(QSize(100, 100));

        gridLayout_4->addWidget(recDirButton, 1, 1, 1, 1);

        recDirEdit = new QLineEdit(frame_recording);
        recDirEdit->setObjectName(QString::fromUtf8("recDirEdit"));
        sizePolicy7.setHeightForWidth(recDirEdit->sizePolicy().hasHeightForWidth());
        recDirEdit->setSizePolicy(sizePolicy7);
        recDirEdit->setMinimumSize(QSize(0, 25));
        recDirEdit->setMaximumSize(QSize(16777215, 100));

        gridLayout_4->addWidget(recDirEdit, 1, 0, 1, 1);

        recDirLabel = new QLabel(frame_recording);
        recDirLabel->setObjectName(QString::fromUtf8("recDirLabel"));
        sizePolicy7.setHeightForWidth(recDirLabel->sizePolicy().hasHeightForWidth());
        recDirLabel->setSizePolicy(sizePolicy7);
        recDirLabel->setMinimumSize(QSize(0, 25));
        recDirLabel->setMaximumSize(QSize(16777215, 100));

        gridLayout_4->addWidget(recDirLabel, 0, 0, 1, 2);


        verticalLayout_2->addWidget(frame_recording);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(0, 1);
        tabWidget_4->addTab(tab_recording, QString());
        tab_network = new QWidget();
        tab_network->setObjectName(QString::fromUtf8("tab_network"));
        tab_network->setMinimumSize(QSize(400, 106));
        verticalLayout_3 = new QVBoxLayout(tab_network);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_network = new QFrame(tab_network);
        frame_network->setObjectName(QString::fromUtf8("frame_network"));
        frame_network->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_8 = new QGridLayout(frame_network);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        hostLabel = new QLabel(frame_network);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));
        sizePolicy7.setHeightForWidth(hostLabel->sizePolicy().hasHeightForWidth());
        hostLabel->setSizePolicy(sizePolicy7);
        hostLabel->setMinimumSize(QSize(0, 25));
        hostLabel->setMaximumSize(QSize(16777215, 100));

        gridLayout_8->addWidget(hostLabel, 0, 0, 1, 1);

        portLabel = new QLabel(frame_network);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        sizePolicy7.setHeightForWidth(portLabel->sizePolicy().hasHeightForWidth());
        portLabel->setSizePolicy(sizePolicy7);
        portLabel->setMinimumSize(QSize(0, 25));
        portLabel->setMaximumSize(QSize(16777215, 100));

        gridLayout_8->addWidget(portLabel, 1, 0, 1, 1);

        udpHost = new QLineEdit(frame_network);
        udpHost->setObjectName(QString::fromUtf8("udpHost"));
        sizePolicy7.setHeightForWidth(udpHost->sizePolicy().hasHeightForWidth());
        udpHost->setSizePolicy(sizePolicy7);
        udpHost->setMinimumSize(QSize(0, 25));
        udpHost->setMaximumSize(QSize(16777215, 100));

        gridLayout_8->addWidget(udpHost, 0, 1, 1, 3);

        udpPort = new QSpinBox(frame_network);
        udpPort->setObjectName(QString::fromUtf8("udpPort"));
        sizePolicy7.setHeightForWidth(udpPort->sizePolicy().hasHeightForWidth());
        udpPort->setSizePolicy(sizePolicy7);
        udpPort->setMinimumSize(QSize(0, 25));
        udpPort->setMaximumSize(QSize(16777215, 100));
        udpPort->setMinimum(1);
        udpPort->setMaximum(65535);
        udpPort->setValue(7355);

        gridLayout_8->addWidget(udpPort, 1, 1, 1, 1);

        udpStereo = new QPushButton(frame_network);
        udpStereo->setObjectName(QString::fromUtf8("udpStereo"));
        sizePolicy7.setHeightForWidth(udpStereo->sizePolicy().hasHeightForWidth());
        udpStereo->setSizePolicy(sizePolicy7);
        udpStereo->setMinimumSize(QSize(0, 25));
        udpStereo->setMaximumSize(QSize(16777215, 100));
        udpStereo->setCheckable(true);

        gridLayout_8->addWidget(udpStereo, 1, 3, 1, 1);


        verticalLayout_3->addWidget(frame_network);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_3->setStretch(0, 1);
        tabWidget_4->addTab(tab_network, QString());
        tab_output = new QWidget();
        tab_output->setObjectName(QString::fromUtf8("tab_output"));
        tab_output->setMinimumSize(QSize(400, 106));
        verticalLayout_6 = new QVBoxLayout(tab_output);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_output = new QFrame(tab_output);
        frame_output->setObjectName(QString::fromUtf8("frame_output"));
        frame_output->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(frame_output);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        audioStreamButton = new QPushButton(frame_output);
        audioStreamButton->setObjectName(QString::fromUtf8("audioStreamButton"));
        sizePolicy7.setHeightForWidth(audioStreamButton->sizePolicy().hasHeightForWidth());
        audioStreamButton->setSizePolicy(sizePolicy7);
        audioStreamButton->setMinimumSize(QSize(0, 25));
        audioStreamButton->setMaximumSize(QSize(16777215, 100));
        audioStreamButton->setCheckable(true);

        gridLayout->addWidget(audioStreamButton, 1, 1, 1, 1);

        audioConfButton = new QPushButton(frame_output);
        audioConfButton->setObjectName(QString::fromUtf8("audioConfButton"));
        audioConfButton->setEnabled(false);
        sizePolicy7.setHeightForWidth(audioConfButton->sizePolicy().hasHeightForWidth());
        audioConfButton->setSizePolicy(sizePolicy7);
        audioConfButton->setMinimumSize(QSize(0, 25));
        audioConfButton->setMaximumSize(QSize(16777215, 100));
        audioConfButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(audioConfButton, 1, 4, 1, 1);

        audioRecButton = new QPushButton(frame_output);
        audioRecButton->setObjectName(QString::fromUtf8("audioRecButton"));
        sizePolicy7.setHeightForWidth(audioRecButton->sizePolicy().hasHeightForWidth());
        audioRecButton->setSizePolicy(sizePolicy7);
        audioRecButton->setMinimumSize(QSize(0, 25));
        audioRecButton->setMaximumSize(QSize(16777215, 100));
        audioRecButton->setIconSize(QSize(16, 16));
        audioRecButton->setCheckable(true);

        gridLayout->addWidget(audioRecButton, 1, 2, 1, 1);

        audioMuteButton = new QPushButton(frame_output);
        audioMuteButton->setObjectName(QString::fromUtf8("audioMuteButton"));
        sizePolicy7.setHeightForWidth(audioMuteButton->sizePolicy().hasHeightForWidth());
        audioMuteButton->setSizePolicy(sizePolicy7);
        audioMuteButton->setMinimumSize(QSize(0, 25));
        audioMuteButton->setMaximumSize(QSize(16777215, 100));
        audioMuteButton->setCheckable(true);

        gridLayout->addWidget(audioMuteButton, 1, 0, 1, 1);

        audioPlayButton = new QPushButton(frame_output);
        audioPlayButton->setObjectName(QString::fromUtf8("audioPlayButton"));
        audioPlayButton->setEnabled(false);
        sizePolicy7.setHeightForWidth(audioPlayButton->sizePolicy().hasHeightForWidth());
        audioPlayButton->setSizePolicy(sizePolicy7);
        audioPlayButton->setMinimumSize(QSize(0, 25));
        audioPlayButton->setMaximumSize(QSize(16777215, 100));
        audioPlayButton->setIconSize(QSize(16, 16));
        audioPlayButton->setCheckable(true);

        gridLayout->addWidget(audioPlayButton, 1, 3, 1, 1);

        audioGainLabel = new QLabel(frame_output);
        audioGainLabel->setObjectName(QString::fromUtf8("audioGainLabel"));
        sizePolicy7.setHeightForWidth(audioGainLabel->sizePolicy().hasHeightForWidth());
        audioGainLabel->setSizePolicy(sizePolicy7);
        audioGainLabel->setMinimumSize(QSize(0, 25));
        audioGainLabel->setMaximumSize(QSize(16777215, 100));
        audioGainLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(audioGainLabel, 0, 0, 1, 1);

        audioGainDbLabel = new QLabel(frame_output);
        audioGainDbLabel->setObjectName(QString::fromUtf8("audioGainDbLabel"));
        sizePolicy7.setHeightForWidth(audioGainDbLabel->sizePolicy().hasHeightForWidth());
        audioGainDbLabel->setSizePolicy(sizePolicy7);
        audioGainDbLabel->setMinimumSize(QSize(0, 25));
        audioGainDbLabel->setMaximumSize(QSize(16777215, 100));
        audioGainDbLabel->setAlignment(Qt::AlignCenter);
        audioGainDbLabel->setMargin(0);
        audioGainDbLabel->setIndent(1);

        gridLayout->addWidget(audioGainDbLabel, 0, 4, 1, 1);

        audioGainSlider = new QSlider(frame_output);
        audioGainSlider->setObjectName(QString::fromUtf8("audioGainSlider"));
        sizePolicy7.setHeightForWidth(audioGainSlider->sizePolicy().hasHeightForWidth());
        audioGainSlider->setSizePolicy(sizePolicy7);
        audioGainSlider->setMinimumSize(QSize(0, 25));
        audioGainSlider->setMaximumSize(QSize(16777215, 100));
        audioGainSlider->setMinimum(-800);
        audioGainSlider->setMaximum(500);
        audioGainSlider->setValue(-60);
        audioGainSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(audioGainSlider, 0, 1, 1, 3);

        audioRecLabel = new QLabel(frame_output);
        audioRecLabel->setObjectName(QString::fromUtf8("audioRecLabel"));
        sizePolicy7.setHeightForWidth(audioRecLabel->sizePolicy().hasHeightForWidth());
        audioRecLabel->setSizePolicy(sizePolicy7);
        audioRecLabel->setMinimumSize(QSize(0, 25));
        audioRecLabel->setMaximumSize(QSize(16777215, 100));
        audioRecLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(audioRecLabel, 2, 0, 1, 5);


        verticalLayout_6->addWidget(frame_output);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_6->setStretch(0, 1);
        tabWidget_4->addTab(tab_output, QString());

        verticalLayout->addWidget(tabWidget_4);

        DockAudio->setWidget(dockWidgetContents);

        retranslateUi(DockAudio);

        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DockAudio);
    } // setupUi

    void retranslateUi(QDockWidget *DockAudio)
    {
        DockAudio->setWindowTitle(QApplication::translate("DockAudio", "Audio", nullptr));
#ifndef QT_NO_TOOLTIP
        audioSpectrum->setToolTip(QApplication::translate("DockAudio", "Audio spectrum", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab), QApplication::translate("DockAudio", "Spectrum", nullptr));
#ifndef QT_NO_TOOLTIP
        fftSplitLabel1->setToolTip(QApplication::translate("DockAudio", "Adjust split between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
        fftSplitLabel1->setText(QApplication::translate("DockAudio", "Pandapter", nullptr));
#ifndef QT_NO_TOOLTIP
        fftSplitSlider->setToolTip(QApplication::translate("DockAudio", "Adjust split between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fftSplitLabel2->setToolTip(QApplication::translate("DockAudio", "Adjust split between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
        fftSplitLabel2->setText(QApplication::translate("DockAudio", "Waterfall", nullptr));
#ifndef QT_NO_TOOLTIP
        audioLockButton->setToolTip(QApplication::translate("DockAudio", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioLockButton->setStatusTip(QApplication::translate("DockAudio", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_NO_STATUSTIP
        audioLockButton->setText(QApplication::translate("DockAudio", "Lock", nullptr));
#ifndef QT_NO_TOOLTIP
        wfRangeSlider->setToolTip(QApplication::translate("DockAudio", "Adjust dB range on the waterfall", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pandRangeSlider->setToolTip(QApplication::translate("DockAudio", "Adjust dB range on the pandapter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pandRangeLabel->setToolTip(QApplication::translate("DockAudio", "Adjust dB range on the pandapter", nullptr));
#endif // QT_NO_TOOLTIP
        pandRangeLabel->setText(QApplication::translate("DockAudio", "Pandapter dB range", nullptr));
#ifndef QT_NO_TOOLTIP
        wfRangeLabel->setToolTip(QApplication::translate("DockAudio", "Adjust dB range on the waterfall", nullptr));
#endif // QT_NO_TOOLTIP
        wfRangeLabel->setText(QApplication::translate("DockAudio", "Waterfall dB range", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_FFT), QApplication::translate("DockAudio", "FFT", nullptr));
        tabWidget_4->setTabToolTip(tabWidget_4->indexOf(tab_FFT), QApplication::translate("DockAudio", "Audio FFT settings", nullptr));
#ifndef QT_NO_TOOLTIP
        recDirButton->setToolTip(QApplication::translate("DockAudio", "Select a location using a browser", nullptr));
#endif // QT_NO_TOOLTIP
        recDirButton->setText(QApplication::translate("DockAudio", "Select", nullptr));
#ifndef QT_NO_TOOLTIP
        recDirEdit->setToolTip(QApplication::translate("DockAudio", "Enter a location for recordings", nullptr));
#endif // QT_NO_TOOLTIP
        recDirLabel->setText(QApplication::translate("DockAudio", "Location for recorded audio files:", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_recording), QApplication::translate("DockAudio", "Recording", nullptr));
        tabWidget_4->setTabToolTip(tabWidget_4->indexOf(tab_recording), QApplication::translate("DockAudio", "Recording settings", nullptr));
#ifndef QT_NO_TOOLTIP
        hostLabel->setToolTip(QApplication::translate("DockAudio", "Network host to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        hostLabel->setText(QApplication::translate("DockAudio", "UDP host", nullptr));
#ifndef QT_NO_TOOLTIP
        portLabel->setToolTip(QApplication::translate("DockAudio", "Network port to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        portLabel->setText(QApplication::translate("DockAudio", "UDP port", nullptr));
#ifndef QT_NO_TOOLTIP
        udpHost->setToolTip(QApplication::translate("DockAudio", "Network host to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        udpHost->setText(QApplication::translate("DockAudio", "localhost", nullptr));
#ifndef QT_NO_TOOLTIP
        udpPort->setToolTip(QApplication::translate("DockAudio", "Network port to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        udpStereo->setText(QApplication::translate("DockAudio", "Stereo", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_network), QApplication::translate("DockAudio", "Network", nullptr));
        tabWidget_4->setTabToolTip(tabWidget_4->indexOf(tab_network), QApplication::translate("DockAudio", "Network streaming settings", nullptr));
#ifndef QT_NO_TOOLTIP
        audioStreamButton->setToolTip(QApplication::translate("DockAudio", "Stream raw audio over UDP", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioStreamButton->setStatusTip(QApplication::translate("DockAudio", "Stream raw audio over UDP", nullptr));
#endif // QT_NO_STATUSTIP
        audioStreamButton->setText(QApplication::translate("DockAudio", "UDP", nullptr));
#ifndef QT_NO_TOOLTIP
        audioConfButton->setToolTip(QApplication::translate("DockAudio", "Audio settings", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioConfButton->setStatusTip(QApplication::translate("DockAudio", "Audio settings", nullptr));
#endif // QT_NO_STATUSTIP
        audioConfButton->setText(QApplication::translate("DockAudio", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        audioRecButton->setToolTip(QApplication::translate("DockAudio", "Record audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioRecButton->setStatusTip(QApplication::translate("DockAudio", "Record audio", nullptr));
#endif // QT_NO_STATUSTIP
        audioRecButton->setText(QApplication::translate("DockAudio", "Rec", nullptr));
#ifndef QT_NO_TOOLTIP
        audioMuteButton->setToolTip(QApplication::translate("DockAudio", "Mute audio output", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioMuteButton->setStatusTip(QApplication::translate("DockAudio", "Mute audio output", nullptr));
#endif // QT_NO_STATUSTIP
        audioMuteButton->setText(QApplication::translate("DockAudio", "Mute", nullptr));
#ifndef QT_NO_TOOLTIP
        audioPlayButton->setToolTip(QApplication::translate("DockAudio", "Playback previously recorded audio", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioPlayButton->setStatusTip(QApplication::translate("DockAudio", "Playback previously recorded audio", nullptr));
#endif // QT_NO_STATUSTIP
        audioPlayButton->setText(QApplication::translate("DockAudio", "Play", nullptr));
        audioGainLabel->setText(QApplication::translate("DockAudio", "Gain:", nullptr));
        audioGainDbLabel->setText(QApplication::translate("DockAudio", "-6.0 dB", nullptr));
#ifndef QT_NO_TOOLTIP
        audioGainSlider->setToolTip(QApplication::translate("DockAudio", "Audio gain", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioGainSlider->setStatusTip(QApplication::translate("DockAudio", "Audio gain", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        audioRecLabel->setToolTip(QApplication::translate("DockAudio", "Current audio source (DSP or WAV file)", nullptr));
#endif // QT_NO_TOOLTIP
        audioRecLabel->setText(QApplication::translate("DockAudio", "<i>DSP</i>", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_output), QApplication::translate("DockAudio", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockAudio: public Ui_DockAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKAUDIO_H
