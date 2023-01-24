#include "../include/initialscreen.h"

InitialScreen::InitialScreen(View *view, QWidget *parent) : QGraphicsScene(parent) {
    viewer = view;
    viewer->viewportUpdateMode();
    background = new QGraphicsPixmapItem(QPixmap("../resources/img/initialBackground.png"));
    foreground = new QGraphicsPixmapItem(QPixmap("../resources/img/PONGimage.png"));

    foreground->setPos(383, 120);
    addItem(background);
    addItem(foreground);
    this->setFocus();
    this->setSceneRect(0, 0, 1280, 720);
    view->sceneSet(this);

    trainModeButton = new QPushButton(viewer);
    trainModeButton->setText("Train Mode");
    trainModeButton->setObjectName(QString("trainModeButton"));
    trainModeButton->setToolTip("Train your skills!");
    trainModeButton->setGeometry(QRect(430, 350, 200, 75));
    connect(trainModeButton, SIGNAL(clicked()), this, SLOT(trainMode()));

    tournamentModeButton = new QPushButton(viewer);
    tournamentModeButton->setText("Tournament Mode");
    tournamentModeButton->setObjectName(QString("tournamentModeButton"));
    tournamentModeButton->setToolTip("Play a match!");
    tournamentModeButton->setGeometry(QRect(650, 350, 200, 75));
    connect(tournamentModeButton, SIGNAL(clicked()), this, SLOT(tournamentMode()));

    aboutButton = new QPushButton(viewer);
    aboutButton->setText("About and Doc");
    aboutButton->setObjectName(QString("aboutButton"));
    aboutButton->setToolTip("Documentation and more");
    aboutButton->setGeometry(QRect(430, 500, 200, 75));
    connect(aboutButton, SIGNAL(clicked()), this, SLOT(about()));

    quitButton = new QPushButton(viewer);
    quitButton->setText("Quit");
    quitButton->setObjectName(QString("quitButton"));
    quitButton->setToolTip("Quit program");
    quitButton->setGeometry(QRect(650, 500, 200, 75));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(quitProgram()));
}

void InitialScreen::trainMode() {
    trainModeButton->close();
    tournamentModeButton->close();
    aboutButton->close();
    quitButton->close();

    game = new Game(this, false);
    game->startBall();
    viewer->sceneSet(game);
}

void InitialScreen::tournamentMode() {
    trainModeButton->close();
    tournamentModeButton->close();
    aboutButton->close();
    quitButton->close();

    game = new Game(this, true);
    game->startBall();
    viewer->sceneSet(game);
    game->startTime();
}

void InitialScreen::about() {
    aboutdoc = new AboutDoc();
    aboutdoc->exec();
}

void InitialScreen::quitProgram() {
    exit(0);
}


