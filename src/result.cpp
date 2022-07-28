#include "../include/result.h"
#include "ui_result.h"

Result::Result(int player, QWidget *parent) : QDialog(parent), ui(new Ui::Result) {
    ui->setupUi(this);

    if (player == 0) {
        ui->gameResultText->setText("Player 1 won!");
    } else if (player == 1) {
        ui->gameResultText->setText("Player 2 won!");
    } else {
        ui->gameResultText->setText("Time's up!");
    }
}

Result::~Result() {
    delete ui;
}

void Result::on_quitGameButton_clicked() {
    qApp->quit();
}

void Result::on_playAgainButton_clicked() {
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}


