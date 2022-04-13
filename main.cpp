#include <QApplication>
#include "partie.h"

Partie* partie;
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    partie = new Partie();
    partie->show();
    partie->commencerPartie();
    return a.exec();
}