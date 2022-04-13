#ifndef ECHIQUIER_H
#define ECHIQUIER_H

#include <QGraphicsRectItem>
#include "piece.h"

class Echiquier
{
public:
    Echiquier();

    void dessinerCases(int x, int y);
    void placerBlancs();
    void placerNoirs();
    void ajouterPieces();

private:
    QList <Piece*> blanc;
    QList <Piece*> noir;
};

#endif
