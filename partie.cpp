#include "partie.h"

Partie::Partie(QWidget* parent) :QGraphicsView(parent)
{
    QBrush brush;
    scene = new QGraphicsScene();
    setFixedSize(800, 800);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(scene);
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBackgroundBrush(brush);
}

void Partie::dessinerEchiquier()
{
    echiquier = new Echiquier();
    echiquier->dessinerCases(width() / 2 - 400, 50);
}

void Partie::addToScene(QGraphicsItem* item)
{
    scene->addItem(item);
}

void Partie::removeFromScene(QGraphicsItem* item)
{
    scene->removeItem(item);
}

void Partie::commencerPartie()
{
    dessinerEchiquier();
    for (size_t i = 0, n = listG.size(); i < n; i++)
        removeFromScene(listG[i]);
    QGraphicsTextItem* pieceBlanc = new QGraphicsTextItem();
    pieceBlanc->setPos(70, 10);
    pieceBlanc->setZValue(1);
    addToScene(pieceBlanc);
    QGraphicsTextItem* pieceNoir = new QGraphicsTextItem();
    pieceNoir->setPos(1170, 10);
    pieceNoir->setZValue(1);
    addToScene(pieceNoir);
    echiquier->ajouterPieces();
}
