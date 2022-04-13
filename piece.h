#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>
#include "case.h"

class Case;
class Piece :public QGraphicsPixmapItem
{
public:
    Piece(QString couleurPiece = "", QGraphicsItem* parent = 0);

    virtual void image() = 0;

protected:
    QString side;
};

#endif
