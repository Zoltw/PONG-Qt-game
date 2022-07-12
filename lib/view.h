#ifndef VIEW_H
#define VIEW_H

#include <QPushButton>
#include <QGraphicsView>
#include <QApplication>

/**
 * @brief The View class initial size and scene change
 */
class View : public QGraphicsView {
Q_OBJECT

signals:

    /**
     * @brief signal which emit change scene
     */
    void sceneChanged();

public:
    /**
     * @brief View constructor
     */
    View();

    /**
     * @brief Event that close program
     * @param event
     */
    void closeEvent(QCloseEvent *event) override;

    /**
     * @brief Scene change
     */
    void sceneSet(QGraphicsScene *);
};

#endif // VIEW_H
