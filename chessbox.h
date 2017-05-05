#ifndef CHESSBOX_H
#define CHESSBOX_H

#include <QGraphicsRectItem>
#include <QBrush>
#include "chesspiece.h"
#include <QGraphicsSceneMouseEvent>

class ChessPiece;
class ChessBox:public QGraphicsRectItem
{
public:

    //Constructor
    ChessBox(QGraphicsItem *parent=0);
    ~ChessBox();


    //public member function
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void setColor(QColor color);
    void placePiece(ChessPiece *piece);


    void resetOriginalColor();
    void setOriginalColor(QColor value);

    bool getHasChessPiece();
    void setHasChessPiece(bool value,ChessPiece *piece = 0);

    void checkForCheck();

    QString getChessPieceColor() ;
    void setChessPieceColor(QString value);

    int rowLoc;
    int colLoc;

    ChessPiece * currentPiece;

private:
    QBrush brush;
    QColor originalColor;
    bool hasChessPiece;
    QString chessPieceColor;


};

#endif // CHESSBOX_H
