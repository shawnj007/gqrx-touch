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
#ifndef DOCKTOUCHCONTROLS_H
#define DOCKTOUCHCONTROLS_H

//#include <QColor>
#include <QDockWidget>
//#include <QSettings>

namespace Ui {
    class DockTouchControls;
}

class DockTouchControls : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockTouchControls(QWidget *parent = 0);
    ~DockTouchControls();
    
//public slots:
//    void setOffset(int value);
//    void setBandwidth(int value);

//signals:

//private slots:

private:
    Ui::DockTouchControls *ui;

};

#endif // DOCKTOUCHCONTROLS_H
