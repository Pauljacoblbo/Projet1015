#ifndef FOU_H
#define FOU_H

#include "piece.h"
class Fou :public Piece
{
public:
    Fou(QString couleurPiece, QGraphicsItem* parent = 0);
    
    void image();
};

#endif
