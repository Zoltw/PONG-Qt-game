#ifndef GAME_H
#define GAME_H

#include <QApplication>
#include <QGraphicsScene>

#include "Ball.h"
#include "Paddle.h"
#include "frame.h"
#include "timer.h"
#include "backgrounditems.h"

class Ball;

class BackgroundItems;

class Paddle;

class Frame;

class Timer;

/**
 * @brief The Game class render objects which we want to see.
 */
class Game : public QGraphicsScene {
public:

    /**
     * @brief Game Constructor
     * @param parent - Parent object
     * @param mode - Mode of game. 0 - train, 1 - tournament
     */
    explicit Game(QObject *parent = NULL, bool mode = 0);

    /**
     * @brief Render objects
     * @param mode - Set mode of game. 1 - tournament
     */
    void renderGame(bool mode);

    /**
     * @brief Render ball and start it
     */
    void startBall();

    /**
     * @brief Start time
     */
    void startTime();

private:
    BackgroundItems *player1;
    BackgroundItems *player2;
    BackgroundItems *logo;
    FrameUpDown *frameUp;
    FrameUpDown *frameDown;
    FrameCentre *frameCentre;
    FrameRight *frameRight;
    FrameScoreLeft *frameScoreLeft;
    FrameScoreRight *frameScoreRight;
    Ball *ball;
    Paddle *paddle1;
    Paddle *paddle2;
    Timer *timer;
};

#endif // GAME_H
