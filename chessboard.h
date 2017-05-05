#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <QGraphicsRectItem>
#include "chesspiece.h"
class ChessBoard
{
public:
    ChessBoard();

    //drawing public function
    void drawBoxes(int x, int y);

    void setUpWhite();
    void setUpBlack();



    void addChessPiece();
    void reset();
private:
    QList <ChessPiece *> white;
    QList <ChessPiece *> black;



};

#endif // CHESSBOARD_H
