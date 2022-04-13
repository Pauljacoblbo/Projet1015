#include "reine.h"
#include "partie.h"

Reine::Reine(QString couleurPiece, QGraphicsItem* parent) :Piece(couleurPiece, parent)
{
    image();
}

void Reine::image()
{
    if (side == "BLANC")
        setPixmap(QPixmap("reineBlanc.png"));
    else
        setPixmap(QPixmap("reineNoir.png"));
}