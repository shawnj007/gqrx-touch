/********************************************************************************
** Form generated from reading UI file 'audio_options.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIO_OPTIONS_H
#define UI_AUDIO_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
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

QT_BEGIN_NAMESPACE

class Ui_CAudioOptions
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab0;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fftSplitLabel1;
    QSlider *fftSplitSlider;
    QLabel *fftSplitLabel2;
    QFormLayout *formLayout;
    QLabel *pandRangeLabel;
    ctkRangeSlider *pandRangeSlider;
    QLabel *wfRangeLabel;
    ctkRangeSlider *wfRangeSlider;
    QPushButton *audioLockButton;
    QWidget *tab1;
    QVBoxLayout *verticalLayout_2;
    QLabel *recDirLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *recDirEdit;
    QPushButton *recDirButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *portLabel;
    QSpinBox *udpPort;
    QLineEdit *udpHost;
    QLabel *hostLabel;
    QCheckBox *udpStereo;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CAudioOptions)
    {
        if (CAudioOptions->objectName().isEmpty())
            CAudioOptions->setObjectName(QString::fromUtf8("CAudioOptions"));
        CAudioOptions->resize(315, 182);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/audio-card.svg"), QSize(), QIcon::Normal, QIcon::Off);
        CAudioOptions->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CAudioOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(CAudioOptions);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab0 = new QWidget();
        tab0->setObjectName(QString::fromUtf8("tab0"));
        verticalLayout_4 = new QVBoxLayout(tab0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fftSplitLabel1 = new QLabel(tab0);
        fftSplitLabel1->setObjectName(QString::fromUtf8("fftSplitLabel1"));

        horizontalLayout_2->addWidget(fftSplitLabel1);

        fftSplitSlider = new QSlider(tab0);
        fftSplitSlider->setObjectName(QString::fromUtf8("fftSplitSlider"));
        fftSplitSlider->setMinimum(0);
        fftSplitSlider->setMaximum(100);
        fftSplitSlider->setValue(100);
        fftSplitSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(fftSplitSlider);

        fftSplitLabel2 = new QLabel(tab0);
        fftSplitLabel2->setObjectName(QString::fromUtf8("fftSplitLabel2"));

        horizontalLayout_2->addWidget(fftSplitLabel2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pandRangeLabel = new QLabel(tab0);
        pandRangeLabel->setObjectName(QString::fromUtf8("pandRangeLabel"));
        pandRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, pandRangeLabel);

        pandRangeSlider = new ctkRangeSlider(tab0);
        pandRangeSlider->setObjectName(QString::fromUtf8("pandRangeSlider"));
        pandRangeSlider->setMinimum(-120);
        pandRangeSlider->setMaximum(0);
        pandRangeSlider->setValue(-80);
        pandRangeSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, pandRangeSlider);

        wfRangeLabel = new QLabel(tab0);
        wfRangeLabel->setObjectName(QString::fromUtf8("wfRangeLabel"));
        wfRangeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, wfRangeLabel);

        wfRangeSlider = new ctkRangeSlider(tab0);
        wfRangeSlider->setObjectName(QString::fromUtf8("wfRangeSlider"));
        wfRangeSlider->setMinimum(-120);
        wfRangeSlider->setMaximum(0);
        wfRangeSlider->setValue(-80);
        wfRangeSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, wfRangeSlider);

        audioLockButton = new QPushButton(tab0);
        audioLockButton->setObjectName(QString::fromUtf8("audioLockButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(audioLockButton->sizePolicy().hasHeightForWidth());
        audioLockButton->setSizePolicy(sizePolicy);
        audioLockButton->setCheckable(true);
        audioLockButton->setAutoDefault(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, audioLockButton);


        verticalLayout_4->addLayout(formLayout);

        tabWidget->addTab(tab0, QString());
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        verticalLayout_2 = new QVBoxLayout(tab1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        recDirLabel = new QLabel(tab1);
        recDirLabel->setObjectName(QString::fromUtf8("recDirLabel"));

        verticalLayout_2->addWidget(recDirLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        recDirEdit = new QLineEdit(tab1);
        recDirEdit->setObjectName(QString::fromUtf8("recDirEdit"));

        horizontalLayout->addWidget(recDirEdit);

        recDirButton = new QPushButton(tab1);
        recDirButton->setObjectName(QString::fromUtf8("recDirButton"));

        horizontalLayout->addWidget(recDirButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QString::fromUtf8("tab2"));
        verticalLayout_3 = new QVBoxLayout(tab2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        portLabel = new QLabel(tab2);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portLabel->sizePolicy().hasHeightForWidth());
        portLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(portLabel, 1, 0, 1, 1);

        udpPort = new QSpinBox(tab2);
        udpPort->setObjectName(QString::fromUtf8("udpPort"));
        udpPort->setMinimum(1);
        udpPort->setMaximum(65535);
        udpPort->setValue(7355);

        gridLayout->addWidget(udpPort, 1, 1, 1, 1);

        udpHost = new QLineEdit(tab2);
        udpHost->setObjectName(QString::fromUtf8("udpHost"));

        gridLayout->addWidget(udpHost, 0, 1, 1, 2);

        hostLabel = new QLabel(tab2);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));
        sizePolicy1.setHeightForWidth(hostLabel->sizePolicy().hasHeightForWidth());
        hostLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(hostLabel, 0, 0, 1, 1);

        udpStereo = new QCheckBox(tab2);
        udpStereo->setObjectName(QString::fromUtf8("udpStereo"));

        gridLayout->addWidget(udpStereo, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(CAudioOptions);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CAudioOptions);
    } // setupUi

    void retranslateUi(QDialog *CAudioOptions)
    {
        CAudioOptions->setWindowTitle(QApplication::translate("CAudioOptions", "Audio options", nullptr));
#ifndef QT_NO_TOOLTIP
        fftSplitLabel1->setToolTip(QApplication::translate("CAudioOptions", "Adjust split between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
        fftSplitLabel1->setText(QApplication::translate("CAudioOptions", "Pandapter", nullptr));
#ifndef QT_NO_TOOLTIP
        fftSplitSlider->setToolTip(QApplication::translate("CAudioOptions", "Adjust split between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fftSplitLabel2->setToolTip(QApplication::translate("CAudioOptions", "Adjust split between pandapter and waterfall", nullptr));
#endif // QT_NO_TOOLTIP
        fftSplitLabel2->setText(QApplication::translate("CAudioOptions", "Waterfall", nullptr));
#ifndef QT_NO_TOOLTIP
        pandRangeLabel->setToolTip(QApplication::translate("CAudioOptions", "Adjust dB range on the pandapter", nullptr));
#endif // QT_NO_TOOLTIP
        pandRangeLabel->setText(QApplication::translate("CAudioOptions", "Pandapter dB range", nullptr));
#ifndef QT_NO_TOOLTIP
        pandRangeSlider->setToolTip(QApplication::translate("CAudioOptions", "Adjust dB range on the pandapter", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        wfRangeLabel->setToolTip(QApplication::translate("CAudioOptions", "Adjust dB range on the waterfall", nullptr));
#endif // QT_NO_TOOLTIP
        wfRangeLabel->setText(QApplication::translate("CAudioOptions", "Waterfall dB range", nullptr));
#ifndef QT_NO_TOOLTIP
        wfRangeSlider->setToolTip(QApplication::translate("CAudioOptions", "Adjust dB range on the waterfall", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        audioLockButton->setToolTip(QApplication::translate("CAudioOptions", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        audioLockButton->setStatusTip(QApplication::translate("CAudioOptions", "Lock panadapter and waterfall sliders together", nullptr));
#endif // QT_NO_STATUSTIP
        audioLockButton->setText(QApplication::translate("CAudioOptions", "Lock", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab0), QApplication::translate("CAudioOptions", "FFT", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab0), QApplication::translate("CAudioOptions", "Audio FFT settings", nullptr));
        recDirLabel->setText(QApplication::translate("CAudioOptions", "Location for recorded audio files:", nullptr));
#ifndef QT_NO_TOOLTIP
        recDirEdit->setToolTip(QApplication::translate("CAudioOptions", "Enter a location for recordings", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        recDirButton->setToolTip(QApplication::translate("CAudioOptions", "Select a location using a browser", nullptr));
#endif // QT_NO_TOOLTIP
        recDirButton->setText(QApplication::translate("CAudioOptions", "Select", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("CAudioOptions", "Recording", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab1), QApplication::translate("CAudioOptions", "Recording settings", nullptr));
#ifndef QT_NO_TOOLTIP
        portLabel->setToolTip(QApplication::translate("CAudioOptions", "Network port to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        portLabel->setText(QApplication::translate("CAudioOptions", "UDP port", nullptr));
#ifndef QT_NO_TOOLTIP
        udpPort->setToolTip(QApplication::translate("CAudioOptions", "Network port to stream to", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        udpHost->setToolTip(QApplication::translate("CAudioOptions", "Network host to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        udpHost->setText(QApplication::translate("CAudioOptions", "localhost", nullptr));
#ifndef QT_NO_TOOLTIP
        hostLabel->setToolTip(QApplication::translate("CAudioOptions", "Network host to stream to", nullptr));
#endif // QT_NO_TOOLTIP
        hostLabel->setText(QApplication::translate("CAudioOptions", "UDP host", nullptr));
        udpStereo->setText(QApplication::translate("CAudioOptions", "Stereo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("CAudioOptions", "Network", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab2), QApplication::translate("CAudioOptions", "Network streaming settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CAudioOptions: public Ui_CAudioOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIO_OPTIONS_H
