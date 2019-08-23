#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    QFile file("../Button.qss");
    file.open(QIODevice::ReadOnly);
    a.setStyleSheet(file.readAll());

    return a.exec();
}
