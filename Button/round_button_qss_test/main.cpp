#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle(QString::fromLocal8Bit("圆形按钮样式 by Qt君"));
    w.show();

    QFile file("../round_button.qss");
    file.open(QIODevice::ReadOnly);
    a.setStyleSheet(file.readAll());

    return a.exec();
}
