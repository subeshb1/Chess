#ifndef KNIGHT_H
#define KNIGHT_H

#include "chesspiece.h"
class Knight:public ChessPiece
{
public:
    Knight(QString team,QGraphicsItem *parent = 0);
    void setImage();

    void moves();

};

#endif // KNIGHT_H
