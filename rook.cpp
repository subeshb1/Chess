#include "rook.h"
#include "game.h"

extern Game *game;
Rook::Rook(QString team,QGraphicsItem *parent):ChessPiece(team,parent)
{
    setImage();
}


void Rook::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/rook1.png"));
    else
        setPixmap(QPixmap(":/images/rook.png"));
}

void Rook::moves()
{
    location.clear();
    int row = this->getCurrentBox()->rowLoc;
    int col = this->getCurrentBox()->colLoc;
    QString team = this->getSide();
    //For up

     for(int i = row-1,j = col; i >= 0 ; i--) {
       if(game->collection[i][j]->getChessPieceColor() == team ) {
           break;
       }
       else
       {
           location.append(game->collection[i][j]);
           if(boxSetting(location.last()))
               break;
        }
    }

     //For Down

      for(int i = row+1,j = col; i <= 7 ; i++) {
        if(game->collection[i][j]->getChessPieceColor() == team ) {
            break;
        }
        else
        {
            location.append(game->collection[i][j]);
            if(boxSetting(location.last())){
                break;
            }
        }
     }

      //For left

       for(int i = row,j = col-1; j >= 0 ; j--) {
         if(game->collection[i][j]->getChessPieceColor() == team ) {
             break;
         }
         else
         {
             location.append(game->collection[i][j]);
             if(boxSetting(location.last()))
                break;
         }
        }
       //For Right

        for(int i = row,j = col+1; j <= 7 ; j++)
        {
              if(game->collection[i][j]->getChessPieceColor() == team ) {
                  break;
              }
              else
              {
                  location.append(game->collection[i][j]);
                  if(boxSetting(location.last()))
                      break;
               }

       }


}


