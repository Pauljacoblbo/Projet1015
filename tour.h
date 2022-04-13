#ifndef TOUR_H
#define TOUR_H

#include "piece.h"
class Tour :public Piece
{
public:
    Tour(QString couleurPiece, QGraphicsItem* parent = 0);

    void image();
};

#endif
