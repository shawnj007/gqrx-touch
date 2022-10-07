/********************************************************************************
** Form generated from reading UI file 'dockrxopt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKRXOPT_H
#define UI_DOCKRXOPT_H

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
#include "qtgui/freqctrl.h"

QT_BEGIN_NAMESPACE

class Ui_DockRxOpt
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame_recv;
    QGridLayout *gridLayout;
    QComboBox *filterCombo;
    QPushButton *resetSquelchButton;
    QLabel *sqlLabel;
    QPushButton *autoSquelchButton;
    QLabel *label_10;
    QLabel *demodLabel;
    QComboBox *agcPresetCombo;
    QPushButton *nb2Button;
    QComboBox *modeSelector;
    QPushButton *nb1Button;
    QComboBox *filterShapeCombo;
    QPushButton *agcButton;
    QPushButton *nbOptButton;
    QLabel *filterShapeLabel;
    QLabel *rxFreqLabel;
    QDoubleSpinBox *nb1Threshold;
    QLabel *label_11;
    QLabel *filterLabel;
    QDoubleSpinBox *sqlSpinBox;
    QPushButton *modeButton;
    QLabel *agcLabel;
    QDoubleSpinBox *nb2Threshold;
    QDoubleSpinBox *freqSpinBox;
    CFreqCtrl *filterFreq;
    QLabel *rxOffset;
    QLabel *hwFreq;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDockWidget *DockRxOpt)
    {
        if (DockRxOpt->objectName().isEmpty())
            DockRxOpt->setObjectName(QString::fromUtf8("DockRxOpt"));
        DockRxOpt->resize(500, 140);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockRxOpt->sizePolicy().hasHeightForWidth());
        DockRxOpt->setSizePolicy(sizePolicy);
        DockRxOpt->setMinimumSize(QSize(500, 140));
        DockRxOpt->setMaximumSize(QSize(524287, 360));
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
        DockRxOpt->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/signal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DockRxOpt->setWindowIcon(icon);
        DockRxOpt->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockRxOpt->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        dockWidgetContents->setMinimumSize(QSize(500, 100));
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
        frame_recv = new QFrame(dockWidgetContents);
        frame_recv->setObjectName(QString::fromUtf8("frame_recv"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(frame_recv->sizePolicy().hasHeightForWidth());
        frame_recv->setSizePolicy(sizePolicy2);
        frame_recv->setMinimumSize(QSize(400, 100));
        frame_recv->setMaximumSize(QSize(16777215, 240));
        gridLayout = new QGridLayout(frame_recv);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 2);
        filterCombo = new QComboBox(frame_recv);
        filterCombo->addItem(QString());
        filterCombo->addItem(QString());
        filterCombo->addItem(QString());
        filterCombo->addItem(QString());
        filterCombo->setObjectName(QString::fromUtf8("filterCombo"));
        filterCombo->setEnabled(true);
        sizePolicy1.setHeightForWidth(filterCombo->sizePolicy().hasHeightForWidth());
        filterCombo->setSizePolicy(sizePolicy1);
        filterCombo->setMinimumSize(QSize(0, 25));
        filterCombo->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(filterCombo, 2, 1, 1, 1);

        resetSquelchButton = new QPushButton(frame_recv);
        resetSquelchButton->setObjectName(QString::fromUtf8("resetSquelchButton"));
        sizePolicy1.setHeightForWidth(resetSquelchButton->sizePolicy().hasHeightForWidth());
        resetSquelchButton->setSizePolicy(sizePolicy1);
        resetSquelchButton->setMinimumSize(QSize(0, 25));
        resetSquelchButton->setMaximumSize(QSize(16777215, 100));
        resetSquelchButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(resetSquelchButton, 2, 5, 1, 1);

        sqlLabel = new QLabel(frame_recv);
        sqlLabel->setObjectName(QString::fromUtf8("sqlLabel"));
        sizePolicy1.setHeightForWidth(sqlLabel->sizePolicy().hasHeightForWidth());
        sqlLabel->setSizePolicy(sizePolicy1);
        sqlLabel->setMinimumSize(QSize(0, 25));
        sqlLabel->setMaximumSize(QSize(16777215, 100));
        sqlLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(sqlLabel, 2, 2, 1, 1);

        autoSquelchButton = new QPushButton(frame_recv);
        autoSquelchButton->setObjectName(QString::fromUtf8("autoSquelchButton"));
        sizePolicy1.setHeightForWidth(autoSquelchButton->sizePolicy().hasHeightForWidth());
        autoSquelchButton->setSizePolicy(sizePolicy1);
        autoSquelchButton->setMinimumSize(QSize(0, 25));
        autoSquelchButton->setMaximumSize(QSize(16777215, 100));
        autoSquelchButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(autoSquelchButton, 2, 4, 1, 1);

        label_10 = new QLabel(frame_recv);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(0, 25));
        label_10->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setPointSize(7);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 3, 2, 1, 1);

        demodLabel = new QLabel(frame_recv);
        demodLabel->setObjectName(QString::fromUtf8("demodLabel"));
        sizePolicy1.setHeightForWidth(demodLabel->sizePolicy().hasHeightForWidth());
        demodLabel->setSizePolicy(sizePolicy1);
        demodLabel->setMinimumSize(QSize(0, 25));
        demodLabel->setMaximumSize(QSize(16777215, 100));
        demodLabel->setLayoutDirection(Qt::LeftToRight);
        demodLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        demodLabel->setMargin(0);
        demodLabel->setIndent(-1);

        gridLayout->addWidget(demodLabel, 4, 0, 1, 1);

        agcPresetCombo = new QComboBox(frame_recv);
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->addItem(QString());
        agcPresetCombo->setObjectName(QString::fromUtf8("agcPresetCombo"));
        agcPresetCombo->setEnabled(true);
        sizePolicy1.setHeightForWidth(agcPresetCombo->sizePolicy().hasHeightForWidth());
        agcPresetCombo->setSizePolicy(sizePolicy1);
        agcPresetCombo->setMinimumSize(QSize(0, 25));
        agcPresetCombo->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(agcPresetCombo, 1, 4, 1, 1);

        nb2Button = new QPushButton(frame_recv);
        nb2Button->setObjectName(QString::fromUtf8("nb2Button"));
        nb2Button->setEnabled(true);
        sizePolicy1.setHeightForWidth(nb2Button->sizePolicy().hasHeightForWidth());
        nb2Button->setSizePolicy(sizePolicy1);
        nb2Button->setMinimumSize(QSize(0, 25));
        nb2Button->setMaximumSize(QSize(16777215, 100));
        nb2Button->setCheckable(true);

        gridLayout->addWidget(nb2Button, 3, 5, 1, 1);

        modeSelector = new QComboBox(frame_recv);
        modeSelector->setObjectName(QString::fromUtf8("modeSelector"));
        sizePolicy1.setHeightForWidth(modeSelector->sizePolicy().hasHeightForWidth());
        modeSelector->setSizePolicy(sizePolicy1);
        modeSelector->setMinimumSize(QSize(0, 25));
        modeSelector->setMaximumSize(QSize(16777215, 100));
        modeSelector->setMaxVisibleItems(30);

        gridLayout->addWidget(modeSelector, 4, 1, 1, 1);

        nb1Button = new QPushButton(frame_recv);
        nb1Button->setObjectName(QString::fromUtf8("nb1Button"));
        nb1Button->setEnabled(true);
        sizePolicy1.setHeightForWidth(nb1Button->sizePolicy().hasHeightForWidth());
        nb1Button->setSizePolicy(sizePolicy1);
        nb1Button->setMinimumSize(QSize(0, 25));
        nb1Button->setMaximumSize(QSize(16777215, 100));
        nb1Button->setCheckable(true);

        gridLayout->addWidget(nb1Button, 3, 4, 1, 1);

        filterShapeCombo = new QComboBox(frame_recv);
        filterShapeCombo->addItem(QString());
        filterShapeCombo->addItem(QString());
        filterShapeCombo->addItem(QString());
        filterShapeCombo->setObjectName(QString::fromUtf8("filterShapeCombo"));
        sizePolicy1.setHeightForWidth(filterShapeCombo->sizePolicy().hasHeightForWidth());
        filterShapeCombo->setSizePolicy(sizePolicy1);
        filterShapeCombo->setMinimumSize(QSize(0, 25));
        filterShapeCombo->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(filterShapeCombo, 3, 1, 1, 1);

        agcButton = new QPushButton(frame_recv);
        agcButton->setObjectName(QString::fromUtf8("agcButton"));
        sizePolicy1.setHeightForWidth(agcButton->sizePolicy().hasHeightForWidth());
        agcButton->setSizePolicy(sizePolicy1);
        agcButton->setMinimumSize(QSize(0, 25));
        agcButton->setMaximumSize(QSize(16777215, 100));
        agcButton->setIconSize(QSize(16, 16));
        agcButton->setChecked(false);

        gridLayout->addWidget(agcButton, 1, 5, 1, 1);

        nbOptButton = new QPushButton(frame_recv);
        nbOptButton->setObjectName(QString::fromUtf8("nbOptButton"));
        sizePolicy1.setHeightForWidth(nbOptButton->sizePolicy().hasHeightForWidth());
        nbOptButton->setSizePolicy(sizePolicy1);
        nbOptButton->setMinimumSize(QSize(0, 25));
        nbOptButton->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(nbOptButton, 3, 3, 1, 1);

        filterShapeLabel = new QLabel(frame_recv);
        filterShapeLabel->setObjectName(QString::fromUtf8("filterShapeLabel"));
        sizePolicy1.setHeightForWidth(filterShapeLabel->sizePolicy().hasHeightForWidth());
        filterShapeLabel->setSizePolicy(sizePolicy1);
        filterShapeLabel->setMinimumSize(QSize(0, 25));
        filterShapeLabel->setMaximumSize(QSize(16777215, 100));
        filterShapeLabel->setLayoutDirection(Qt::LeftToRight);
        filterShapeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(filterShapeLabel, 3, 0, 1, 1);

        rxFreqLabel = new QLabel(frame_recv);
        rxFreqLabel->setObjectName(QString::fromUtf8("rxFreqLabel"));
        sizePolicy1.setHeightForWidth(rxFreqLabel->sizePolicy().hasHeightForWidth());
        rxFreqLabel->setSizePolicy(sizePolicy1);
        rxFreqLabel->setMinimumSize(QSize(0, 25));
        rxFreqLabel->setMaximumSize(QSize(16777215, 100));
        rxFreqLabel->setLayoutDirection(Qt::LeftToRight);
        rxFreqLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rxFreqLabel, 0, 0, 1, 1);

        nb1Threshold = new QDoubleSpinBox(frame_recv);
        nb1Threshold->setObjectName(QString::fromUtf8("nb1Threshold"));
        sizePolicy1.setHeightForWidth(nb1Threshold->sizePolicy().hasHeightForWidth());
        nb1Threshold->setSizePolicy(sizePolicy1);
        nb1Threshold->setMinimumSize(QSize(0, 25));
        nb1Threshold->setMaximumSize(QSize(16777215, 100));
        nb1Threshold->setDecimals(1);
        nb1Threshold->setMinimum(1.000000000000000);
        nb1Threshold->setMaximum(20.000000000000000);
        nb1Threshold->setSingleStep(0.100000000000000);
        nb1Threshold->setValue(3.300000000000000);

        gridLayout->addWidget(nb1Threshold, 4, 4, 1, 1);

        label_11 = new QLabel(frame_recv);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(0, 25));
        label_11->setMaximumSize(QSize(16777215, 100));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        filterLabel = new QLabel(frame_recv);
        filterLabel->setObjectName(QString::fromUtf8("filterLabel"));
        sizePolicy1.setHeightForWidth(filterLabel->sizePolicy().hasHeightForWidth());
        filterLabel->setSizePolicy(sizePolicy1);
        filterLabel->setMinimumSize(QSize(0, 25));
        filterLabel->setMaximumSize(QSize(16777215, 100));
        filterLabel->setLayoutDirection(Qt::LeftToRight);
        filterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(filterLabel, 2, 0, 1, 1);

        sqlSpinBox = new QDoubleSpinBox(frame_recv);
        sqlSpinBox->setObjectName(QString::fromUtf8("sqlSpinBox"));
        sizePolicy1.setHeightForWidth(sqlSpinBox->sizePolicy().hasHeightForWidth());
        sqlSpinBox->setSizePolicy(sizePolicy1);
        sqlSpinBox->setMinimumSize(QSize(0, 25));
        sqlSpinBox->setMaximumSize(QSize(16777215, 100));
        sqlSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sqlSpinBox->setAccelerated(true);
        sqlSpinBox->setDecimals(1);
        sqlSpinBox->setMinimum(-150.000000000000000);
        sqlSpinBox->setMaximum(0.000000000000000);
        sqlSpinBox->setSingleStep(1.000000000000000);
        sqlSpinBox->setValue(-150.000000000000000);

        gridLayout->addWidget(sqlSpinBox, 2, 3, 1, 1);

        modeButton = new QPushButton(frame_recv);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        sizePolicy1.setHeightForWidth(modeButton->sizePolicy().hasHeightForWidth());
        modeButton->setSizePolicy(sizePolicy1);
        modeButton->setMinimumSize(QSize(0, 25));
        modeButton->setMaximumSize(QSize(16777215, 100));
        modeButton->setIconSize(QSize(16, 16));
        modeButton->setChecked(false);

        gridLayout->addWidget(modeButton, 4, 3, 1, 1);

        agcLabel = new QLabel(frame_recv);
        agcLabel->setObjectName(QString::fromUtf8("agcLabel"));
        sizePolicy1.setHeightForWidth(agcLabel->sizePolicy().hasHeightForWidth());
        agcLabel->setSizePolicy(sizePolicy1);
        agcLabel->setMinimumSize(QSize(0, 25));
        agcLabel->setMaximumSize(QSize(16777215, 100));
        agcLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(agcLabel, 1, 3, 1, 1);

        nb2Threshold = new QDoubleSpinBox(frame_recv);
        nb2Threshold->setObjectName(QString::fromUtf8("nb2Threshold"));
        sizePolicy1.setHeightForWidth(nb2Threshold->sizePolicy().hasHeightForWidth());
        nb2Threshold->setSizePolicy(sizePolicy1);
        nb2Threshold->setMinimumSize(QSize(0, 25));
        nb2Threshold->setMaximumSize(QSize(16777215, 100));
        nb2Threshold->setDecimals(1);
        nb2Threshold->setMaximum(15.000000000000000);
        nb2Threshold->setSingleStep(0.100000000000000);
        nb2Threshold->setValue(2.500000000000000);

        gridLayout->addWidget(nb2Threshold, 4, 5, 1, 1);

        freqSpinBox = new QDoubleSpinBox(frame_recv);
        freqSpinBox->setObjectName(QString::fromUtf8("freqSpinBox"));
        sizePolicy1.setHeightForWidth(freqSpinBox->sizePolicy().hasHeightForWidth());
        freqSpinBox->setSizePolicy(sizePolicy1);
        freqSpinBox->setMinimumSize(QSize(0, 25));
        freqSpinBox->setMaximumSize(QSize(16777215, 100));
        freqSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        freqSpinBox->setDecimals(3);
        freqSpinBox->setMinimum(24000.000000000000000);
        freqSpinBox->setMaximum(2200000.000000000000000);
        freqSpinBox->setValue(144500.000000000000000);

        gridLayout->addWidget(freqSpinBox, 1, 1, 1, 2);

        filterFreq = new CFreqCtrl(frame_recv);
        filterFreq->setObjectName(QString::fromUtf8("filterFreq"));
        sizePolicy1.setHeightForWidth(filterFreq->sizePolicy().hasHeightForWidth());
        filterFreq->setSizePolicy(sizePolicy1);
        filterFreq->setMinimumSize(QSize(0, 25));
        filterFreq->setMaximumSize(QSize(400, 100));
        filterFreq->setLayoutDirection(Qt::LeftToRight);
        filterFreq->setFrameShape(QFrame::StyledPanel);
        filterFreq->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(filterFreq, 0, 4, 1, 2);

        rxOffset = new QLabel(frame_recv);
        rxOffset->setObjectName(QString::fromUtf8("rxOffset"));
        sizePolicy1.setHeightForWidth(rxOffset->sizePolicy().hasHeightForWidth());
        rxOffset->setSizePolicy(sizePolicy1);
        rxOffset->setMinimumSize(QSize(0, 25));
        rxOffset->setMaximumSize(QSize(16777215, 100));
        rxOffset->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(rxOffset, 0, 3, 1, 1);

        hwFreq = new QLabel(frame_recv);
        hwFreq->setObjectName(QString::fromUtf8("hwFreq"));
        sizePolicy1.setHeightForWidth(hwFreq->sizePolicy().hasHeightForWidth());
        hwFreq->setSizePolicy(sizePolicy1);
        hwFreq->setMinimumSize(QSize(0, 25));
        hwFreq->setMaximumSize(QSize(16777215, 100));
        hwFreq->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(hwFreq, 0, 1, 1, 2);


        verticalLayout->addWidget(frame_recv);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        DockRxOpt->setWidget(dockWidgetContents);

        retranslateUi(DockRxOpt);

        filterCombo->setCurrentIndex(1);
        agcPresetCombo->setCurrentIndex(1);
        modeSelector->setCurrentIndex(-1);
        filterShapeCombo->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DockRxOpt);
    } // setupUi

    void retranslateUi(QDockWidget *DockRxOpt)
    {
        DockRxOpt->setWindowTitle(QApplication::translate("DockRxOpt", "Receiver Options", nullptr));
        filterCombo->setItemText(0, QApplication::translate("DockRxOpt", "Wide", nullptr));
        filterCombo->setItemText(1, QApplication::translate("DockRxOpt", "Normal", nullptr));
        filterCombo->setItemText(2, QApplication::translate("DockRxOpt", "Narrow", nullptr));
        filterCombo->setItemText(3, QApplication::translate("DockRxOpt", "User", nullptr));

#ifndef QT_NO_TOOLTIP
        filterCombo->setToolTip(QApplication::translate("DockRxOpt", "Apply mode dependent filter preset", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        filterCombo->setAccessibleName(QApplication::translate("DockRxOpt", "Filter width", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        resetSquelchButton->setToolTip(QApplication::translate("DockRxOpt", "Reset squelch to its default value", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        resetSquelchButton->setAccessibleName(QApplication::translate("DockRxOpt", "Auto squelch", nullptr));
#endif // QT_NO_ACCESSIBILITY
        resetSquelchButton->setText(QApplication::translate("DockRxOpt", "R", nullptr));
#ifndef QT_NO_TOOLTIP
        sqlLabel->setToolTip(QApplication::translate("DockRxOpt", "Squelch level in dB below full scale", nullptr));
#endif // QT_NO_TOOLTIP
        sqlLabel->setText(QApplication::translate("DockRxOpt", "Squelch", nullptr));
#ifndef QT_NO_TOOLTIP
        autoSquelchButton->setToolTip(QApplication::translate("DockRxOpt", "Set squelch to the current signal or noise level", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        autoSquelchButton->setAccessibleName(QApplication::translate("DockRxOpt", "Auto squelch", nullptr));
#endif // QT_NO_ACCESSIBILITY
        autoSquelchButton->setText(QApplication::translate("DockRxOpt", "A", nullptr));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker settings", nullptr));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("DockRxOpt", "Noise blanker", nullptr));
        demodLabel->setText(QApplication::translate("DockRxOpt", "Mode", nullptr));
        agcPresetCombo->setItemText(0, QApplication::translate("DockRxOpt", "Fast", nullptr));
        agcPresetCombo->setItemText(1, QApplication::translate("DockRxOpt", "Medium", nullptr));
        agcPresetCombo->setItemText(2, QApplication::translate("DockRxOpt", "Slow", nullptr));
        agcPresetCombo->setItemText(3, QApplication::translate("DockRxOpt", "User", nullptr));
        agcPresetCombo->setItemText(4, QApplication::translate("DockRxOpt", "Off", nullptr));

#ifndef QT_NO_TOOLTIP
        agcPresetCombo->setToolTip(QApplication::translate("DockRxOpt", "AGC presets", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        agcPresetCombo->setAccessibleName(QApplication::translate("DockRxOpt", "AGC", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        nb2Button->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker for pulse type noise", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nb2Button->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        nb2Button->setAccessibleName(QApplication::translate("DockRxOpt", "Noise blanker 2", nullptr));
#endif // QT_NO_ACCESSIBILITY
        nb2Button->setText(QApplication::translate("DockRxOpt", "NB2", nullptr));
#ifndef QT_NO_TOOLTIP
        modeSelector->setToolTip(QApplication::translate("DockRxOpt", "Demodulator type (mode)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        modeSelector->setStatusTip(QApplication::translate("DockRxOpt", "Demodulator type (mode)", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        modeSelector->setAccessibleName(QApplication::translate("DockRxOpt", "Mode", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        nb1Button->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker for static type noise", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nb1Button->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        nb1Button->setAccessibleName(QApplication::translate("DockRxOpt", "Noise blanker 1", nullptr));
#endif // QT_NO_ACCESSIBILITY
        nb1Button->setText(QApplication::translate("DockRxOpt", "NB1", nullptr));
        filterShapeCombo->setItemText(0, QApplication::translate("DockRxOpt", "Soft", nullptr));
        filterShapeCombo->setItemText(1, QApplication::translate("DockRxOpt", "Normal", nullptr));
        filterShapeCombo->setItemText(2, QApplication::translate("DockRxOpt", "Sharp", nullptr));

#ifndef QT_NO_TOOLTIP
        filterShapeCombo->setToolTip(QApplication::translate("DockRxOpt", "Select the filter shape", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        filterShapeCombo->setAccessibleName(QApplication::translate("DockRxOpt", "Filter shape", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        agcButton->setToolTip(QApplication::translate("DockRxOpt", "AGC options", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        agcButton->setAccessibleName(QApplication::translate("DockRxOpt", "AGC options", nullptr));
#endif // QT_NO_ACCESSIBILITY
        agcButton->setText(QApplication::translate("DockRxOpt", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        nbOptButton->setToolTip(QApplication::translate("DockRxOpt", "Noise blanker options", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nbOptButton->setWhatsThis(QApplication::translate("DockRxOpt", "Noise blanker options", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        nbOptButton->setAccessibleName(QApplication::translate("DockRxOpt", "Noise blanker options", nullptr));
#endif // QT_NO_ACCESSIBILITY
        nbOptButton->setText(QApplication::translate("DockRxOpt", "...", nullptr));
        filterShapeLabel->setText(QApplication::translate("DockRxOpt", "Shape", nullptr));
#ifndef QT_NO_TOOLTIP
        rxFreqLabel->setToolTip(QApplication::translate("DockRxOpt", "The frequency of the hardware (not including LNB)", nullptr));
#endif // QT_NO_TOOLTIP
        rxFreqLabel->setText(QApplication::translate("DockRxOpt", "HW freq:", nullptr));
        label_11->setText(QApplication::translate("DockRxOpt", "Freq (kHz)", nullptr));
        filterLabel->setText(QApplication::translate("DockRxOpt", "Width", nullptr));
#ifndef QT_NO_TOOLTIP
        sqlSpinBox->setToolTip(QApplication::translate("DockRxOpt", "Squelch level in dB below full scale", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        sqlSpinBox->setAccessibleName(QApplication::translate("DockRxOpt", "Squelch", nullptr));
#endif // QT_NO_ACCESSIBILITY
        sqlSpinBox->setSuffix(QApplication::translate("DockRxOpt", " dB", nullptr));
#ifndef QT_NO_TOOLTIP
        modeButton->setToolTip(QApplication::translate("DockRxOpt", "Demodulator options", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        modeButton->setAccessibleName(QApplication::translate("DockRxOpt", "Mode options", nullptr));
#endif // QT_NO_ACCESSIBILITY
        modeButton->setText(QApplication::translate("DockRxOpt", "...", nullptr));
        agcLabel->setText(QApplication::translate("DockRxOpt", "AGC", nullptr));
#ifndef QT_NO_TOOLTIP
        freqSpinBox->setToolTip(QApplication::translate("DockRxOpt", "Receiver frequency", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        freqSpinBox->setAccessibleName(QApplication::translate("DockRxOpt", "Frequency", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        filterFreq->setToolTip(QApplication::translate("DockRxOpt", "<html><head/><body><p>Channel filter offset.<br/>\n"
"This is an offset from the hardware RF frequency.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        rxOffset->setToolTip(QApplication::translate("DockRxOpt", "The frequency of the hardware (not including LNB)", nullptr));
#endif // QT_NO_TOOLTIP
        rxOffset->setText(QApplication::translate("DockRxOpt", "Offset:", nullptr));
#ifndef QT_NO_TOOLTIP
        hwFreq->setToolTip(QApplication::translate("DockRxOpt", "The frequency of the hardware (not including LNB)", nullptr));
#endif // QT_NO_TOOLTIP
        hwFreq->setText(QApplication::translate("DockRxOpt", "144.500000 MHz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockRxOpt: public Ui_DockRxOpt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKRXOPT_H
