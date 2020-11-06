#include "mydialog.h"
#include "QAction"

MyDialog::MyDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Анкета");

    QVBoxLayout *v_lay = new QVBoxLayout;


    QHBoxLayout *first_row = new QHBoxLayout;
    QSpinBox *sb_spinner = new QSpinBox();
    QTextEdit *te_text = new QTextEdit();

    first_row->addWidget(sb_spinner);
    first_row->addWidget(te_text);

    v_lay->addLayout(first_row);


    QHBoxLayout *second_row = new QHBoxLayout;
    QComboBox *cb_variants = new QComboBox();
    QPushButton *btn_save = new QPushButton();

    second_row->addWidget(cb_variants);
    second_row->addWidget(btn_save);

    v_lay->addLayout(second_row);


    this->setLayout(v_lay);

    cb_variants->addItems({"First", "Second", "Third"});
    btn_save->setText("Save data");
}

MyDialog::~MyDialog() {

}

