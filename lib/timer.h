#ifndef TIMER_H
#define TIMER_H

#include <QTimer>

#include "Ball.h"
#include "result.h"

class Result;

class Ball;

/**
 * @brief The Timer class is responsible for time management
 */
class Timer : public QGraphicsTextItem {
public:
    /**
     * @brief Timer constructor
     * @param parent
     */
    Timer(QGraphicsItem *parent = 0);

    /**
     * @brief Decreasing time, if time count = 0, then execute result
     */
    void decrease();

    /**
     * @brief getTime
     * @return
     */
    int getTime() const;

    /**
     * @brief timerEvent - decreasing
     */
    void timerEvent(QTimerEvent *);

private:
    int timeCount;

    static void delay();

    Result *result{};
};

#endif // TIMER_H
