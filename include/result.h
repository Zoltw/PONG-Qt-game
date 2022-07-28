#ifndef RESULT_H
#define RESULT_H

#include <QDialog>

#include "game.h"
#include "initialscreen.h"
#include "timer.h"

namespace Ui {
    class Result;
}

class Game;

class InitialScreen;

/**
 * @brief The Result class which have objects and methods to run result widget
 */
class Result : public QDialog {
Q_OBJECT

public:
    /**
     * @brief Result constructor
     * @param player - 0 (player 1 won), 1 (player 2 won), else(time's up)
     * @param parent
     */
    explicit Result(int player, QWidget *parent = nullptr);

    ~Result();

private slots:

    /**
     * @brief on_quitGameButton_clicked slot end program
     */
    static void on_quitGameButton_clicked();

    /**
     * @brief on_playAgainButton_clicked reopen application to initial screen without splash screen
     */
    static void on_playAgainButton_clicked();

private:
    Ui::Result *ui;
    View *viewer;
    Game *game;
    int player1 = 0;
    int player2 = 0;
};

#endif // RESULT_H
