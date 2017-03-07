#include "qtplotwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtPlotWindow w;
    w.show();

    return a.exec();
}
