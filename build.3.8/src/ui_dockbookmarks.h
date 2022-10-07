/********************************************************************************
** Form generated from reading UI file 'dockbookmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKBOOKMARKS_H
#define UI_DOCKBOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qtgui/bookmarkstaglist.h"

QT_BEGIN_NAMESPACE

class Ui_DockBookmarks
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTableView *tableViewFrequencyList;
    BookmarksTagList *tableWidgetTagList;

    void setupUi(QDockWidget *DockBookmarks)
    {
        if (DockBookmarks->objectName().isEmpty())
            DockBookmarks->setObjectName(QString::fromUtf8("DockBookmarks"));
        DockBookmarks->resize(500, 196);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(DockBookmarks->sizePolicy().hasHeightForWidth());
        DockBookmarks->setSizePolicy(sizePolicy);
        DockBookmarks->setMinimumSize(QSize(400, 120));
        DockBookmarks->setMaximumSize(QSize(524287, 360));
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
        DockBookmarks->setPalette(palette);
        DockBookmarks->setFeatures(QDockWidget::NoDockWidgetFeatures);
        DockBookmarks->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        dockWidgetContents->setMinimumSize(QSize(400, 0));
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
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        splitter = new QSplitter(dockWidgetContents);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(20);
        tableViewFrequencyList = new QTableView(splitter);
        tableViewFrequencyList->setObjectName(QString::fromUtf8("tableViewFrequencyList"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableViewFrequencyList->sizePolicy().hasHeightForWidth());
        tableViewFrequencyList->setSizePolicy(sizePolicy3);
        tableViewFrequencyList->setMinimumSize(QSize(100, 10));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush25(QColor(136, 138, 133, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush25);
        QBrush brush26(QColor(204, 207, 200, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush26);
        QBrush brush27(QColor(170, 172, 166, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush27);
        QBrush brush28(QColor(68, 69, 67, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush28);
        QBrush brush29(QColor(91, 92, 89, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush29);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush25);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush30(QColor(195, 196, 194, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush30);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush25);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush27);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush29);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush25);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        tableViewFrequencyList->setPalette(palette2);
        tableViewFrequencyList->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableViewFrequencyList->setSortingEnabled(false);
        splitter->addWidget(tableViewFrequencyList);
        tableWidgetTagList = new BookmarksTagList(splitter);
        if (tableWidgetTagList->columnCount() < 2)
            tableWidgetTagList->setColumnCount(2);
        tableWidgetTagList->setObjectName(QString::fromUtf8("tableWidgetTagList"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidgetTagList->sizePolicy().hasHeightForWidth());
        tableWidgetTagList->setSizePolicy(sizePolicy4);
        tableWidgetTagList->setMinimumSize(QSize(100, 0));
        tableWidgetTagList->setMaximumSize(QSize(16777215, 16777215));
        tableWidgetTagList->setBaseSize(QSize(0, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush25);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush26);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush27);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush28);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush29);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush25);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush30);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush29);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        tableWidgetTagList->setPalette(palette3);
        tableWidgetTagList->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tableWidgetTagList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetTagList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetTagList->setColumnCount(2);
        splitter->addWidget(tableWidgetTagList);
        tableWidgetTagList->horizontalHeader()->setVisible(false);
        tableWidgetTagList->horizontalHeader()->setMinimumSectionSize(18);
        tableWidgetTagList->horizontalHeader()->setDefaultSectionSize(30);
        tableWidgetTagList->horizontalHeader()->setStretchLastSection(true);
        tableWidgetTagList->verticalHeader()->setVisible(false);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        DockBookmarks->setWidget(dockWidgetContents);

        retranslateUi(DockBookmarks);

        QMetaObject::connectSlotsByName(DockBookmarks);
    } // setupUi

    void retranslateUi(QDockWidget *DockBookmarks)
    {
        DockBookmarks->setWindowTitle(QApplication::translate("DockBookmarks", "Bookmarks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DockBookmarks: public Ui_DockBookmarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKBOOKMARKS_H
