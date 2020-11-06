#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>

class MyDialog : public QDialog {
    Q_OBJECT

private:

public:
    MyDialog(QWidget *parent = nullptr);
    ~MyDialog();
};
#endif // MYDIALOG_H
