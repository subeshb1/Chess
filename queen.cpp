#include "queen.h"
#include "game.h"
extern Game *game;
Queen::Queen(QString team,QGraphicsItem *parent):ChessPiece(team,parent)
{
    setImage();
}

void Queen::setImage()
{
    if(side == "WHITE")
        setPixmap(QPixmap(":/images/queen1.png"));
    else
        setPixmap(QPixmap(":/images/queen.png"));
}


void Queen::moves()
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

        //For upper Left

         for(int i = row-1,j = col-1; i >= 0 && j >=0; i--,j--) {
           if(game->collection[i][j]->getChessPieceColor() == team ) {
               break;

           }
           else
           {
               location.append(game->collection[i][j]);
               if(boxSetting(location.last()) ){
                   break;
               }
           }
        }

         //For upper right

          for(int i = row-1,j = col+1; i >= 0 && j <= 7; i--,j++) {
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

          //For downward right

           for(int i = row+1,j = col+1; i <= 7 && j <= 7; i++,j++) {
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

           //For downward left

            for(int i = row+1,j = col-1; i <= 7 && j >= 0; i++,j--) {
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


}
