#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setObjectName("GreenButton");
    ui->pushButton_2->setObjectName("BlueButton");
    ui->pushButton_3->setObjectName("RedButton");
    ui->pushButton_4->setObjectName("GrayButton");
    ui->pushButton_5->setObjectName("BlackButton");

    ui->pushButton_6->setObjectName("GreenButton2");
    ui->pushButton_7->setObjectName("BlueButton2");
    ui->pushButton_8->setObjectName("RedButton2");
    ui->pushButton_9->setObjectName("GrayButton2");
    ui->pushButton_10->setObjectName("BlackButton2");
}

MainWindow::~MainWindow()
{
    delete ui;
}
