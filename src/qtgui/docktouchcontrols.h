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
	void on_pushButton_d_1_clicked();

private:
    Ui::DockTouchControls *ui;

};

#endif //DOCKTOUCHCONTROLS_H
