#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "words.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    model->setStringList(words);

    ui->listView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

