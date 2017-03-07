#ifndef QTPLOTWINDOW_H
#define QTPLOTWINDOW_H

#include <QMainWindow>

namespace Ui {
class qtPlotWindow;
}

class qtPlotWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit qtPlotWindow(QWidget *parent = 0);
    ~qtPlotWindow();

private:
    Ui::qtPlotWindow *ui;
};

#endif // QTPLOTWINDOW_H
