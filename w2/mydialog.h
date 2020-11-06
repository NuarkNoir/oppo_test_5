#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include <QFile>
#include <QIODevice>
#include <QTextStream>

class MyDialog : public QDialog {
    Q_OBJECT

private:
    QVBoxLayout *v_lay;

    QSpinBox *sb_spinner;
    QTextEdit *te_text;
    QComboBox *cb_variants;
    QPushButton *btn_save;

public:
    MyDialog(QWidget *parent=nullptr);
    ~MyDialog();

private slots:
    void OnSaveCalled();
};
#endif // MYDIALOG_H
