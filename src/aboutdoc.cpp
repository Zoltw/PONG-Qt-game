#include <QTextStream>
#include "../lib/aboutdoc.h"
#include "ui_aboutdoc.h"

AboutDoc::AboutDoc(QWidget *parent) : QDialog(parent), ui(new Ui::AboutDoc) {
    ui->setupUi(this);

    QFile file("../db/about_doc.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(nullptr, "Access denied", file.errorString());
    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}

AboutDoc::~AboutDoc() {
    delete ui;
}

void AboutDoc::on_pushButtonBack_clicked() {
    this->close();
}
