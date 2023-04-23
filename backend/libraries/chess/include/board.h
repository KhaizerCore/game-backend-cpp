#pragma once

#include <vector>
#include <utility>
using namespace std;

#include <piece.h>

#define CHESS_TABLE_DIMENSION_Y 8
#define CHESS_TABLE_DIMENSION_X 8

class Board{
    public:
        static Board * newEmptyBoard();

    private:
        Board();
        static int id;
        vector<vector<Piece *>> board_matrix;
};