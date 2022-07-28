#ifndef BALL_H
#define BALL_H

#include <exception>
#include <QTime>
#include <QProcess>
#include <QDebug>

#include "Paddle.h"
#include "game.h"
#include "frame.h"
#include "view.h"
#include "mainwindow.h"
#include "timer.h"
#include "result.h"

class View;

class Timer;

class Result;

class MainWindow;

/**
 * @brief The Ball class have all setting of ball. Properties of ball and reaction for contact with frames.
 */
class Ball : public QObject, public QGraphicsEllipseItem {
Q_OBJECT
public:

    /**
     * @brief Ball Constructor
     * @param parent
     */
    Ball(QGraphicsItem *parent = NULL);

    double getCenterY();

public slots:

    void move();

private:
    QKeyEvent *event;
    Result *result;
    Paddle *paddle;
    FrameUpDown *frameUpDown;
    FrameRight *frameRight;
    FrameScoreLeft *frameScoreLeft;
    FrameScoreRight *frameScoreRight;

    double xVelocity;
    double yVelocity;

    /**
     * @brief Collision function with paddle which we can control
     */
    void handlePaddleCollision();

    /**
     * @brief Collision function with Up and Down frame
     */
    void handleFrameUpDownCollision();

    /**
     * @brief Collision function with Right frame (train mode)
     */
    void handleFrameRightCollision();

    /**
     * @brief Collision function with Right Score Frame - then execute result and who won
     */
    void handleFrameScoreLeftCollision();

    /**
     * @brief Collision function with Right Score Frame - then execute result and who won
     */
    void handleFrameScoreRightCollision();

    /**
     * @brief Function which pause process for s second (double or int)
     * @param s
     */
    static void delay(int s);

    /**
     * @brief Function which pause process for s second (double or int)
     * @param s
     */
    static void delay(double s);
};

#endif // BALL_H
