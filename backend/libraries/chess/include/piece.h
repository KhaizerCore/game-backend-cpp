#pragma once

#define EMPTY -1


typedef enum{
    KING,
    QUEEN,
    ROOK,
    KNIGHT,
    BISHOP,
    PAWN
}piece_type;

typedef enum{
    BLACK,
    WHITE
}piece_color;

class Piece{
    public:
        static Piece* newKing(int pos_x, int pos_y);
        static Piece* newQueen(int pos_x, int pos_y);
        static Piece* newRook(int pos_x, int pos_y);
        static Piece* newKnight(int pos_x, int pos_y);
        static Piece* newBishop(int pos_x, int pos_y);
        static Piece* newPawn(int pos_x, int pos_y);

        Piece* black();
        Piece* white();

    private:
        Piece(piece_type type, int pos_x, int pos_y);
        
        piece_type type;
        piece_color color;

        int pos_x;
        int pos_y;

};