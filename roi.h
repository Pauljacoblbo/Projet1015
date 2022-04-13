#ifndef ROI_H
#define ROI_H

#include "piece.h"
class Roi :public Piece
{
public:
    Roi(QString couleurPiece, QGraphicsItem* parent = 0);
    
    void image();
};

#endif
