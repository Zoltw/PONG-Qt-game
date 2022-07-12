#ifndef FRAME_H
#define FRAME_H

#include <QGraphicsRectItem>
#include <QBrush>

/**
 * @brief The FrameUpDown class creting Up and Down frame.
 */
class FrameUpDown : public QGraphicsRectItem {

public:
    /**
     * @brief FrameUpDown constructor
     * @param a - weight of frame
     * @param b - height of frame
     */
    FrameUpDown(int a, int b);

    virtual double getCenterY();
};

/**
 * @brief The FrameRight class creting Right frame.
 */
class FrameRight : public QGraphicsRectItem {

public:
    /**
     * @brief FrameRight Constructor
     * @param a - weight of frame
     * @param b - height of frame
     */
    FrameRight(int a, int b);

    virtual double getCenterY();
};

/**
 * @brief The FrameCentre class creating Centre frame which is only for visual
 */
class FrameCentre : public QGraphicsRectItem {

public:
    /**
     * @brief FrameCentre constructor
     * @param a - weight of frame
     * @param b - height of frame
     */
    FrameCentre(int a, int b);
};

/**
 * @brief The FrameScoreLeft class creating left black frame
 */
class FrameScoreLeft : public QGraphicsRectItem {

public:
    /**
     * @brief FrameScoreLeft constructor
     * @param a - weight of frame
     * @param b - height of frame
     */
    FrameScoreLeft(int a, int b);
};

/**
 * @brief The FrameScoreRight class creating right black frame
 */
class FrameScoreRight : public QGraphicsRectItem {

public:
    /**
     * @brief FrameScoreRight constructor
     * @param a - weight of frame
     * @param b - height of frame
     */
    FrameScoreRight(int a, int b);
};


#endif // FRAME_H
