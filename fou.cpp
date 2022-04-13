#include "fou.h"
#include "partie.h"

Fou::Fou(QString couleurPiece, QGraphicsItem* parent) :Piece(couleurPiece, parent)
{
    image();
}

void Fou::image()
{
    if (side == "BLANC")
        setPixmap(QPixmap("fouBlanc.png"));
    else
        setPixmap(QPixmap("fouNoir.png"));
}