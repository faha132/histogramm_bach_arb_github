#include "mainwindow.h"
#include <QApplication>
//#include <boost/test/unit_test.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}