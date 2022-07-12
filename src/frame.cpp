#include "../lib/frame.h"

FrameUpDown::FrameUpDown(int a, int b) {
    setRect(0, 0, a, b);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::white);
    setBrush(brush);
}

double FrameUpDown::getCenterY() {
    return y() + rect().height() / 2;
}

FrameRight::FrameRight(int a, int b) {

    setRect(0, 0, a, b);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::white);
    setBrush(brush);
}

double FrameRight::getCenterY() {
    return y() + rect().height() / 2;
}

FrameCentre::FrameCentre(int a, int b) {
    setRect(0, 0, a, b);
    QBrush brush;
    brush.setStyle(Qt::Dense3Pattern);
    brush.setColor(Qt::gray);
    setBrush(brush);
}

FrameScoreRight::FrameScoreRight(int a, int b) {
    setRect(0, 0, a, b);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);
}

FrameScoreLeft::FrameScoreLeft(int a, int b) {
    setRect(0, 0, a, b);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);
}
