#ifndef board_h
#define board_h



#include <vector>
#include <utility>
using namespace std;

#include <types.h>
#include <chess-player.h>
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
        int validateAndMovePiece(ChessPlayer *player, position initial_position, position final_position);
        Board *clone();

    private:
        Board();
        Board(vector<vector<Piece*>> board_matrix);
        
        static int id;
        vector<vector<Piece*>> board_matrix;        
        vector<Piece*> white_pieces_taken;
        vector<Piece*> black_pieces_taken;
        
        int resetPiecesTaken();
        static int movePieceInBoard(Board *board, position initial_position, position final_position);
        bool CheckToItselfAfterMovement(ChessPlayer *player, position initial_position, position final_position);
        Piece * getPieceInPosition(position p);

};

#endif