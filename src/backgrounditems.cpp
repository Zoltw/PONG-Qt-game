#include "../lib/backgrounditems.h"

BackgroundItems::BackgroundItems(const QPixmap &pixmap, QGraphicsItem *parent) : QGraphicsPixmapItem(pixmap, parent) {}

QPainterPath BackgroundItems::shape() const {
    return QPainterPath();
}
