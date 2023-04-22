#include <board.h>

#include <iostream>
using namespace std;

Board::Board(){

}

Board* Board::newEmptyBoard(){
    Board * board = new Board();  

    board->_board = {
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
    };

    return board;
}