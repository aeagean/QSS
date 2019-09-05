#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle(QString::fromLocal8Bit("鼠标悬停样式 by Qt君"));
    w.show();

    QFile file("../hover_button.qss");
    file.open(QIODevice::ReadOnly);
    a.setStyleSheet(file.readAll());

    return a.exec();
}
