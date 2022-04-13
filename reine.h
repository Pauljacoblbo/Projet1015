#ifndef REINE_H
#define REINE_H

#include "piece.h"
class Reine :public Piece
{
public:
    Reine(QString couleurPiece, QGraphicsItem* parent = 0);
    
    void image();
};

#endif
