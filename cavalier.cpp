#include "cavalier.h"
#include "partie.h"

Cavalier::Cavalier(QString couleurPiece, QGraphicsItem* parent) :Piece(couleurPiece, parent)
{
    image();
}

void Cavalier::image()
{
    if (side == "BLANC")
        setPixmap(QPixmap("cavalierBlanc.png"));
    else
        setPixmap(QPixmap("cavalierNoir.png"));
}