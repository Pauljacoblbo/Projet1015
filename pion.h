#ifndef PION_H
#define PION_H

#include "piece.h"
class Pion :public Piece
{
public:
    Pion(QString couleurPiece, QGraphicsItem* parent = 0);
    
    void image();
};

#endif
