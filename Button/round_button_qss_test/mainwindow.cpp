#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setObjectName("RedButton");
    ui->pushButton_2->setObjectName("BlueButton");
    ui->pushButton_3->setObjectName("GreenButton");
    ui->pushButton_4->setObjectName("GrayButton");
    ui->pushButton_5->setObjectName("BlackButton");
}

MainWindow::~MainWindow()
{
    delete ui;
}
