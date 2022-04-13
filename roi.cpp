#include "roi.h"
#include "partie.h"

Roi::Roi(QString couleurPiece, QGraphicsItem* parent) :Piece(couleurPiece, parent)
{
    image();
}

void Roi::image()
{
    if (side == "BLANC")
        setPixmap(QPixmap("roiBlanc.png"));
    else
        setPixmap(QPixmap("roiNoir.png"));
}