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
void DockTouchControls::pushButton(int key, Qt::KeyboardModifiers modifier, const QString key_str = "")
{
    /*
    printf("Key\n");
    
    if (QApplication::focusWidget() == nullptr) {
        printf("Failed to find focus\n");
    } else {
        printf("%d %s %s\n", key, QApplication::focusWidget()->objectName().toStdString().c_str(), key_str.toStdString().c_str());
    }
    */
    
    QKeyEvent *keyEvent1 = new QKeyEvent(QEvent::KeyPress, key, modifier, key_str);
    QApplication::sendEvent(QApplication::focusWidget(), keyEvent1);
    
    QKeyEvent *keyEvent2 = new QKeyEvent(QEvent::KeyRelease, key, modifier, key_str);
    QApplication::sendEvent(QApplication::focusWidget(), keyEvent2);
    
    delete keyEvent1;
    delete keyEvent2;
    
}

// Digits
void DockTouchControls::on_pushButton_d_0_clicked()    { DockTouchControls::pushButton(Qt::Key_0, Qt::NoModifier, "0"); }
void DockTouchControls::on_pushButton_d_1_clicked()    { DockTouchControls::pushButton(Qt::Key_1, Qt::NoModifier, "1"); }
void DockTouchControls::on_pushButton_d_2_clicked()    { DockTouchControls::pushButton(Qt::Key_2, Qt::NoModifier, "2"); }
void DockTouchControls::on_pushButton_d_3_clicked()    { DockTouchControls::pushButton(Qt::Key_3, Qt::NoModifier, "3"); }
void DockTouchControls::on_pushButton_d_4_clicked()    { DockTouchControls::pushButton(Qt::Key_4, Qt::NoModifier, "4"); }
void DockTouchControls::on_pushButton_d_5_clicked()    { DockTouchControls::pushButton(Qt::Key_5, Qt::NoModifier, "5"); }
void DockTouchControls::on_pushButton_d_6_clicked()    { DockTouchControls::pushButton(Qt::Key_6, Qt::NoModifier, "6"); }
void DockTouchControls::on_pushButton_d_7_clicked()    { DockTouchControls::pushButton(Qt::Key_7, Qt::NoModifier, "7"); }
void DockTouchControls::on_pushButton_d_8_clicked()    { DockTouchControls::pushButton(Qt::Key_8, Qt::NoModifier, "8"); }
void DockTouchControls::on_pushButton_d_9_clicked()    { DockTouchControls::pushButton(Qt::Key_9, Qt::NoModifier, "9"); }
void DockTouchControls::on_pushButton_d_dec_clicked()  { DockTouchControls::pushButton(Qt::Key_Period, Qt::NoModifier, "."); }
void DockTouchControls::on_pushButton_d_back_clicked() { DockTouchControls::pushButton(Qt::Key_Backspace, Qt::NoModifier); }

// Alphabets
void DockTouchControls::on_pushButton_k_a_clicked()    { DockTouchControls::pushButton(Qt::Key_A, Qt::NoModifier, "a"); }
void DockTouchControls::on_pushButton_k_b_clicked()    { DockTouchControls::pushButton(Qt::Key_B, Qt::NoModifier, "b"); }
void DockTouchControls::on_pushButton_k_c_clicked()    { DockTouchControls::pushButton(Qt::Key_C, Qt::NoModifier, "c"); }
void DockTouchControls::on_pushButton_k_d_clicked()    { DockTouchControls::pushButton(Qt::Key_D, Qt::NoModifier, "d"); }
void DockTouchControls::on_pushButton_k_e_clicked()    { DockTouchControls::pushButton(Qt::Key_E, Qt::NoModifier, "e"); }
void DockTouchControls::on_pushButton_k_f_clicked()    { DockTouchControls::pushButton(Qt::Key_F, Qt::NoModifier, "f"); }
void DockTouchControls::on_pushButton_k_g_clicked()    { DockTouchControls::pushButton(Qt::Key_G, Qt::NoModifier, "g"); }
void DockTouchControls::on_pushButton_k_h_clicked()    { DockTouchControls::pushButton(Qt::Key_H, Qt::NoModifier, "h"); }
void DockTouchControls::on_pushButton_k_i_clicked()    { DockTouchControls::pushButton(Qt::Key_I, Qt::NoModifier, "i"); }
void DockTouchControls::on_pushButton_k_j_clicked()    { DockTouchControls::pushButton(Qt::Key_J, Qt::NoModifier, "j"); }
void DockTouchControls::on_pushButton_k_k_clicked()    { DockTouchControls::pushButton(Qt::Key_K, Qt::NoModifier, "k"); }
void DockTouchControls::on_pushButton_k_l_clicked()    { DockTouchControls::pushButton(Qt::Key_L, Qt::NoModifier, "l"); }
void DockTouchControls::on_pushButton_k_m_clicked()    { DockTouchControls::pushButton(Qt::Key_M, Qt::NoModifier, "m"); }
void DockTouchControls::on_pushButton_k_n_clicked()    { DockTouchControls::pushButton(Qt::Key_N, Qt::NoModifier, "n"); }
void DockTouchControls::on_pushButton_k_o_clicked()    { DockTouchControls::pushButton(Qt::Key_O, Qt::NoModifier, "o"); }
void DockTouchControls::on_pushButton_k_p_clicked()    { DockTouchControls::pushButton(Qt::Key_P, Qt::NoModifier, "p"); }
void DockTouchControls::on_pushButton_k_q_clicked()    { DockTouchControls::pushButton(Qt::Key_Q, Qt::NoModifier, "q"); }
void DockTouchControls::on_pushButton_k_r_clicked()    { DockTouchControls::pushButton(Qt::Key_R, Qt::NoModifier, "r"); }
void DockTouchControls::on_pushButton_k_s_clicked()    { DockTouchControls::pushButton(Qt::Key_S, Qt::NoModifier, "s"); }
void DockTouchControls::on_pushButton_k_t_clicked()    { DockTouchControls::pushButton(Qt::Key_T, Qt::NoModifier, "t"); }
void DockTouchControls::on_pushButton_k_u_clicked()    { DockTouchControls::pushButton(Qt::Key_U, Qt::NoModifier, "u"); }
void DockTouchControls::on_pushButton_k_v_clicked()    { DockTouchControls::pushButton(Qt::Key_V, Qt::NoModifier, "v"); }
void DockTouchControls::on_pushButton_k_w_clicked()    { DockTouchControls::pushButton(Qt::Key_W, Qt::NoModifier, "w"); }
void DockTouchControls::on_pushButton_k_x_clicked()    { DockTouchControls::pushButton(Qt::Key_X, Qt::NoModifier, "x"); }
void DockTouchControls::on_pushButton_k_y_clicked()    { DockTouchControls::pushButton(Qt::Key_Y, Qt::NoModifier, "y"); }
void DockTouchControls::on_pushButton_k_z_clicked()    { DockTouchControls::pushButton(Qt::Key_Z, Qt::NoModifier, "z"); }

// Alphabet extra
void DockTouchControls::on_pushButton_k_back_clicked()   { DockTouchControls::pushButton(Qt::Key_Backspace, Qt::NoModifier); }
void DockTouchControls::on_pushButton_k_case_clicked()   { DockTouchControls::pushButton(Qt::Key_CapsLock,  Qt::NoModifier); }
void DockTouchControls::on_pushButton_k_q_mark_clicked() { DockTouchControls::pushButton(Qt::Key_Question,  Qt::NoModifier, "?"); }
void DockTouchControls::on_pushButton_k_space_clicked()  { DockTouchControls::pushButton(Qt::Key_Space,     Qt::NoModifier, " "); }
// Frequency
void DockTouchControls::on_pushButton_fq_down_clicked()  { }
void DockTouchControls::on_pushButton_fq_scan_clicked()  { }
void DockTouchControls::on_pushButton_fq_up_clicked()    { }

// Squelch
void DockTouchControls::on_pushButton_sq_auto_clicked() { }
void DockTouchControls::on_pushButton_sq_down_clicked() { }
void DockTouchControls::on_pushButton_sq_up_clicked()   { }

// Offset
void DockTouchControls::on_pushButton_offset_down_clicked() { }
void DockTouchControls::on_pushButton_offset_up_clicked()   { }

// Width
void DockTouchControls::on_pushButton_width_down_clicked() { }
void DockTouchControls::on_pushButton_width_up_clicked()   { }

// Up/Down/Enter
void DockTouchControls::on_pushButton_down_clicked()  { DockTouchControls::pushButton(Qt::Key_Down,  Qt::NoModifier); }
void DockTouchControls::on_pushButton_enter_clicked() { DockTouchControls::pushButton(Qt::Key_Enter, Qt::NoModifier); }
void DockTouchControls::on_pushButton_up_clicked()    { DockTouchControls::pushButton(Qt::Key_Up,    Qt::NoModifier); }

// Controls
void DockTouchControls::on_pushButton_decode_clicked() { }
void DockTouchControls::on_pushButton_gain_clicked()   { }
void DockTouchControls::on_pushButton_mod_clicked()    { }
void DockTouchControls::on_pushButton_mute_clicked()   { }
void DockTouchControls::on_pushButton_record_clicked() { }
void DockTouchControls::on_pushButton_replay_clicked() { }

// Scan
void DockTouchControls::on_pushButton_scan_custom_clicked() { }
void DockTouchControls::on_pushButton_scan_ems_clicked()    { }
void DockTouchControls::on_pushButton_scan_fdpd_clicked()   { }
void DockTouchControls::on_pushButton_scan_wx_clicked()     { }
