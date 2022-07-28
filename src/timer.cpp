#include "../include/timer.h"

Timer::Timer(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    timeCount = 90;

    setPlainText(QString("") + QString::number(timeCount));
    setDefaultTextColor(Qt::white);
    setTextWidth(1000);
    delay();
    startTimer(1000);

}

void Timer::timerEvent(QTimerEvent *) {
    decrease();
}

void Timer::decrease() {
    if (0 != timeCount) {
        timeCount--;
        setPlainText(QString("") + QString::number(timeCount));
    } else {
        result = new Result(2);
        result->exec();
    }
}

int Timer::getTime() const {
    return timeCount;
}

void Timer::delay() {
    static bool initialize;
    if (!initialize) {
        initialize = true;
        QTime dieTime = QTime::currentTime().addSecs(3);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}
