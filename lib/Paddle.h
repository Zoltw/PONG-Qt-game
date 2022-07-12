#ifndef PADDLE_H
#define PADDLE_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QKeyEvent>
#include <QBrush>

/**
 * @brief The Paddle class is responsible for creating tool of paddle and controling by keys and mouse
 */
class Paddle : public QGraphicsRectItem {
public:
    /**
     * @brief Paddle constructor
     */
    Paddle();

    /**
     * @brief Getter returns height of rectangle by window
     * @return
     */
    double getCenterY();

protected:
    /**
     * @brief Values and tools of controling paddles by keys
     * @param event
     */
    void keyPressEvent(QKeyEvent *event) override;

    /**
     * @brief Values and tools of controling paddles by mouse
     * @param event
     */
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
};

#endif // PADDLE_H
