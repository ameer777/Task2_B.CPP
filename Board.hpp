#include <iostream>
#include <stdexcept>
#include <string>
#include <map>
#include "Direction.hpp"


namespace ariel{

class Board{

private:
    std::map<unsigned int, std::map<unsigned int,char>> myBoard;
    unsigned int start_xWidth , start_yLength , end_xWidth , end_yLength;
public:
Board(){
    start_xWidth = 0;
    end_xWidth = 999999995;
    start_yLength = 0;
    end_yLength = 999999995;
};
void post(unsigned int xwidth ,unsigned int yhight , Direction d ,std::string s);
std::string read(unsigned int xwidth ,unsigned int yhight , Direction d , unsigned int num);
void show();

/* checkAndUpdate_limits function : 
   receives :- 
   x = the row of the post
   y = the column of the post
   length = the length of the post
   d = in this post wich Direction we are used (Horizontal or Vertical)
   and update the limits according to the Direction */
void checkAndUpdate_limits(unsigned int x, unsigned int y , unsigned int length , Direction d);
};

}