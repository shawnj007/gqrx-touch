#ifndef DOCKTOUCHCONTROLS_H
#define DOCKTOUCHCONTROLS_H

//#include <QColor>
#include <QDockWidget>
#include <QSettings>

namespace Ui {
    class DockTouchControls;
}

class DockTouchControls : public QDockWidget
{
    Q_OBJECT

public:
    explicit DockTouchControls(QWidget *parent = 0);
    ~DockTouchControls();

signals:

public slots:

private slots:
	
	// Digits
	void on_pushButton_d_0_clicked();
	void on_pushButton_d_1_clicked();
	void on_pushButton_d_2_clicked();
	void on_pushButton_d_3_clicked();
	void on_pushButton_d_4_clicked();
	void on_pushButton_d_5_clicked();
	void on_pushButton_d_6_clicked();
	void on_pushButton_d_7_clicked();
	void on_pushButton_d_8_clicked();
	void on_pushButton_d_9_clicked();
	void on_pushButton_d_dec_clicked();
	void on_pushButton_d_back_clicked();
	
	// Alphabets
	void on_pushButton_k_a_clicked();
	void on_pushButton_k_b_clicked();
	void on_pushButton_k_c_clicked();
	void on_pushButton_k_d_clicked();
	void on_pushButton_k_e_clicked();
	void on_pushButton_k_f_clicked();
	void on_pushButton_k_g_clicked();
	void on_pushButton_k_h_clicked();
	void on_pushButton_k_i_clicked();
	void on_pushButton_k_j_clicked();
	void on_pushButton_k_k_clicked();
	void on_pushButton_k_l_clicked();
	void on_pushButton_k_m_clicked();
	void on_pushButton_k_n_clicked();
	void on_pushButton_k_o_clicked();
	void on_pushButton_k_p_clicked();
	void on_pushButton_k_q_clicked();
	void on_pushButton_k_r_clicked();
	void on_pushButton_k_s_clicked();
	void on_pushButton_k_t_clicked();
	void on_pushButton_k_u_clicked();
	void on_pushButton_k_v_clicked();
	void on_pushButton_k_w_clicked();
	void on_pushButton_k_x_clicked();
	void on_pushButton_k_y_clicked();
	void on_pushButton_k_z_clicked();
	
	// Alphabet extra
	void on_pushButton_k_back_clicked();
	void on_pushButton_k_case_clicked();
	void on_pushButton_k_q_mark_clicked();
	void on_pushButton_k_space_clicked();
	
	// Frequency
	void on_pushButton_fq_down_clicked();
	void on_pushButton_fq_scan_clicked();
	void on_pushButton_fq_up_clicked();
	
	// Squelch
	void on_pushButton_sq_auto_clicked();
	void on_pushButton_sq_down_clicked();
	void on_pushButton_sq_up_clicked();
	
	// Offset
	void on_pushButton_offset_down_clicked();
	void on_pushButton_offset_up_clicked();
	
	// Width
	void on_pushButton_width_down_clicked();
	void on_pushButton_width_up_clicked();
	
	// Up/Down/Enter
	void on_pushButton_down_clicked();
	void on_pushButton_enter_clicked();
	void on_pushButton_up_clicked();
	
	// Controls
	void on_pushButton_decode_clicked();
	void on_pushButton_gain_clicked();
	void on_pushButton_mod_clicked();
	void on_pushButton_mute_clicked();
	void on_pushButton_record_clicked();
	void on_pushButton_replay_clicked();
	
	// Scan
	void on_pushButton_scan_custom_clicked();
	void on_pushButton_scan_ems_clicked();
	void on_pushButton_scan_fdpd_clicked();
	void on_pushButton_scan_wx_clicked();

private:
    Ui::DockTouchControls *ui;
    void pushButton(int key, Qt::KeyboardModifiers modifier, const QString key_str);

};

#endif //DOCKTOUCHCONTROLS_H
