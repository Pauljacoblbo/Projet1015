#include "piece.h"

Piece::Piece(QString couleurPiece, QGraphicsItem* parent) :QGraphicsPixmapItem(parent)
{
    side = couleurPiece;
}
