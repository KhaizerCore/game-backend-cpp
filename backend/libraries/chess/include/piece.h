#pragma once

typedef enum{
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
}piece_type;

class Piece{
    public:
        static Piece* newKing(int pos_x, int pos_y);
        static Piece* newQueen(int pos_x, int pos_y);
        static Piece* newRook(int pos_x, int pos_y);
        static Piece* newKnight(int pos_x, int pos_y);
        static Piece* newBishop(int pos_x, int pos_y);
        static Piece* newPawn(int pos_x, int pos_y);



    private:
        Piece(piece_type pieceType, int pos_x, int pos_y);
        piece_type pieceType;

        int pos_x;
        int pos_y;

};