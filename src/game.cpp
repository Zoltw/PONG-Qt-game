#include "../include/game.h"

Game::Game(QObject *parent, bool mode) : QGraphicsScene(0, 0, 1280, 720, parent),
player1(),
player2(),
logo(),
frameUp(),
frameDown(),
frameCentre(),
frameRight(),
frameScoreLeft(),
frameScoreRight(),
ball(),
paddle1(),
paddle2(),
timer()
{ renderGame(mode); }

void Game::renderGame(bool mode) {
    setSceneRect(0, 0, 1280, 720);

    logo = new BackgroundItems(QPixmap("../resources/img/PONGimageBackground.png"));
    logo->setPos(380, 300);
    addItem(logo);

    frameUp = new FrameUpDown(1280, 5);
    frameUp->setPos(0, 0);
    addItem(frameUp);

    frameDown = new FrameUpDown(1280, 5);
    frameDown->setPos(0, 715);
    addItem(frameDown);

    frameCentre = new FrameCentre(10, 715);
    frameCentre->setPos(635, 5);
    addItem(frameCentre);

    frameRight = new FrameRight(5, 720);
    frameRight->setPos(1275, 0);
    addItem(frameRight);

    paddle1 = new Paddle();
    paddle1->setPos(5, 310);
    addItem(paddle1);
    paddle1->setFlag(QGraphicsItem::ItemIsFocusable);
    paddle1->setFocus();

    frameScoreLeft = new FrameScoreLeft(5, 715);
    frameScoreLeft->setPos(0, 5);
    addItem(frameScoreLeft);

    if (mode == 1) {
        player1 = new BackgroundItems(QPixmap("../resources/img/player1.png"));
        player1->setPos(10, 10);
        addItem(player1);

        player2 = new BackgroundItems(QPixmap("../resources/img/player2.png"));
        player2->setPos(960, 10);
        addItem(player2);

        frameScoreRight = new FrameScoreRight(10, 715);
        frameScoreRight->setPos(1275, 5);
        addItem(frameScoreRight);

        paddle2 = new Paddle();
        paddle2->setPos(1260, 310);
        addItem(paddle2);
        paddle2->grabMouse();
    }
}

void Game::startBall() {
    ball = new Ball();
    ball->setPos(625, 345);
    addItem(ball);
}

void Game::startTime() {
    timer = new Timer();
    timer->setPos(900, 30);
    addItem(timer);
}










