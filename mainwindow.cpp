#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "timedmessagebox.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    TimedMessageBox* t = new TimedMessageBox(this,"Hola",TimedMessageBox::Warning);
    t->show();
}
