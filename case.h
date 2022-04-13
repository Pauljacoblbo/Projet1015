#ifndef CASE_H
#define CASE_H

#include <QGraphicsRectItem>
#include <QBrush>
#include "piece.h"

class Piece;
class Case :public QGraphicsRectItem
{
public:

    Case(QGraphicsItem* parent = 0);
    ~Case();

    void setCouleur(QColor color);
    void placerPiece(Piece* piece);

    int ligne;
    int colonne;

private:
    QBrush brush;
};

#endif