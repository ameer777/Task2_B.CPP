#include "Board.hpp"

using namespace std;

namespace ariel{

   void Board::post(unsigned int xwidth , unsigned int yhight , Direction d , string s){
       
       checkAndUpdate_limits(xwidth,yhight,s.length() , d);

       unsigned int i = 0;
       if(d == Direction::Horizontal){
           for(; i < s.length(); i++){
               myBoard[xwidth][yhight++] = s.at(i);
           }
           return;
       }

       for(; i < s.length() ; i++){
           myBoard[xwidth++][yhight] = s.at(i);
       }
   }

   string Board::read(unsigned int xwidth ,unsigned int yhight , Direction d , unsigned num){

       string str_ans;
       unsigned int i = 0;
       if(d == Direction::Horizontal){
            for(; i < num; i++){
                if(myBoard.find(xwidth) != myBoard.end() && myBoard[xwidth].find(yhight) != myBoard[xwidth].end()){ 
                     str_ans += myBoard.at(xwidth).at(yhight);
                }
                else{
                    str_ans.append("_"); 
                }
                
                yhight++;// becouse d = Direction::Horizontal -> Horizontal
            }
            return str_ans;;
        }

        //if d = Direction::Horizontal -> Vertical
        for(; i < num ; i++){
            if(myBoard.find(xwidth) != myBoard.end() && myBoard[xwidth].find(yhight) != myBoard[xwidth].end()){
                str_ans += myBoard.at(xwidth).at(yhight);
            }
            else{
                str_ans.append("_");
            }

           xwidth++; // becouse d = Direction::Horizontal -> Vertical
        }
       return str_ans;
   } 
   
   void Board::show(){

       for(unsigned int i = end_xWidth; i < start_xWidth;i++){
           for(unsigned int j = end_yLength; j < start_yLength ; j++){

               if(myBoard.find(i) != myBoard.end() && myBoard[i].find(j) != myBoard[i].end()){
                   cout << myBoard.at(i).at(j);
               }
               else{
                 cout << "_";
               }  
           }
           cout << endl;
       }

   }

   void Board::checkAndUpdate_limits(unsigned int x, unsigned int y , unsigned int length , Direction d){

       /* if the Direction is Horizontal --> check the limits According to Horizontal Direction
          and update the limits of the board */
       if(d == Direction::Horizontal){

           if(start_xWidth < x){
                start_xWidth = x;
             }

           if(start_yLength < y + length){
                start_yLength = y + length;
             }

           if(x < end_xWidth){
                end_xWidth = x;
             }

           if(y < end_yLength){
                end_yLength = y;
             }

       }

       /* if the Direction is Vertical --> check the limits According to Vertical Direction
          and update the limits of the board */
       if(d == Direction::Vertical){

           if(start_xWidth < x + length){
                start_xWidth = x + length;
             }

           if(start_yLength < y){
                start_yLength = y;
             } 

           if(x < end_xWidth){
                end_xWidth = x;
             }
           if(y < end_yLength){
                end_yLength = y;
             }

       }

   }

}
