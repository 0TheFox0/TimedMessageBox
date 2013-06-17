#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet("Fusion");
    MainWindow w;
    w.show();
    
    return a.exec();
}
