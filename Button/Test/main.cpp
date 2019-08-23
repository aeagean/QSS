#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle(QString::fromLocal8Bit("ButtonQSS by Qt君"));
    w.show();

    QFile file("../Button.qss");
    file.open(QIODevice::ReadOnly);
    a.setStyleSheet(file.readAll());

    return a.exec();
}
