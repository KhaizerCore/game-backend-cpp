#include <piece.h>

using namespace std;

Piece::Piece(piece_type pieceType, int pos_x, int pos_y){
    this->pieceType = pieceType;
    this->pos_x = pos_x;
    this->pos_y = pos_y;
}

Piece* Piece::newKing(int pos_x, int pos_y){
    Piece * piece = new Piece(KING, pos_x, pos_y);

    return piece;
}

Piece* Piece::newQueen(int pos_x, int pos_y){
    Piece * piece = new Piece(QUEEN, pos_x, pos_y);

    return piece;
}

Piece* Piece::newRook(int pos_x, int pos_y){
    Piece * piece = new Piece(ROOK, pos_x, pos_y);
    
    return piece;
}

Piece* Piece::newKnight(int pos_x, int pos_y){
    Piece * piece = new Piece(KNIGHT, pos_x, pos_y);

    return piece;
}

Piece* Piece::newBishop(int pos_x, int pos_y){
    Piece * piece = new Piece(BISHOP, pos_x, pos_y);

    return piece;
}

Piece* Piece::newPawn(int pos_x, int pos_y){
    Piece * piece = new Piece(PAWN, pos_x, pos_y);

    return piece;
}
