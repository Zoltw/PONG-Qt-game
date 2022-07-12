#include "../lib/mainwindow.h"

MainWindow::MainWindow() {
    createScene();
    setSize();
    setCentralWidget(view);
}

void MainWindow::setSize() {
    this->setFixedSize(1280, 720);
}

void MainWindow::createScene() {
    view = new View;
    initialscreen = new InitialScreen(view, this);
}

void MainWindow::closeEvent(QCloseEvent *) {
    qApp->quit();
}
