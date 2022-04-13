#include "tour.h"
#include "partie.h"

Tour::Tour(QString couleurPiece, QGraphicsItem* parent) :Piece(couleurPiece, parent)
{
    image();
}


void Tour::image()
{
    if (side == "BLANC")
        setPixmap(QPixmap("tourBlanc.png"));
    else
        setPixmap(QPixmap("tourNoir.png"));
}