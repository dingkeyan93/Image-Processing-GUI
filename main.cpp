#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QApplication::setStyle("windowsxp");
    a.processEvents();
    MainWindow w;
    w.show();
    w.resize(800,600);//调整窗口大小
    w.move((QApplication::desktop()->width()-w.width())/2,(QApplication::desktop()->height()-w.height())/2);//居中显示
    return a.exec();
}
