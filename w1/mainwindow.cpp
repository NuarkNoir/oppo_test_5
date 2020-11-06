#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->act_authors, &QAction::triggered, this, &MainWindow::About_Lab1);
    connect(ui->cb_weekdays, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::ChangedComboxIndex);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::About_Lab1() {

}

void MainWindow::ChangedComboxIndex(int newIdx) {
    ui->cal_curr_year->setFirstDayOfWeek(Qt::DayOfWeek(newIdx));
}
