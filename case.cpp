#include "case.h"

Case::Case(QGraphicsItem* parent) :QGraphicsRectItem(parent)
{
    setRect(0, 0, 100, 100);
    brush.setStyle(Qt::SolidPattern);
    setZValue(-1);
}

Case::~Case()
{
    delete this;
}

void Case::setCouleur(QColor couleur)
{
    brush.setColor(couleur);
    setBrush(couleur);
}

void Case::placerPiece(Piece* piece)
{
    piece->setPos(x() + 50 - piece->pixmap().width() / 2, y() + 50 - piece->pixmap().width() / 2);
    piece->image();
}