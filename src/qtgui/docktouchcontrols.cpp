/* -*- c++ -*- */
/*
 * Gqrx SDR: Software defined radio receiver powered by GNU Radio and Qt
 *           https://gqrx.dk/
 *
 * Copyright 2011-2016 Alexandru Csete OZ9AEC.
 *
 * Gqrx is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * Gqrx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gqrx; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
 
//#include <cmath>
//#include <QDebug>
//#include <QDateTime>
//#include <QShortcut>
//#include <QDir>

#include <QKeyEvent>

#include "docktouchcontrols.h"
#include "ui_docktouchcontrols.h"

DockTouchControls::DockTouchControls(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::DockTouchControls)
{
    ui->setupUi(this);
}

DockTouchControls::~DockTouchControls()
{
    delete ui;
}

void DockTouchControls::on_pushButton_d_1_clicked()
{
    printf("Key 1\n");
    
    if (QApplication::focusWidget() == nullptr) {
        printf("Failed to find focus\n");
    } else {
        printf("%s\n", QApplication::focusWidget()->objectName().toStdString().c_str());
    }
    
    QKeyEvent *keyEvent1 = new QKeyEvent(QEvent::KeyPress, Qt::Key_1, Qt::NoModifier, "1");
    QApplication::sendEvent(QApplication::focusWidget(), keyEvent1);
    
    QKeyEvent *keyEvent2 = new QKeyEvent(QEvent::KeyRelease, Qt::Key_1, Qt::NoModifier, "1");
    QApplication::sendEvent(QApplication::focusWidget(), keyEvent2);
}
