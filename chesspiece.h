#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <QGraphicsPixmapItem>
#include "chessbox.h"
#include <QGraphicsSceneMouseEvent>

class ChessBox;
class ChessPiece:public QGraphicsPixmapItem
{
public:
    ChessPiece(QString team = "",QGraphicsItem *parent = 0);

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void setCurrentBox(ChessBox *box);

    ChessBox *getCurrentBox() ;

    QString getSide() ;
    void setSide( QString value);
    virtual void setImage() = 0;

    bool getIsPlaced() ;
    void setIsPlaced(bool value);

    QList <ChessBox *> moveLocation();
    virtual void moves() = 0;
    void decolor();

    bool firstMove;

    bool boxSetting(ChessBox *box);
protected:
    ChessBox *currentBox;
    QString side;
    bool isPlaced;
    QList <ChessBox *> location;

};

#endif // CHESSPIECE_H
