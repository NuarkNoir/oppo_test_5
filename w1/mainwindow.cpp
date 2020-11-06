#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->act_authors, &QAction::triggered, this, &MainWindow::About_Lab1);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::About_Lab1() {

}
