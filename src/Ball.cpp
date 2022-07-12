#include "../lib/Ball.h"

Ball::Ball(QGraphicsItem *parent) : QGraphicsEllipseItem(parent) {
    setRect(0, 0, 30, 30);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::yellow);
    setBrush(brush);

    xVelocity = 10;
    yVelocity = 1;

    auto *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(12);
}

double Ball::getCenterY() {
    return y() + rect().height() / 2;
}

void Ball::move() {
    handleFrameUpDownCollision();
    handlePaddleCollision();
    handleFrameRightCollision();
    handleFrameScoreLeftCollision();
    handleFrameScoreRightCollision();
    delay(3);
    moveBy(xVelocity, yVelocity);
}

void Ball::handlePaddleCollision() {
    QList<QGraphicsItem *> cItems = collidingItems();
    for (auto & cItem : cItems) {
        paddle = dynamic_cast<Paddle *>(cItem);
        if (paddle) {
            xVelocity = -1 * xVelocity;

            double ballY = getCenterY();
            double paddleY = paddle->getCenterY();
            double dvy = ballY - paddleY;
            yVelocity = (yVelocity + dvy) / 15;

            return;
        }
    }
}

void Ball::handleFrameRightCollision() {
    QList<QGraphicsItem *> cItems = collidingItems();
    for (auto & cItem : cItems) {
        frameRight = dynamic_cast<FrameRight *>(cItem);
        if (frameRight) {
            xVelocity = -1 * xVelocity;

            double ballY = getCenterY();
            double paddleY = frameRight->getCenterY();
            double dvy = ballY - paddleY;
            yVelocity = (yVelocity + dvy) / 15;

            return;
        }
    }
}

void Ball::handleFrameScoreLeftCollision() {
    QList<QGraphicsItem *> cItems = collidingItems();
    for (auto & cItem : cItems) {
        frameScoreLeft = dynamic_cast<FrameScoreLeft *>(cItem);
        if (frameScoreLeft) {
            delay(0.9);
            Ball::~Ball();
            result = new Result(1);
            result->exec();
        }
    }
}

void Ball::handleFrameScoreRightCollision() {
    QList<QGraphicsItem *> cItems = collidingItems();
    for (auto & cItem : cItems) {
        frameScoreRight = dynamic_cast<FrameScoreRight *>(cItem);
        if (frameScoreRight) {
            delay(0.9);
            Ball::~Ball();
            result = new Result(0);
            result->exec();
        }
    }
}

void Ball::handleFrameUpDownCollision() {
    QList<QGraphicsItem *> cItems = collidingItems();
    for (auto & cItem : cItems) {
        frameUpDown = dynamic_cast<FrameUpDown *>(cItem);
        if (frameUpDown) {
            yVelocity = -1 * yVelocity;

            double ballY = getCenterY();
            double frameY = frameUpDown->getCenterY();
            double dvy = ballY - frameY;
            yVelocity = (xVelocity + dvy) / 15;

            return;
        }
    }

}

void Ball::delay(int s) {
    static bool initialized;
    if (!initialized) {
        initialized = true;
        QTime dieTime = QTime::currentTime().addSecs(s);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}

void Ball::delay(double s) {
    static bool initialized;
    if (!initialized) {
        initialized = true;
        QTime dieTime = QTime::currentTime().addSecs(s);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}




