#ifndef BACKGROUNDITEMS_H
#define BACKGROUNDITEMS_H

#include <QGraphicsPixmapItem>

/**
 * @brief The BackgroundItems class provides uploading background pictures.
 */
class BackgroundItems : public QGraphicsPixmapItem {
public:
    /**
     * @brief BackgroundItems Constructor
     * @param pixmap
     * @param parent
     */
    explicit BackgroundItems(const QPixmap &pixmap, QGraphicsItem *parent = nullptr);

    /**
     * @brief Virtual constant function
     * @return QPainterPath value
     */
    virtual QPainterPath shape() const;
};

#endif // BACKGROUNDITEMS_H
