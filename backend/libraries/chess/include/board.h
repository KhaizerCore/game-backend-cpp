#ifndef board_h
#define board_h



#include <vector>
#include <utility>
using namespace std;

#include <types.h>
#include <piece.h>
class Piece; // Forward declaration



#define CHESS_TABLE_DIMENSION_Y 8
#define CHESS_TABLE_DIMENSION_X 8

class Board{
    public:
        static Board * newEmptyBoard();
        void printBoard();
        bool pieceInPositionExists(position pos);
        bool opponentInPosition(piece_color mover_color, position pos);
        bool friendlyInPosition(piece_color mover_color, position pos);

    private:
        Board();
        static int id;
        vector<vector<Piece*>> board_matrix;
};

#endif