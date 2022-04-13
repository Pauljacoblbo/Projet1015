#include "pion.h"
#include "partie.h"

Pion::Pion(QString couleurPiece, QGraphicsItem* parent) :Piece(couleurPiece, parent)
{
    image();
}

void Pion::image()
{
    if (side == "BLANC")
        setPixmap(QPixmap("pionBlanc.png"));
    else
        setPixmap(QPixmap("pionNoir.png"));
}