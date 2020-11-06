#include "mydialog.h"
#include "QAction"

MyDialog::MyDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle("Анкета");

    this->v_lay = new QVBoxLayout;


    QHBoxLayout *first_row = new QHBoxLayout;
    this->sb_spinner = new QSpinBox();
    this->te_text = new QTextEdit();

    first_row->addWidget(sb_spinner);
    first_row->addWidget(te_text);

    this->v_lay->addLayout(first_row);


    QHBoxLayout *second_row = new QHBoxLayout;
    this->cb_variants = new QComboBox();
    this->btn_save = new QPushButton();

    second_row->addWidget(cb_variants);
    second_row->addWidget(btn_save);

    this->v_lay->addLayout(second_row);


    this->setLayout(v_lay);

    cb_variants->addItems({"First", "Second", "Third"});
    btn_save->setText("Save data");

    connect(btn_save, &QPushButton::clicked, this, &MyDialog::OnSaveCalled);
}

MyDialog::~MyDialog() {
    delete this->v_lay;

    delete this->sb_spinner;
    delete this->te_text;
    delete this->cb_variants;

    delete this->btn_save;
}

void MyDialog::OnSaveCalled() {
    QString file_path = "./output_data.text";

    QFile file(file_path);
    file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text);

    QTextStream in(&file);
    in << "Spinner value: " << this->sb_spinner->value() << Qt::endl;
    in << "TextEdit value: " << this->te_text->toPlainText() << Qt::endl;
    in << "Spinner value: " << this->cb_variants->currentText() << Qt::endl;

    in.flush();
    file.close();
}
