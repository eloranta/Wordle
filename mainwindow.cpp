#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList list;
    list << "Clair de Lune" << "Reverie" << "Prelude";
    model->setStringList(list);

    ui->listView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

