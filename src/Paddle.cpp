#include "../lib/Paddle.h"

Paddle::Paddle() {
    setRect(0, 0, 15, 100);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::gray);
    setBrush(brush);
}

double Paddle::getCenterY() {
    return y() + rect().height() / 2;
}

void Paddle::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_W) {
        setPos(x(), y() - 85);
    }
    if (event->key() == Qt::Key_S) {
        setPos(x(), y() + 85);
    }
}

void Paddle::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    double mouseY = mapToScene(event->pos()).y();
    setPos(x(), mouseY);
}
