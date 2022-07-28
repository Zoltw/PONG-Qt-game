#ifndef INITIALSCREEN_H
#define INITIALSCREEN_H

#include "view.h"
#include "game.h"
#include "aboutdoc.h"
#include "mainwindow.h"

class View;

class Game;

class AboutDoc;

/**
 * @brief The InitialScreen class which render initialing screen where we can choose operation
 */
class InitialScreen : public QGraphicsScene {
Q_OBJECT
public:
    /**
      * @brief InitialScreen constructor
      * @param view constant setting of window application
      * @param parent
      */
    InitialScreen(View *view, QWidget *parent);

private slots:

    /**
     * @brief Closing all items from initial screen and render new scene of train mode
     */
    void trainMode();

    /**
     * @brief Closing all items from initial screen and render new scene of tournament mode
     */
    void tournamentMode();

    /**
     * @brief Execute "about and documentation" widget
     */
    void about();

    /**
     * @brief Closing program
     */
    static void quitProgram();

private:
    View *viewer;
    Game *game;
    AboutDoc *aboutdoc;
    QGraphicsPixmapItem *background;
    QGraphicsPixmapItem *foreground;
    QPushButton *trainModeButton;
    QPushButton *tournamentModeButton;
    QPushButton *aboutButton;
    QPushButton *quitButton;
};

#endif // INITIALSCREEN_H
