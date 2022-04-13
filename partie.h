#ifndef PARTIE_H
#define PARTIE_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "echiquier.h"
#include "piece.h"

class Partie :public QGraphicsView
{
    Q_OBJECT
public:
    
    Partie(QWidget* parent = 0);

    void dessinerEchiquier();
    void addToScene(QGraphicsItem* item);
    void removeFromScene(QGraphicsItem* item);

    Case* cases[8][8];
    QList <Piece*> pieces;

public slots:
    void commencerPartie();
private:
    QGraphicsScene* scene;
    Echiquier* echiquier;
    QList <QGraphicsItem*> listG;
};

#endif
