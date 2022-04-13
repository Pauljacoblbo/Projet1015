#ifndef CAVALIER_H
#define CAVALIER_H

#include "piece.h"
class Cavalier :public Piece
{
public:
    Cavalier(QString couleurPiece, QGraphicsItem* parent = 0);
    
    void image();
};

#endif
