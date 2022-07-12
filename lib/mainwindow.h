#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "initialscreen.h"
#include "view.h"
#include "game.h"

class InitialScreen;

class View;

class Game;

/**
 * @brief The MainWindow class have tool to develop window and initial screen
 */
class MainWindow : public QMainWindow {
Q_OBJECT
public:
    /**
     * @brief MainWindow constructor
     */
    MainWindow();

    /**
     * @brief Set fixed size of window
     */
    void setSize();

protected:
    /**
     * @brief Close program
     * @param event
     */
    void closeEvent(QCloseEvent *event);

private:
    /**
     * @brief Create new objects of view and initialscreen
     */
    void createScene();

    InitialScreen *initialscreen{};
    View *view{};
    Game *game{};
};

#endif // MAINWINDOW_H
