/********************************************************************************
** Form generated from reading UI file 'dockinputctl.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKINPUTCTL_H
#define UI_DOCKINPUTCTL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockInputCtl
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame_input;
    QGridLayout *gridLayout_7;
    QPushButton *iqSwapButton;
    QComboBox *antSelector;
    QPushButton *freqCtrlResetButton;
    QDoubleSpinBox *freqCorrSpinBox;
    QDoubleSpinBox *lnbSpinBox;
    QPushButton *agcButton;
    QPushButton *dcCancelButton;
    QLabel *freqCorrLabel;
    QPushButton *ignoreButton;
    QLabel *lnbLabel;
    QPushButton *iqBalanceButton;
    QPushButton *invertScrollingButton;
    QLabel *antSelectorLabel;
    QPushButton *dcBlockButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *DockInputCtl)
    {
        if (DockInputCtl->objectName().isEmpty())
            DockInputCtl->setObjectName(QString::fromUtf8("DockInputCtl"));
        DockInputCtl->resize(500, 159);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockInputCtl->sizePolicy().hasHeightForWidth());
        DockInputCtl->setSizePolicy(sizePolicy);
        DockInputCtl->setMinimumSize(QSize(500, 100));
        DockInputCtl->setMaximumSize(QSize(524287, 360));
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
        DockInputCtl->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/flash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockInputCtl->setWindowIcon(icon);
        DockInputCtl->setFloating(false);
        DockInputCtl->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockInputCtl->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidgetContents->setMinimumSize(QSize(500, 81));
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
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_input = new QFrame(dockWidgetContents);
        frame_input->setObjectName(QString::fromUtf8("frame_input"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_input->sizePolicy().hasHeightForWidth());
        frame_input->setSizePolicy(sizePolicy1);
        frame_input->setMinimumSize(QSize(500, 78));
        frame_input->setMaximumSize(QSize(16777215, 240));
        gridLayout_7 = new QGridLayout(frame_input);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        iqSwapButton = new QPushButton(frame_input);
        iqSwapButton->setObjectName(QString::fromUtf8("iqSwapButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(iqSwapButton->sizePolicy().hasHeightForWidth());
        iqSwapButton->setSizePolicy(sizePolicy2);
        iqSwapButton->setMinimumSize(QSize(0, 25));
        iqSwapButton->setMaximumSize(QSize(16777215, 100));
        iqSwapButton->setCheckable(true);

        gridLayout_7->addWidget(iqSwapButton, 2, 4, 1, 1);

        antSelector = new QComboBox(frame_input);
        antSelector->setObjectName(QString::fromUtf8("antSelector"));
        sizePolicy2.setHeightForWidth(antSelector->sizePolicy().hasHeightForWidth());
        antSelector->setSizePolicy(sizePolicy2);
        antSelector->setMinimumSize(QSize(0, 25));
        antSelector->setMaximumSize(QSize(16777215, 100));

        gridLayout_7->addWidget(antSelector, 1, 3, 1, 1);

        freqCtrlResetButton = new QPushButton(frame_input);
        freqCtrlResetButton->setObjectName(QString::fromUtf8("freqCtrlResetButton"));
        sizePolicy2.setHeightForWidth(freqCtrlResetButton->sizePolicy().hasHeightForWidth());
        freqCtrlResetButton->setSizePolicy(sizePolicy2);
        freqCtrlResetButton->setMinimumSize(QSize(0, 25));
        freqCtrlResetButton->setMaximumSize(QSize(16777215, 100));
        freqCtrlResetButton->setCheckable(true);

        gridLayout_7->addWidget(freqCtrlResetButton, 2, 0, 1, 1);

        freqCorrSpinBox = new QDoubleSpinBox(frame_input);
        freqCorrSpinBox->setObjectName(QString::fromUtf8("freqCorrSpinBox"));
        sizePolicy2.setHeightForWidth(freqCorrSpinBox->sizePolicy().hasHeightForWidth());
        freqCorrSpinBox->setSizePolicy(sizePolicy2);
        freqCorrSpinBox->setMinimumSize(QSize(0, 25));
        freqCorrSpinBox->setMaximumSize(QSize(16777215, 100));
        freqCorrSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        freqCorrSpinBox->setDecimals(1);
        freqCorrSpinBox->setMinimum(-500.000000000000000);
        freqCorrSpinBox->setMaximum(500.000000000000000);
        freqCorrSpinBox->setValue(0.000000000000000);

        gridLayout_7->addWidget(freqCorrSpinBox, 1, 2, 1, 1);

        lnbSpinBox = new QDoubleSpinBox(frame_input);
        lnbSpinBox->setObjectName(QString::fromUtf8("lnbSpinBox"));
        sizePolicy2.setHeightForWidth(lnbSpinBox->sizePolicy().hasHeightForWidth());
        lnbSpinBox->setSizePolicy(sizePolicy2);
        lnbSpinBox->setMinimumSize(QSize(0, 25));
        lnbSpinBox->setMaximumSize(QSize(16777215, 100));
        lnbSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lnbSpinBox->setDecimals(6);
        lnbSpinBox->setMinimum(-500000.000000000000000);
        lnbSpinBox->setMaximum(500000.000000000000000);

        gridLayout_7->addWidget(lnbSpinBox, 1, 0, 1, 2);

        agcButton = new QPushButton(frame_input);
        agcButton->setObjectName(QString::fromUtf8("agcButton"));
        sizePolicy2.setHeightForWidth(agcButton->sizePolicy().hasHeightForWidth());
        agcButton->setSizePolicy(sizePolicy2);
        agcButton->setMinimumSize(QSize(0, 25));
        agcButton->setMaximumSize(QSize(16777215, 100));
        agcButton->setCheckable(true);

        gridLayout_7->addWidget(agcButton, 2, 1, 1, 1);

        dcCancelButton = new QPushButton(frame_input);
        dcCancelButton->setObjectName(QString::fromUtf8("dcCancelButton"));
        sizePolicy2.setHeightForWidth(dcCancelButton->sizePolicy().hasHeightForWidth());
        dcCancelButton->setSizePolicy(sizePolicy2);
        dcCancelButton->setMinimumSize(QSize(0, 25));
        dcCancelButton->setMaximumSize(QSize(16777215, 100));
        dcCancelButton->setCheckable(true);

        gridLayout_7->addWidget(dcCancelButton, 2, 3, 1, 1);

        freqCorrLabel = new QLabel(frame_input);
        freqCorrLabel->setObjectName(QString::fromUtf8("freqCorrLabel"));
        sizePolicy2.setHeightForWidth(freqCorrLabel->sizePolicy().hasHeightForWidth());
        freqCorrLabel->setSizePolicy(sizePolicy2);
        freqCorrLabel->setMinimumSize(QSize(0, 25));
        freqCorrLabel->setMaximumSize(QSize(16777215, 100));
        freqCorrLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(freqCorrLabel, 0, 2, 1, 1);

        ignoreButton = new QPushButton(frame_input);
        ignoreButton->setObjectName(QString::fromUtf8("ignoreButton"));
        sizePolicy2.setHeightForWidth(ignoreButton->sizePolicy().hasHeightForWidth());
        ignoreButton->setSizePolicy(sizePolicy2);
        ignoreButton->setMinimumSize(QSize(0, 25));
        ignoreButton->setMaximumSize(QSize(16777215, 100));
        ignoreButton->setCheckable(true);

        gridLayout_7->addWidget(ignoreButton, 2, 2, 1, 1);

        lnbLabel = new QLabel(frame_input);
        lnbLabel->setObjectName(QString::fromUtf8("lnbLabel"));
        sizePolicy2.setHeightForWidth(lnbLabel->sizePolicy().hasHeightForWidth());
        lnbLabel->setSizePolicy(sizePolicy2);
        lnbLabel->setMinimumSize(QSize(0, 25));
        lnbLabel->setMaximumSize(QSize(16777215, 100));
        lnbLabel->setAlignment(Qt::AlignCenter);
        lnbLabel->setIndent(-1);

        gridLayout_7->addWidget(lnbLabel, 0, 0, 1, 2);

        iqBalanceButton = new QPushButton(frame_input);
        iqBalanceButton->setObjectName(QString::fromUtf8("iqBalanceButton"));
        sizePolicy2.setHeightForWidth(iqBalanceButton->sizePolicy().hasHeightForWidth());
        iqBalanceButton->setSizePolicy(sizePolicy2);
        iqBalanceButton->setMinimumSize(QSize(0, 25));
        iqBalanceButton->setMaximumSize(QSize(16777215, 100));
        iqBalanceButton->setCheckable(true);

        gridLayout_7->addWidget(iqBalanceButton, 1, 4, 1, 1);

        invertScrollingButton = new QPushButton(frame_input);
        invertScrollingButton->setObjectName(QString::fromUtf8("invertScrollingButton"));
        sizePolicy2.setHeightForWidth(invertScrollingButton->sizePolicy().hasHeightForWidth());
        invertScrollingButton->setSizePolicy(sizePolicy2);
        invertScrollingButton->setMinimumSize(QSize(0, 25));
        invertScrollingButton->setMaximumSize(QSize(16777215, 100));
        invertScrollingButton->setCheckable(true);

        gridLayout_7->addWidget(invertScrollingButton, 0, 4, 1, 1);

        antSelectorLabel = new QLabel(frame_input);
        antSelectorLabel->setObjectName(QString::fromUtf8("antSelectorLabel"));
        sizePolicy2.setHeightForWidth(antSelectorLabel->sizePolicy().hasHeightForWidth());
        antSelectorLabel->setSizePolicy(sizePolicy2);
        antSelectorLabel->setMinimumSize(QSize(0, 25));
        antSelectorLabel->setMaximumSize(QSize(16777215, 100));
        antSelectorLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(antSelectorLabel, 0, 3, 1, 1);

        dcBlockButton = new QPushButton(frame_input);
        dcBlockButton->setObjectName(QString::fromUtf8("dcBlockButton"));
        sizePolicy2.setHeightForWidth(dcBlockButton->sizePolicy().hasHeightForWidth());
        dcBlockButton->setSizePolicy(sizePolicy2);
        dcBlockButton->setMinimumSize(QSize(0, 25));
        dcBlockButton->setMaximumSize(QSize(16777215, 100));
        dcBlockButton->setCheckable(true);

        gridLayout_7->addWidget(dcBlockButton, 3, 3, 1, 1);


        verticalLayout->addWidget(frame_input);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        DockInputCtl->setWidget(dockWidgetContents);

        retranslateUi(DockInputCtl);

        QMetaObject::connectSlotsByName(DockInputCtl);
    } // setupUi

    void retranslateUi(QDockWidget *DockInputCtl)
    {
        DockInputCtl->setWindowTitle(QApplication::translate("DockInputCtl", "Input controls", nullptr));
#ifndef QT_NO_TOOLTIP
        iqSwapButton->setToolTip(QApplication::translate("DockInputCtl", "<html><head/><body><p>Swap the the I/Q channels. This can be useful with audio-based input or when dealing with inverted IF.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        iqSwapButton->setText(QApplication::translate("DockInputCtl", "Swap I/Q", nullptr));
#ifndef QT_NO_TOOLTIP
        antSelector->setToolTip(QApplication::translate("DockInputCtl", "Select active antenna connector", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        freqCtrlResetButton->setToolTip(QApplication::translate("DockInputCtl", "<html><head/><body><p>Reset subordinate digits in main frequency control widget</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        freqCtrlResetButton->setText(QApplication::translate("DockInputCtl", "Reset FQ digits", nullptr));
        freqCorrSpinBox->setSuffix(QApplication::translate("DockInputCtl", " ppm", nullptr));
#ifndef QT_NO_TOOLTIP
        lnbSpinBox->setToolTip(QApplication::translate("DockInputCtl", "Local oscillator of up or down converter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lnbSpinBox->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lnbSpinBox->setSuffix(QApplication::translate("DockInputCtl", " MHz", nullptr));
#ifndef QT_NO_TOOLTIP
        agcButton->setToolTip(QApplication::translate("DockInputCtl", "<html><head/><body><p>Toggle hardware-based automatic gain control.</p><p>This feature requires hardware that supports it. It is known to work with RTL-SDR devices.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        agcButton->setText(QApplication::translate("DockInputCtl", "Hardware AGC", nullptr));
#ifndef QT_NO_TOOLTIP
        dcCancelButton->setToolTip(QApplication::translate("DockInputCtl", "Enable automatic DC removal", nullptr));
#endif // QT_NO_TOOLTIP
        dcCancelButton->setText(QApplication::translate("DockInputCtl", "DC remove", nullptr));
        freqCorrLabel->setText(QApplication::translate("DockInputCtl", "Freq. correction", nullptr));
#ifndef QT_NO_TOOLTIP
        ignoreButton->setToolTip(QApplication::translate("DockInputCtl", "<html><head/><body><p>Ignore hardware limits such as frequency range. This allows experimenting with out-of-spec settings.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ignoreButton->setText(QApplication::translate("DockInputCtl", "No limits", nullptr));
        lnbLabel->setText(QApplication::translate("DockInputCtl", "LNB LO", nullptr));
#ifndef QT_NO_TOOLTIP
        iqBalanceButton->setToolTip(QApplication::translate("DockInputCtl", "Enable automatic I/Q balance (requires gr-iqbal component)", nullptr));
#endif // QT_NO_TOOLTIP
        iqBalanceButton->setText(QApplication::translate("DockInputCtl", "IQ balance", nullptr));
        invertScrollingButton->setText(QApplication::translate("DockInputCtl", "Invert scroll", nullptr));
#ifndef QT_NO_TOOLTIP
        antSelectorLabel->setToolTip(QApplication::translate("DockInputCtl", "Select active antenna connector", nullptr));
#endif // QT_NO_TOOLTIP
        antSelectorLabel->setText(QApplication::translate("DockInputCtl", "Antenna", nullptr));
#ifndef QT_NO_TOOLTIP
        dcBlockButton->setToolTip(QApplication::translate("DockInputCtl", "Enable automatic DC removal", nullptr));
#endif // QT_NO_TOOLTIP
        dcBlockButton->setText(QApplication::translate("DockInputCtl", "DC block", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockInputCtl: public Ui_DockInputCtl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKINPUTCTL_H
