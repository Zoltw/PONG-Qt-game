#include <QApplication>
#include <QSplashScreen>

#include "../include/game.h"

int main(int argc, char *argv[]) {
    QApplication runGame(argc, argv);
    MainWindow menu;

    std::string splash = "splash";
    std::string about = "about";
    std::string nosplash = "nosplash";

    // Run application with splash screen
    if (argv[1] == splash) {
        auto *splash = new QSplashScreen;
        splash->setPixmap(QPixmap("../db/PONGimage.png"));
        splash->show();

        menu.setSize();

        QTimer::singleShot(2000, splash, SLOT(close()));
        QTimer::singleShot(2500, &menu, SLOT(show()));

        return runGame.exec();
    }

        // run only "about and documentation screen"
    else if (argv[1] == about) {
        AboutDoc widget;
        widget.show();

        return runGame.exec();
    }
        // run application without splash screen
    else if (argv[1] == nosplash){
        menu.show();
        return runGame.exec();
    }
}


