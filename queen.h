#ifndef QUEEN_H
#define QUEEN_H

#include "chesspiece.h"
class Queen:public ChessPiece
{
public:
    Queen(QString team,QGraphicsItem *parent = 0);
    void setImage();

    void moves();

};

#endif // QUEEN_H
