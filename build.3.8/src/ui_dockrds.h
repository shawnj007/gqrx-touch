/********************************************************************************
** Form generated from reading UI file 'dockrds.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKRDS_H
#define UI_DOCKRDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockRDS
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_7;
    QLabel *alt_freq;
    QLabel *flags;
    QLabel *label_7;
    QLabel *label;
    QLabel *program_type;
    QLabel *station_name;
    QLabel *label_6;
    QLabel *clocktime;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *program_information;
    QLabel *label_2;
    QCheckBox *rdsCheckbox;
    QLabel *radiotext;
    QLabel *label_5;

    void setupUi(QDockWidget *DockRDS)
    {
        if (DockRDS->objectName().isEmpty())
            DockRDS->setObjectName(QString::fromUtf8("DockRDS"));
        DockRDS->setEnabled(true);
        DockRDS->resize(400, 60);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockRDS->sizePolicy().hasHeightForWidth());
        DockRDS->setSizePolicy(sizePolicy);
        DockRDS->setMinimumSize(QSize(400, 60));
        DockRDS->setMaximumSize(QSize(1000, 150));
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
        DockRDS->setPalette(palette);
        QFont font;
        font.setPointSize(5);
        DockRDS->setFont(font);
        DockRDS->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockRDS->setAllowedAreas(Qt::TopDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
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
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(1);
        gridLayout_7->setVerticalSpacing(0);
        alt_freq = new QLabel(dockWidgetContents);
        alt_freq->setObjectName(QString::fromUtf8("alt_freq"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(alt_freq->sizePolicy().hasHeightForWidth());
        alt_freq->setSizePolicy(sizePolicy2);
        alt_freq->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(alt_freq, 1, 3, 1, 1);

        flags = new QLabel(dockWidgetContents);
        flags->setObjectName(QString::fromUtf8("flags"));
        sizePolicy2.setHeightForWidth(flags->sizePolicy().hasHeightForWidth());
        flags->setSizePolicy(sizePolicy2);
        flags->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(flags, 2, 3, 1, 1);

        label_7 = new QLabel(dockWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_7, 1, 2, 1, 1);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        program_type = new QLabel(dockWidgetContents);
        program_type->setObjectName(QString::fromUtf8("program_type"));
        sizePolicy2.setHeightForWidth(program_type->sizePolicy().hasHeightForWidth());
        program_type->setSizePolicy(sizePolicy2);
        program_type->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(program_type, 1, 1, 1, 1);

        station_name = new QLabel(dockWidgetContents);
        station_name->setObjectName(QString::fromUtf8("station_name"));
        sizePolicy2.setHeightForWidth(station_name->sizePolicy().hasHeightForWidth());
        station_name->setSizePolicy(sizePolicy2);
        station_name->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(station_name, 0, 1, 1, 1);

        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_6, 0, 2, 1, 1);

        clocktime = new QLabel(dockWidgetContents);
        clocktime->setObjectName(QString::fromUtf8("clocktime"));
        sizePolicy2.setHeightForWidth(clocktime->sizePolicy().hasHeightForWidth());
        clocktime->setSizePolicy(sizePolicy2);
        clocktime->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_7->addWidget(clocktime, 0, 3, 1, 1);

        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_4, 2, 0, 1, 1);

        program_information = new QLabel(dockWidgetContents);
        program_information->setObjectName(QString::fromUtf8("program_information"));
        sizePolicy2.setHeightForWidth(program_information->sizePolicy().hasHeightForWidth());
        program_information->setSizePolicy(sizePolicy2);
        program_information->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(program_information, 2, 1, 1, 1);

        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_2, 2, 2, 1, 1);

        rdsCheckbox = new QCheckBox(dockWidgetContents);
        rdsCheckbox->setObjectName(QString::fromUtf8("rdsCheckbox"));
        sizePolicy2.setHeightForWidth(rdsCheckbox->sizePolicy().hasHeightForWidth());
        rdsCheckbox->setSizePolicy(sizePolicy2);
        rdsCheckbox->setMouseTracking(true);
        rdsCheckbox->setFocusPolicy(Qt::StrongFocus);
        rdsCheckbox->setLayoutDirection(Qt::RightToLeft);
        rdsCheckbox->setIconSize(QSize(16, 16));

        gridLayout_7->addWidget(rdsCheckbox, 3, 3, 1, 1);

        radiotext = new QLabel(dockWidgetContents);
        radiotext->setObjectName(QString::fromUtf8("radiotext"));
        sizePolicy2.setHeightForWidth(radiotext->sizePolicy().hasHeightForWidth());
        radiotext->setSizePolicy(sizePolicy2);
        radiotext->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(radiotext, 3, 1, 1, 2);

        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_5, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        DockRDS->setWidget(dockWidgetContents);

        retranslateUi(DockRDS);

        QMetaObject::connectSlotsByName(DockRDS);
    } // setupUi

    void retranslateUi(QDockWidget *DockRDS)
    {
        DockRDS->setWindowTitle(QApplication::translate("DockRDS", "RDS", nullptr));
        alt_freq->setText(QApplication::translate("DockRDS", "999.9", nullptr));
        flags->setText(QApplication::translate("DockRDS", "9999", nullptr));
        label_7->setText(QApplication::translate("DockRDS", "Alt. Frequencies:", nullptr));
        label->setText(QApplication::translate("DockRDS", "Station Name:", nullptr));
        program_type->setText(QApplication::translate("DockRDS", "NineNineNineNine", nullptr));
        station_name->setText(QApplication::translate("DockRDS", "NineNineNineNine", nullptr));
        label_6->setText(QApplication::translate("DockRDS", "Clock Time:", nullptr));
        clocktime->setText(QApplication::translate("DockRDS", "99:99", nullptr));
        label_3->setText(QApplication::translate("DockRDS", "Program Type:", nullptr));
        label_4->setText(QApplication::translate("DockRDS", "Program ID:", nullptr));
        program_information->setText(QApplication::translate("DockRDS", "NineNineNineNine", nullptr));
        label_2->setText(QApplication::translate("DockRDS", "Flags:", nullptr));
#ifndef QT_NO_TOOLTIP
        rdsCheckbox->setToolTip(QApplication::translate("DockRDS", "Enable or disable decoding of RDS data", nullptr));
#endif // QT_NO_TOOLTIP
        rdsCheckbox->setText(QApplication::translate("DockRDS", "Enable RDS", nullptr));
        radiotext->setText(QApplication::translate("DockRDS", "NineNineNineNine", nullptr));
        label_5->setText(QApplication::translate("DockRDS", "Radio Text:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockRDS: public Ui_DockRDS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKRDS_H
