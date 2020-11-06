#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->act_quit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->act_authors, &QAction::triggered, this, &MainWindow::About_Lab1);
    connect(ui->cb_weekdays, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::ChangedComboxIndex);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::About_Lab1() {
    auto win_about = new About();
    win_about->show();
}

void MainWindow::ChangedComboxIndex(int newIdx) {
    ui->cal_curr_year->setFirstDayOfWeek(Qt::DayOfWeek(newIdx+1));

    for (int i = 1; i < 8; i++) {
        QTextCharFormat format;

        if (i == newIdx+1) {
            format.setForeground(qvariant_cast<QColor>("green"));
        }
        else if (i > 5) {
            format.setForeground(qvariant_cast<QColor>("red"));
        }

        ui->cal_curr_year->setWeekdayTextFormat(Qt::DayOfWeek(i), format);
    }
}
