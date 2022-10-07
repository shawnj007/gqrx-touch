/********************************************************************************
** Form generated from reading UI file 'dockfft.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKFFT_H
#define UI_DOCKFFT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtgui/ctk/ctkRangeSlider.h"
#include "qtgui/qtcolorpicker.h"

QT_BEGIN_NAMESPACE

class Ui_DockFft
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_peak_range;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_peak_range;
    QGridLayout *gridLayout;
    QLabel *peakLabel;
    QLabel *pandRangeLabel;
    QPushButton *centerButton;
    QLabel *wfRangeLabel;
    QPushButton *peakDetectionButton;
    QPushButton *lockButton;
    QPushButton *resetButton;
    QPushButton *demodButton;
    QPushButton *peakHoldButton;
    ctkRangeSlider *pandRangeSlider;
    ctkRangeSlider *wfRangeSlider;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_color_bands;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_color_bands;
    QGridLayout *gridLayout_4;
    QComboBox *cmapComboBox;
    QLabel *colorLabel;
    QPushButton *fillButton;
    QLabel *label_17;
    QtColorPicker *colorPicker;
    QLabel *label_18;
    QComboBox *fftWinComboBox;
    QLabel *wfLabel;
    QPushButton *bandPlanCheckbox;
    QSpacerItem *verticalSpacer;
    QWidget *tab_view;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_view;
    QGridLayout *gridLayout_5;
    QLabel *fftSizeLabel;
    QComboBox *fftSizeComboBox;
    QLabel *fftRbwLabel;
    QLabel *fftAvgLabel;
    QSlider *fftAvgSlider;
    QLabel *fftRateLabel;
    QComboBox *fftRateComboBox;
    QLabel *fftOvrLabel;
    QLabel *pandLabel;
    QSlider *fftSplitSlider;
    QLabel *label_19;
    QComboBox *wfSpanComboBox;
    QLabel *wfResLabel;
    QLabel *zoomLAbel;
    QSlider *fftZoomSlider;
    QLabel *zoomLevelLabel;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDockWidget *DockFft)
    {
        if (DockFft->objectName().isEmpty())
            DockFft->setObjectName(QString::fromUtf8("DockFft"));
        DockFft->resize(450, 145);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockFft->sizePolicy().hasHeightForWidth());
        DockFft->setSizePolicy(sizePolicy);
        DockFft->setMinimumSize(QSize(450, 145));
        DockFft->setMaximumSize(QSize(524287, 360));
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
        DockFft->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockFft->setWindowIcon(icon);
        DockFft->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockFft->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        dockWidgetContents->setMinimumSize(QSize(450, 126));
        dockWidgetContents->setMaximumSize(QSize(16777215, 360));
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
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(dockWidgetContents);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(443, 126));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tab_peak_range = new QWidget();
        tab_peak_range->setObjectName(QString::fromUtf8("tab_peak_range"));
        tab_peak_range->setMinimumSize(QSize(439, 95));
        tab_peak_range->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_5 = new QVBoxLayout(tab_peak_range);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_peak_range = new QFrame(tab_peak_range);
        frame_peak_range->setObjectName(QString::fromUtf8("frame_peak_range"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_peak_range->sizePolicy().hasHeightForWidth());
        frame_peak_range->setSizePolicy(sizePolicy3);
        frame_peak_range->setMinimumSize(QSize(439, 75));
        frame_peak_range->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(frame_peak_range);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        peakLabel = new QLabel(frame_peak_range);
        peakLabel->setObjectName(QString::fromUtf8("peakLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(peakLabel->sizePolicy().hasHeightForWidth());
        peakLabel->setSizePolicy(sizePolicy4);
        peakLabel->setMinimumSize(QSize(100, 25));
        peakLabel->setMaximumSize(QSize(100, 100));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        peakLabel->setPalette(palette2);
        peakLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(peakLabel, 0, 0, 1, 1);

        pandRangeLabel = new QLabel(frame_peak_range);
        pandRangeLabel->setObjectName(QString::fromUtf8("pandRangeLabel"));
        sizePolicy4.setHeightForWidth(pandRangeLabel->sizePolicy().hasHeightForWidth());
        pandRangeLabel->setSizePolicy(sizePolicy4);
        pandRangeLabel->setMinimumSize(QSize(100, 25));
        pandRangeLabel->setMaximumSize(QSize(100, 100));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        pandRangeLabel->setPalette(palette3);
        pandRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pandRangeLabel, 1, 0, 1, 1);

        centerButton = new QPushButton(frame_peak_range);
        centerButton->setObjectName(QString::fromUtf8("centerButton"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(centerButton->sizePolicy().hasHeightForWidth());
        centerButton->setSizePolicy(sizePolicy5);
        centerButton->setMinimumSize(QSize(80, 25));
        centerButton->setMaximumSize(QSize(16777215, 100));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        centerButton->setPalette(palette4);

        gridLayout->addWidget(centerButton, 0, 4, 1, 1);

        wfRangeLabel = new QLabel(frame_peak_range);
        wfRangeLabel->setObjectName(QString::fromUtf8("wfRangeLabel"));
        sizePolicy4.setHeightForWidth(wfRangeLabel->sizePolicy().hasHeightForWidth());
        wfRangeLabel->setSizePolicy(sizePolicy4);
        wfRangeLabel->setMinimumSize(QSize(100, 25));
        wfRangeLabel->setMaximumSize(QSize(100, 100));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        wfRangeLabel->setPalette(palette5);
        wfRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(wfRangeLabel, 2, 0, 1, 1);

        peakDetectionButton = new QPushButton(frame_peak_range);
        peakDetectionButton->setObjectName(QString::fromUtf8("peakDetectionButton"));
        sizePolicy5.setHeightForWidth(peakDetectionButton->sizePolicy().hasHeightForWidth());
        peakDetectionButton->setSizePolicy(sizePolicy5);
        peakDetectionButton->setMinimumSize(QSize(80, 25));
        peakDetectionButton->setMaximumSize(QSize(16777215, 100));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        peakDetectionButton->setPalette(palette6);
        peakDetectionButton->setCheckable(true);

        gridLayout->addWidget(peakDetectionButton, 0, 1, 1, 1);

        lockButton = new QPushButton(frame_peak_range);
        lockButton->setObjectName(QString::fromUtf8("lockButton"));
        lockButton->setEnabled(true);
        sizePolicy5.setHeightForWidth(lockButton->sizePolicy().hasHeightForWidth());
        lockButton->setSizePolicy(sizePolicy5);
        lockButton->setMinimumSize(QSize(80, 50));
        lockButton->setMaximumSize(QSize(16777215, 200));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        lockButton->setPalette(palette7);
        lockButton->setCheckable(true);

        gridLayout->addWidget(lockButton, 1, 3, 2, 1);

        resetButton = new QPushButton(frame_peak_range);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        sizePolicy5.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy5);
        resetButton->setMinimumSize(QSize(80, 25));
        resetButton->setMaximumSize(QSize(16777215, 100));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        resetButton->setPalette(palette8);

        gridLayout->addWidget(resetButton, 2, 4, 1, 1);

        demodButton = new QPushButton(frame_peak_range);
        demodButton->setObjectName(QString::fromUtf8("demodButton"));
        sizePolicy5.setHeightForWidth(demodButton->sizePolicy().hasHeightForWidth());
        demodButton->setSizePolicy(sizePolicy5);
        demodButton->setMinimumSize(QSize(80, 25));
        demodButton->setMaximumSize(QSize(16777215, 100));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        demodButton->setPalette(palette9);

        gridLayout->addWidget(demodButton, 1, 4, 1, 1);

        peakHoldButton = new QPushButton(frame_peak_range);
        peakHoldButton->setObjectName(QString::fromUtf8("peakHoldButton"));
        sizePolicy5.setHeightForWidth(peakHoldButton->sizePolicy().hasHeightForWidth());
        peakHoldButton->setSizePolicy(sizePolicy5);
        peakHoldButton->setMinimumSize(QSize(80, 25));
        peakHoldButton->setMaximumSize(QSize(16777215, 100));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        peakHoldButton->setPalette(palette10);
        peakHoldButton->setCheckable(true);

        gridLayout->addWidget(peakHoldButton, 0, 2, 1, 1);

        pandRangeSlider = new ctkRangeSlider(frame_peak_range);
        pandRangeSlider->setObjectName(QString::fromUtf8("pandRangeSlider"));
        sizePolicy5.setHeightForWidth(pandRangeSlider->sizePolicy().hasHeightForWidth());
        pandRangeSlider->setSizePolicy(sizePolicy5);
        pandRangeSlider->setMinimumSize(QSize(0, 25));
        pandRangeSlider->setMaximumSize(QSize(16777215, 100));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        pandRangeSlider->setPalette(palette11);
        pandRangeSlider->setMinimum(-160);
        pandRangeSlider->setMaximum(0);
        pandRangeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(pandRangeSlider, 1, 1, 1, 2);

        wfRangeSlider = new ctkRangeSlider(frame_peak_range);
        wfRangeSlider->setObjectName(QString::fromUtf8("wfRangeSlider"));
        sizePolicy5.setHeightForWidth(wfRangeSlider->sizePolicy().hasHeightForWidth());
        wfRangeSlider->setSizePolicy(sizePolicy5);
        wfRangeSlider->setMinimumSize(QSize(0, 25));
        wfRangeSlider->setMaximumSize(QSize(16777215, 100));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        wfRangeSlider->setPalette(palette12);
        wfRangeSlider->setMinimum(-160);
        wfRangeSlider->setMaximum(0);
        wfRangeSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(wfRangeSlider, 2, 1, 1, 2);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_5->addWidget(frame_peak_range);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        verticalLayout_5->setStretch(0, 1);
        tabWidget->addTab(tab_peak_range, QString());
        tab_color_bands = new QWidget();
        tab_color_bands->setObjectName(QString::fromUtf8("tab_color_bands"));
        tab_color_bands->setMinimumSize(QSize(439, 95));
        tab_color_bands->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_6 = new QVBoxLayout(tab_color_bands);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_color_bands = new QFrame(tab_color_bands);
        frame_color_bands->setObjectName(QString::fromUtf8("frame_color_bands"));
        frame_color_bands->setMinimumSize(QSize(439, 75));
        frame_color_bands->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_4 = new QGridLayout(frame_color_bands);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        cmapComboBox = new QComboBox(frame_color_bands);
        cmapComboBox->setObjectName(QString::fromUtf8("cmapComboBox"));
        sizePolicy4.setHeightForWidth(cmapComboBox->sizePolicy().hasHeightForWidth());
        cmapComboBox->setSizePolicy(sizePolicy4);
        cmapComboBox->setMinimumSize(QSize(0, 25));
        cmapComboBox->setMaximumSize(QSize(16777215, 100));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        cmapComboBox->setPalette(palette13);

        gridLayout_4->addWidget(cmapComboBox, 1, 1, 1, 3);

        colorLabel = new QLabel(frame_color_bands);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        sizePolicy4.setHeightForWidth(colorLabel->sizePolicy().hasHeightForWidth());
        colorLabel->setSizePolicy(sizePolicy4);
        colorLabel->setMinimumSize(QSize(0, 25));
        colorLabel->setMaximumSize(QSize(16777215, 100));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        colorLabel->setPalette(palette14);
        colorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(colorLabel, 0, 0, 1, 1);

        fillButton = new QPushButton(frame_color_bands);
        fillButton->setObjectName(QString::fromUtf8("fillButton"));
        sizePolicy4.setHeightForWidth(fillButton->sizePolicy().hasHeightForWidth());
        fillButton->setSizePolicy(sizePolicy4);
        fillButton->setMinimumSize(QSize(50, 25));
        fillButton->setMaximumSize(QSize(16777215, 100));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        fillButton->setPalette(palette15);
        fillButton->setCheckable(true);

        gridLayout_4->addWidget(fillButton, 0, 2, 1, 2);

        label_17 = new QLabel(frame_color_bands);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy4.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy4);
        label_17->setMinimumSize(QSize(0, 25));
        label_17->setMaximumSize(QSize(16777215, 100));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_17->setPalette(palette16);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_17, 1, 0, 1, 1);

        colorPicker = new QtColorPicker(frame_color_bands);
        colorPicker->setObjectName(QString::fromUtf8("colorPicker"));
        sizePolicy4.setHeightForWidth(colorPicker->sizePolicy().hasHeightForWidth());
        colorPicker->setSizePolicy(sizePolicy4);
        colorPicker->setMinimumSize(QSize(50, 25));
        colorPicker->setMaximumSize(QSize(16777215, 100));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        colorPicker->setPalette(palette17);
        colorPicker->setFlat(true);

        gridLayout_4->addWidget(colorPicker, 0, 1, 1, 1);

        label_18 = new QLabel(frame_color_bands);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy4.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy4);
        label_18->setMinimumSize(QSize(0, 25));
        label_18->setMaximumSize(QSize(16777215, 100));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        label_18->setPalette(palette18);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        fftWinComboBox = new QComboBox(frame_color_bands);
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->addItem(QString());
        fftWinComboBox->setObjectName(QString::fromUtf8("fftWinComboBox"));
        sizePolicy4.setHeightForWidth(fftWinComboBox->sizePolicy().hasHeightForWidth());
        fftWinComboBox->setSizePolicy(sizePolicy4);
        fftWinComboBox->setMinimumSize(QSize(0, 25));
        fftWinComboBox->setMaximumSize(QSize(16777215, 100));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        fftWinComboBox->setPalette(palette19);

        gridLayout_4->addWidget(fftWinComboBox, 2, 1, 1, 3);

        wfLabel = new QLabel(frame_color_bands);
        wfLabel->setObjectName(QString::fromUtf8("wfLabel"));
        sizePolicy4.setHeightForWidth(wfLabel->sizePolicy().hasHeightForWidth());
        wfLabel->setSizePolicy(sizePolicy4);
        wfLabel->setMinimumSize(QSize(0, 25));
        wfLabel->setMaximumSize(QSize(16777215, 100));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        wfLabel->setPalette(palette20);
        wfLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(wfLabel, 2, 4, 1, 1);

        bandPlanCheckbox = new QPushButton(frame_color_bands);
        bandPlanCheckbox->setObjectName(QString::fromUtf8("bandPlanCheckbox"));
        sizePolicy4.setHeightForWidth(bandPlanCheckbox->sizePolicy().hasHeightForWidth());
        bandPlanCheckbox->setSizePolicy(sizePolicy4);
        bandPlanCheckbox->setMinimumSize(QSize(0, 25));
        bandPlanCheckbox->setMaximumSize(QSize(16777215, 100));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        bandPlanCheckbox->setPalette(palette21);
        bandPlanCheckbox->setLayoutDirection(Qt::RightToLeft);
        bandPlanCheckbox->setCheckable(true);

        gridLayout_4->addWidget(bandPlanCheckbox, 0, 4, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);
        gridLayout_4->setColumnStretch(2, 1);
        gridLayout_4->setColumnStretch(3, 1);

        verticalLayout_6->addWidget(frame_color_bands);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_6->setStretch(0, 1);
        tabWidget->addTab(tab_color_bands, QString());
        tab_view = new QWidget();
        tab_view->setObjectName(QString::fromUtf8("tab_view"));
        tab_view->setMinimumSize(QSize(439, 95));
        tab_view->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_7 = new QVBoxLayout(tab_view);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame_view = new QFrame(tab_view);
        frame_view->setObjectName(QString::fromUtf8("frame_view"));
        frame_view->setMinimumSize(QSize(439, 93));
        frame_view->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_5 = new QGridLayout(frame_view);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        fftSizeLabel = new QLabel(frame_view);
        fftSizeLabel->setObjectName(QString::fromUtf8("fftSizeLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(fftSizeLabel->sizePolicy().hasHeightForWidth());
        fftSizeLabel->setSizePolicy(sizePolicy6);
        fftSizeLabel->setMinimumSize(QSize(0, 25));
        fftSizeLabel->setMaximumSize(QSize(16777215, 100));
        fftSizeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(fftSizeLabel, 0, 0, 1, 1);

        fftSizeComboBox = new QComboBox(frame_view);
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->addItem(QString());
        fftSizeComboBox->setObjectName(QString::fromUtf8("fftSizeComboBox"));
        fftSizeComboBox->setEnabled(true);
        sizePolicy6.setHeightForWidth(fftSizeComboBox->sizePolicy().hasHeightForWidth());
        fftSizeComboBox->setSizePolicy(sizePolicy6);
        fftSizeComboBox->setMinimumSize(QSize(0, 25));
        fftSizeComboBox->setMaximumSize(QSize(16777215, 100));
        fftSizeComboBox->setEditable(false);
        fftSizeComboBox->setMaxVisibleItems(15);
        fftSizeComboBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        gridLayout_5->addWidget(fftSizeComboBox, 0, 1, 1, 1);

        fftRbwLabel = new QLabel(frame_view);
        fftRbwLabel->setObjectName(QString::fromUtf8("fftRbwLabel"));
        sizePolicy6.setHeightForWidth(fftRbwLabel->sizePolicy().hasHeightForWidth());
        fftRbwLabel->setSizePolicy(sizePolicy6);
        fftRbwLabel->setMinimumSize(QSize(0, 25));
        fftRbwLabel->setMaximumSize(QSize(16777215, 100));

        gridLayout_5->addWidget(fftRbwLabel, 0, 2, 1, 1);

        fftAvgLabel = new QLabel(frame_view);
        fftAvgLabel->setObjectName(QString::fromUtf8("fftAvgLabel"));
        sizePolicy6.setHeightForWidth(fftAvgLabel->sizePolicy().hasHeightForWidth());
        fftAvgLabel->setSizePolicy(sizePolicy6);
        fftAvgLabel->setMinimumSize(QSize(0, 25));
        fftAvgLabel->setMaximumSize(QSize(16777215, 100));
        fftAvgLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(fftAvgLabel, 0, 3, 1, 1);

        fftAvgSlider = new QSlider(frame_view);
        fftAvgSlider->setObjectName(QString::fromUtf8("fftAvgSlider"));
        sizePolicy6.setHeightForWidth(fftAvgSlider->sizePolicy().hasHeightForWidth());
        fftAvgSlider->setSizePolicy(sizePolicy6);
        fftAvgSlider->setMinimumSize(QSize(0, 25));
        fftAvgSlider->setMaximumSize(QSize(16777215, 100));
        fftAvgSlider->setMaximum(100);
        fftAvgSlider->setValue(35);
        fftAvgSlider->setOrientation(Qt::Horizontal);
        fftAvgSlider->setInvertedAppearance(false);
        fftAvgSlider->setInvertedControls(false);

        gridLayout_5->addWidget(fftAvgSlider, 0, 4, 1, 1);

        fftRateLabel = new QLabel(frame_view);
        fftRateLabel->setObjectName(QString::fromUtf8("fftRateLabel"));
        sizePolicy6.setHeightForWidth(fftRateLabel->sizePolicy().hasHeightForWidth());
        fftRateLabel->setSizePolicy(sizePolicy6);
        fftRateLabel->setMinimumSize(QSize(0, 25));
        fftRateLabel->setMaximumSize(QSize(16777215, 100));
        fftRateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(fftRateLabel, 1, 0, 1, 1);

        fftRateComboBox = new QComboBox(frame_view);
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->addItem(QString());
        fftRateComboBox->setObjectName(QString::fromUtf8("fftRateComboBox"));
        sizePolicy6.setHeightForWidth(fftRateComboBox->sizePolicy().hasHeightForWidth());
        fftRateComboBox->setSizePolicy(sizePolicy6);
        fftRateComboBox->setMinimumSize(QSize(0, 25));
        fftRateComboBox->setMaximumSize(QSize(16777215, 100));

        gridLayout_5->addWidget(fftRateComboBox, 1, 1, 1, 1);

        fftOvrLabel = new QLabel(frame_view);
        fftOvrLabel->setObjectName(QString::fromUtf8("fftOvrLabel"));
        sizePolicy6.setHeightForWidth(fftOvrLabel->sizePolicy().hasHeightForWidth());
        fftOvrLabel->setSizePolicy(sizePolicy6);
        fftOvrLabel->setMinimumSize(QSize(0, 25));
        fftOvrLabel->setMaximumSize(QSize(16777215, 100));
        fftOvrLabel->setMargin(0);

        gridLayout_5->addWidget(fftOvrLabel, 1, 2, 1, 1);

        pandLabel = new QLabel(frame_view);
        pandLabel->setObjectName(QString::fromUtf8("pandLabel"));
        sizePolicy6.setHeightForWidth(pandLabel->sizePolicy().hasHeightForWidth());
        pandLabel->setSizePolicy(sizePolicy6);
        pandLabel->setMinimumSize(QSize(0, 25));
        pandLabel->setMaximumSize(QSize(16777215, 100));
        pandLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(pandLabel, 1, 3, 1, 1);

        fftSplitSlider = new QSlider(frame_view);
        fftSplitSlider->setObjectName(QString::fromUtf8("fftSplitSlider"));
        sizePolicy6.setHeightForWidth(fftSplitSlider->sizePolicy().hasHeightForWidth());
        fftSplitSlider->setSizePolicy(sizePolicy6);
        fftSplitSlider->setMinimumSize(QSize(0, 25));
        fftSplitSlider->setMaximumSize(QSize(16777215, 100));
        fftSplitSlider->setMinimum(0);
        fftSplitSlider->setMaximum(100);
        fftSplitSlider->setValue(66);
        fftSplitSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(fftSplitSlider, 1, 4, 1, 1);

        label_19 = new QLabel(frame_view);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy6.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy6);
        label_19->setMinimumSize(QSize(0, 25));
        label_19->setMaximumSize(QSize(16777215, 100));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_19, 2, 0, 1, 1);

        wfSpanComboBox = new QComboBox(frame_view);
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->addItem(QString());
        wfSpanComboBox->setObjectName(QString::fromUtf8("wfSpanComboBox"));
        sizePolicy6.setHeightForWidth(wfSpanComboBox->sizePolicy().hasHeightForWidth());
        wfSpanComboBox->setSizePolicy(sizePolicy6);
        wfSpanComboBox->setMinimumSize(QSize(0, 25));
        wfSpanComboBox->setMaximumSize(QSize(16777215, 100));

        gridLayout_5->addWidget(wfSpanComboBox, 2, 1, 1, 1);

        wfResLabel = new QLabel(frame_view);
        wfResLabel->setObjectName(QString::fromUtf8("wfResLabel"));
        sizePolicy6.setHeightForWidth(wfResLabel->sizePolicy().hasHeightForWidth());
        wfResLabel->setSizePolicy(sizePolicy6);
        wfResLabel->setMinimumSize(QSize(0, 25));
        wfResLabel->setMaximumSize(QSize(16777215, 100));

        gridLayout_5->addWidget(wfResLabel, 2, 2, 1, 1);

        zoomLAbel = new QLabel(frame_view);
        zoomLAbel->setObjectName(QString::fromUtf8("zoomLAbel"));
        sizePolicy6.setHeightForWidth(zoomLAbel->sizePolicy().hasHeightForWidth());
        zoomLAbel->setSizePolicy(sizePolicy6);
        zoomLAbel->setMinimumSize(QSize(0, 25));
        zoomLAbel->setMaximumSize(QSize(16777215, 100));
        zoomLAbel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(zoomLAbel, 2, 3, 1, 1);

        fftZoomSlider = new QSlider(frame_view);
        fftZoomSlider->setObjectName(QString::fromUtf8("fftZoomSlider"));
        sizePolicy6.setHeightForWidth(fftZoomSlider->sizePolicy().hasHeightForWidth());
        fftZoomSlider->setSizePolicy(sizePolicy6);
        fftZoomSlider->setMinimumSize(QSize(0, 25));
        fftZoomSlider->setMaximumSize(QSize(16777215, 100));
        fftZoomSlider->setMinimum(1);
        fftZoomSlider->setMaximum(50);
        fftZoomSlider->setPageStep(5);
        fftZoomSlider->setOrientation(Qt::Horizontal);
        fftZoomSlider->setInvertedAppearance(false);
        fftZoomSlider->setInvertedControls(false);
        fftZoomSlider->setTickPosition(QSlider::NoTicks);

        gridLayout_5->addWidget(fftZoomSlider, 2, 4, 1, 1);

        zoomLevelLabel = new QLabel(frame_view);
        zoomLevelLabel->setObjectName(QString::fromUtf8("zoomLevelLabel"));
        sizePolicy6.setHeightForWidth(zoomLevelLabel->sizePolicy().hasHeightForWidth());
        zoomLevelLabel->setSizePolicy(sizePolicy6);
        zoomLevelLabel->setMinimumSize(QSize(0, 25));
        zoomLevelLabel->setMaximumSize(QSize(16777215, 100));
        zoomLevelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(zoomLevelLabel, 2, 5, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);
        gridLayout_5->setColumnStretch(4, 1);

        verticalLayout_7->addWidget(frame_view);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        verticalLayout_7->setStretch(0, 1);
        tabWidget->addTab(tab_view, QString());

        verticalLayout_2->addWidget(tabWidget);

        DockFft->setWidget(dockWidgetContents);

        retranslateUi(DockFft);

        tabWidget->setCurrentIndex(0);
        fftSizeComboBox->setCurrentIndex(7);
        fftRateComboBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(DockFft);
    } // setupUi

    void retranslateUi(QDockWidget *DockFft)
    {
#ifndef QT_NO_TOOLTIP
        DockFft->setToolTip(QApplication::translate("DockFft", "FFT performance and display settings", nullptr));
#endif // QT_NO_TOOLTIP
        DockFft->setWindowTitle(QApplication::translate("DockFft", "FFT Settings", nullptr));
        peakLabel->setText(QApplication::translate("DockFft", "Peak", nullptr));
#ifndef QT_NO_TOOLTIP
        pandRangeLabel->setToolTip(QApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pandRangeLabel->setStatusTip(QApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_NO_STATUSTIP
        pandRangeLabel->setText(QApplication::translate("DockFft", "Pand. dB", nullptr));
#ifndef QT_NO_TOOLTIP
        centerButton->setToolTip(QApplication::translate("DockFft", "Center FFT around original center frequency", nullptr));
#endif // QT_NO_TOOLTIP
        centerButton->setText(QApplication::translate("DockFft", "Center", nullptr));
#ifndef QT_NO_TOOLTIP
        wfRangeLabel->setToolTip(QApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        wfRangeLabel->setStatusTip(QApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_NO_STATUSTIP
        wfRangeLabel->setText(QApplication::translate("DockFft", "Wf. dB", nullptr));
#ifndef QT_NO_TOOLTIP
        peakDetectionButton->setToolTip(QApplication::translate("DockFft", "Enable peak detection in FFT", nullptr));
#endif // QT_NO_TOOLTIP
        peakDetectionButton->setText(QApplication::translate("DockFft", "Detect", nullptr));
#ifndef QT_NO_TOOLTIP
        lockButton->setToolTip(QApplication::translate("DockFft", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lockButton->setStatusTip(QApplication::translate("DockFft", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_NO_STATUSTIP
        lockButton->setText(QApplication::translate("DockFft", "Lock", nullptr));
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("DockFft", "Reset zoom level to 1x", nullptr));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("DockFft", "Reset", nullptr));
#ifndef QT_NO_TOOLTIP
        demodButton->setToolTip(QApplication::translate("DockFft", "Center FFT around demodulator frequency", nullptr));
#endif // QT_NO_TOOLTIP
        demodButton->setText(QApplication::translate("DockFft", "Demod", nullptr));
#ifndef QT_NO_TOOLTIP
        peakHoldButton->setToolTip(QApplication::translate("DockFft", "Toggle peak hold in FFT", nullptr));
#endif // QT_NO_TOOLTIP
        peakHoldButton->setText(QApplication::translate("DockFft", "Hold", nullptr));
#ifndef QT_NO_TOOLTIP
        pandRangeSlider->setToolTip(QApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pandRangeSlider->setStatusTip(QApplication::translate("DockFft", "Set pandapter dB range", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        wfRangeSlider->setToolTip(QApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        wfRangeSlider->setStatusTip(QApplication::translate("DockFft", "Set waterfall dB range", nullptr));
#endif // QT_NO_STATUSTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_peak_range), QApplication::translate("DockFft", "Peak\\Range", nullptr));
#ifndef QT_NO_TOOLTIP
        cmapComboBox->setToolTip(QApplication::translate("DockFft", "Select waterfall color map", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorLabel->setToolTip(QApplication::translate("DockFft", "Color for the FFT plot", nullptr));
#endif // QT_NO_TOOLTIP
        colorLabel->setText(QApplication::translate("DockFft", "Color", nullptr));
#ifndef QT_NO_TOOLTIP
        fillButton->setToolTip(QApplication::translate("DockFft", "Fill the area below the FFT plot with a gradient", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        fillButton->setStatusTip(QApplication::translate("DockFft", "Fill the area below the FFT plot with a gradient", nullptr));
#endif // QT_NO_STATUSTIP
        fillButton->setText(QApplication::translate("DockFft", "Fill", nullptr));
        label_17->setText(QApplication::translate("DockFft", "Colormap", nullptr));
#ifndef QT_NO_TOOLTIP
        colorPicker->setToolTip(QApplication::translate("DockFft", "Click to select color for the FFT plot", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        colorPicker->setStatusTip(QApplication::translate("DockFft", "Click to select color for the FFT plot", nullptr));
#endif // QT_NO_STATUSTIP
        colorPicker->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_18->setToolTip(QApplication::translate("DockFft", "FFT window", nullptr));
#endif // QT_NO_TOOLTIP
        label_18->setText(QApplication::translate("DockFft", "Window", nullptr));
        fftWinComboBox->setItemText(0, QApplication::translate("DockFft", "Hamming", nullptr));
        fftWinComboBox->setItemText(1, QApplication::translate("DockFft", "Hann", nullptr));
        fftWinComboBox->setItemText(2, QApplication::translate("DockFft", "Blackman", nullptr));
        fftWinComboBox->setItemText(3, QApplication::translate("DockFft", "Rectangular", nullptr));
        fftWinComboBox->setItemText(4, QApplication::translate("DockFft", "Kaiser", nullptr));
        fftWinComboBox->setItemText(5, QApplication::translate("DockFft", "Blackman-Harris", nullptr));
        fftWinComboBox->setItemText(6, QApplication::translate("DockFft", "Bartlett", nullptr));
        fftWinComboBox->setItemText(7, QApplication::translate("DockFft", "Flattop", nullptr));

#ifndef QT_NO_TOOLTIP
        fftWinComboBox->setToolTip(QApplication::translate("DockFft", "FFT window", nullptr));
#endif // QT_NO_TOOLTIP
        wfLabel->setText(QApplication::translate("DockFft", "Waterfall", nullptr));
#ifndef QT_NO_TOOLTIP
        bandPlanCheckbox->setToolTip(QApplication::translate("DockFft", "Enable Band Plan on bottom of spectrum", nullptr));
#endif // QT_NO_TOOLTIP
        bandPlanCheckbox->setText(QApplication::translate("DockFft", "Band Plan", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_color_bands), QApplication::translate("DockFft", "Colors\\Bands", nullptr));
        fftSizeLabel->setText(QApplication::translate("DockFft", "FFT size", nullptr));
        fftSizeComboBox->setItemText(0, QApplication::translate("DockFft", "1048576", nullptr));
        fftSizeComboBox->setItemText(1, QApplication::translate("DockFft", "524288", nullptr));
        fftSizeComboBox->setItemText(2, QApplication::translate("DockFft", "262144", nullptr));
        fftSizeComboBox->setItemText(3, QApplication::translate("DockFft", "131072", nullptr));
        fftSizeComboBox->setItemText(4, QApplication::translate("DockFft", "65536", nullptr));
        fftSizeComboBox->setItemText(5, QApplication::translate("DockFft", "32768", nullptr));
        fftSizeComboBox->setItemText(6, QApplication::translate("DockFft", "16384", nullptr));
        fftSizeComboBox->setItemText(7, QApplication::translate("DockFft", "8192", nullptr));
        fftSizeComboBox->setItemText(8, QApplication::translate("DockFft", "4096", nullptr));
        fftSizeComboBox->setItemText(9, QApplication::translate("DockFft", "3840", nullptr));
        fftSizeComboBox->setItemText(10, QApplication::translate("DockFft", "2048", nullptr));
        fftSizeComboBox->setItemText(11, QApplication::translate("DockFft", "1024", nullptr));
        fftSizeComboBox->setItemText(12, QApplication::translate("DockFft", "768", nullptr));
        fftSizeComboBox->setItemText(13, QApplication::translate("DockFft", "512", nullptr));

#ifndef QT_NO_TOOLTIP
        fftSizeComboBox->setToolTip(QApplication::translate("DockFft", "<html>Number of FFT points to calculate. Higher values will require more CPU time. This will not influence the number of points on the display since that parameter is adjusted automatically according to the display size.</html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fftRbwLabel->setToolTip(QApplication::translate("DockFft", "Resolution bandwidth", nullptr));
#endif // QT_NO_TOOLTIP
        fftRbwLabel->setText(QApplication::translate("DockFft", "RBW: 0 kHz", nullptr));
#ifndef QT_NO_TOOLTIP
        fftAvgLabel->setToolTip(QApplication::translate("DockFft", "FFT averaging gain", nullptr));
#endif // QT_NO_TOOLTIP
        fftAvgLabel->setText(QApplication::translate("DockFft", "Averaging", nullptr));
#ifndef QT_NO_TOOLTIP
        fftAvgSlider->setToolTip(QApplication::translate("DockFft", "FFT averaging gain", nullptr));
#endif // QT_NO_TOOLTIP
        fftRateLabel->setText(QApplication::translate("DockFft", "Rate", nullptr));
        fftRateComboBox->setItemText(0, QApplication::translate("DockFft", "60 fps", nullptr));
        fftRateComboBox->setItemText(1, QApplication::translate("DockFft", "50 fps", nullptr));
        fftRateComboBox->setItemText(2, QApplication::translate("DockFft", "30 fps", nullptr));
        fftRateComboBox->setItemText(3, QApplication::translate("DockFft", "25 fps", nullptr));
        fftRateComboBox->setItemText(4, QApplication::translate("DockFft", "20 fps", nullptr));
        fftRateComboBox->setItemText(5, QApplication::translate("DockFft", "17 fps", nullptr));
        fftRateComboBox->setItemText(6, QApplication::translate("DockFft", "15 fps", nullptr));
        fftRateComboBox->setItemText(7, QApplication::translate("DockFft", "10 fps", nullptr));
        fftRateComboBox->setItemText(8, QApplication::translate("DockFft", "5 fps", nullptr));
        fftRateComboBox->setItemText(9, QApplication::translate("DockFft", "1 fps", nullptr));
        fftRateComboBox->setItemText(10, QApplication::translate("DockFft", "0 fps", nullptr));

#ifndef QT_NO_TOOLTIP
        fftRateComboBox->setToolTip(QApplication::translate("DockFft", "FFT refresh rate", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fftOvrLabel->setToolTip(QApplication::translate("DockFft", "FFT buffer overlap between two consecutive FFT calculations.", nullptr));
#endif // QT_NO_TOOLTIP
        fftOvrLabel->setText(QApplication::translate("DockFft", "Overlap: 0%", nullptr));
        pandLabel->setText(QApplication::translate("DockFft", "Panadapter", nullptr));
#ifndef QT_NO_TOOLTIP
        fftSplitSlider->setToolTip(QApplication::translate("DockFft", "Spatial distribution between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_19->setToolTip(QApplication::translate("DockFft", "The vertical time span on the waterfall.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_19->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        label_19->setText(QApplication::translate("DockFft", "Time span", nullptr));
        wfSpanComboBox->setItemText(0, QApplication::translate("DockFft", "Auto", nullptr));
        wfSpanComboBox->setItemText(1, QApplication::translate("DockFft", "1 min", nullptr));
        wfSpanComboBox->setItemText(2, QApplication::translate("DockFft", "2 min", nullptr));
        wfSpanComboBox->setItemText(3, QApplication::translate("DockFft", "5 min", nullptr));
        wfSpanComboBox->setItemText(4, QApplication::translate("DockFft", "10 min", nullptr));
        wfSpanComboBox->setItemText(5, QApplication::translate("DockFft", "15 min", nullptr));
        wfSpanComboBox->setItemText(6, QApplication::translate("DockFft", "20 min", nullptr));
        wfSpanComboBox->setItemText(7, QApplication::translate("DockFft", "30 min", nullptr));
        wfSpanComboBox->setItemText(8, QApplication::translate("DockFft", "1 hour", nullptr));
        wfSpanComboBox->setItemText(9, QApplication::translate("DockFft", "2 hours", nullptr));
        wfSpanComboBox->setItemText(10, QApplication::translate("DockFft", "5 hours", nullptr));
        wfSpanComboBox->setItemText(11, QApplication::translate("DockFft", "10 hours", nullptr));
        wfSpanComboBox->setItemText(12, QApplication::translate("DockFft", "16 hours", nullptr));
        wfSpanComboBox->setItemText(13, QApplication::translate("DockFft", "24 hours", nullptr));
        wfSpanComboBox->setItemText(14, QApplication::translate("DockFft", "48 hours", nullptr));

#ifndef QT_NO_TOOLTIP
        wfSpanComboBox->setToolTip(QApplication::translate("DockFft", "The vertical time span on the waterfall.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        wfResLabel->setToolTip(QApplication::translate("DockFft", "Waterfall time resolution.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        wfResLabel->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        wfResLabel->setText(QApplication::translate("DockFft", "Res: - s", nullptr));
#ifndef QT_NO_TOOLTIP
        zoomLAbel->setToolTip(QApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        zoomLAbel->setStatusTip(QApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_NO_STATUSTIP
        zoomLAbel->setText(QApplication::translate("DockFft", "Freq zoom", nullptr));
#ifndef QT_NO_TOOLTIP
        fftZoomSlider->setToolTip(QApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        fftZoomSlider->setStatusTip(QApplication::translate("DockFft", "Set zoom level on the frequency axis", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        zoomLevelLabel->setToolTip(QApplication::translate("DockFft", "Current zoom level on the frequency axis", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        zoomLevelLabel->setStatusTip(QApplication::translate("DockFft", "Current zoom level on the frequency axis", nullptr));
#endif // QT_NO_STATUSTIP
        zoomLevelLabel->setText(QApplication::translate("DockFft", "1x", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_view), QApplication::translate("DockFft", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockFft: public Ui_DockFft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKFFT_H
