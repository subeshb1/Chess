#ifndef KING_H
#define KING_H

#include "chesspiece.h"
class King:public ChessPiece
{
public:
    King(QString team,QGraphicsItem *parent = 0);
    void setImage();
    void findUnSafeLocation();
    void moves();

};

#endif // KING_H
