#include <board.h>

#include <iostream>
using namespace std;

Board::Board(){

}

Board* Board::newEmptyBoard(){
    Board * board = new Board();  

    // vector<Piece> x1 = {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK};
    vector<Piece *> pieces = {Piece::newRook(0, 0), Piece::newKnight(0, 0), Piece::newBishop(0,0), Piece::newQueen(0,0)};

    vector<vector<piece_type>> board_pieces;

    pieceInfo{ .color = WHITE, .type = ROOK };



    // board_pieces = {
    //     {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK},
    //     {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
    //     {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK},
    //     {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK},
    //     {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK},
    //     {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK},
    //     {PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN, PAWN},
    //     {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK}
    // };
/**
 *     KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
*/
    return board;
}