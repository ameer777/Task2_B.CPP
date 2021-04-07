#include<stdio.h>
#include"Board.cpp"

using ariel::Direction;
using namespace std;


int main()
{
    ariel::Board board;
	board.post(/*row=*/100, /*column=*/100+15, Direction::Horizontal, "Bennet");
	board.post(/*row=*/100+1, /*column=*/100+20, Direction::Horizontal, "Will");
	board.post(/*row=*/100+2, /*column=*/100+24, Direction::Horizontal, "recommend");
	board.post(/*row=*/100+3, /*column=*/100+33, Direction::Horizontal, "to");
	board.post(/*row=*/100+4, /*column=*/100+35, Direction::Horizontal, "?");
	board.post(/*row=*/100+10, /*column=*/100, Direction::Horizontal, "bitcoin is");
	board.post(/*row=*/100+11, /*column=*/100+5 ,Direction::Vertical, "a digital");
	board.post(/*row=*/100+20, /*column=*/100+3 ,Direction::Horizontal, "currency");
	board.post(/*row=*/100+10, /*column=*/100+25, Direction::Horizontal, "SALE in my Market");
	board.post(/*row=*/100+11, /*column=*/100+28, Direction::Vertical, "car for sale");
	board.post(/*row=*/100+18, /*column=*/100+31, Direction::Horizontal, "");
	board.post(/*row=*/100+0, /*column=*/100+0, Direction::Horizontal, "Hello!");
	board.post(/*row=*/100+0, /*column=*/100+7, Direction::Vertical, "CPP");
	board.post(/*row=*/100+2, /*column=*/100+8, Direction::Horizontal, "ING");
	board.post(/*row=*/100+3, /*column=*/100+12, Direction::Vertical, "crazy");
	board.post(/*row=*/100+5, /*column=*/100+13, Direction::Horizontal, "meer massalha");
	board.post(/*row=*/100+10, /*column=*/100+13, Direction::Horizontal, "tik");
	board.post(/*row=*/100+10, /*column=*/100+16, Direction::Vertical, "tok");
	board.post(/*row=*/100+15, /*column=*/100+22, Direction::Vertical, "world!");

	board.show();

}
   