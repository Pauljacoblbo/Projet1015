#include "echiquier.h"
#include "case.h"
#include "partie.h"
#include "reine.h"
#include "tour.h"
#include "pion.h"
#include "roi.h"
#include "cavalier.h"
#include "fou.h"

extern Partie* partie;
Echiquier::Echiquier()
{
    placerNoirs();
    placerBlancs();
}
void Echiquier::dessinerCases(int x, int y)
{
    int SHIFT = 100;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
        {
            Case* uneCase = new Case();
            partie->cases[i][j] = uneCase;
            uneCase->ligne = i;
            uneCase->colonne = j;
            uneCase->setPos(x + SHIFT * j, y + SHIFT * i);
            if ((i + j) % 2 == 0)
                uneCase->setCouleur(Qt::lightGray);
            else
                uneCase->setCouleur(Qt::darkRed);
            partie->addToScene(uneCase);
        }
    }
}

void Echiquier::ajouterPieces() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
        {
            Case* uneCase = partie->cases[i][j];
            if (i < 2) {
                static int k;
                uneCase->placerPiece(noir[k]);
                partie->pieces.append(noir[k]);
                partie->addToScene(noir[k++]);
            }
            if (i > 5) {
                static int h;
                uneCase->placerPiece(blanc[h]);
                partie->pieces.append(blanc[h]);
                partie->addToScene(blanc[h++]);
            }

        }
    }
}

void Echiquier::placerBlancs()
{
    Piece* piece;
    for (int i = 0; i < 8; i++) {
        piece = new Pion("BLANC");
        blanc.append(piece);
    }
    piece = new Tour("BLANC");
    blanc.append(piece);
    piece = new Cavalier("BLANC");
    blanc.append(piece);
    piece = new Fou("BLANC");
    blanc.append(piece);
    piece = new Reine("BLANC");
    blanc.append(piece);
    piece = new Roi("BLANC");
    blanc.append(piece);
    piece = new Fou("BLANC");
    blanc.append(piece);
    piece = new Cavalier("BLANC");
    blanc.append(piece);
    piece = new Tour("BLANC");
    blanc.append(piece);
}

void Echiquier::placerNoirs()
{
    Piece* piece;
    piece = new Tour("NOIR");
    noir.append(piece);
    piece = new Cavalier("NOIR");
    noir.append(piece);
    piece = new Fou("NOIR");
    noir.append(piece);
    piece = new Reine("NOIR");
    noir.append(piece);
    piece = new Roi("NOIR");
    noir.append(piece);
    piece = new Fou("NOIR");
    noir.append(piece);
    piece = new Cavalier("NOIR");
    noir.append(piece);
    piece = new Tour("NOIR");
    noir.append(piece);
    for (int i = 0; i < 8; i++) {
        piece = new Pion("NOIR");
        noir.append(piece);
    }
}