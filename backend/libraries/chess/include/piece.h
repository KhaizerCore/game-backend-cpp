#ifndef piece_h
#define piece_h

#include <string>
#include <cstring>
#include <iostream>
#include <utility>
#include <vector>


#include <types.h>
#include <board.h>
class Board; // Forward declaration
// typedef struct position_t position;


class Piece{
    public:
        // static Piece* newKing();
        // static Piece* newQueen();
        // static Piece* newRook();
        // static Piece* newKnight();
        // static Piece* newBishop();
        // static Piece* newPawn();

        Piece* black();
        Piece* white();

        bool isBlack();
        bool isWhite();

        piece_color getColor();

        char * getSymbol();

        static const char * empty_symbol;
        static const char * const black_piece_symbols[];
        static const char * const white_piece_symbols[];

        bool hasEverMoved();
        void setEverMovedTrue();
        bool isKing();

        virtual bool validateMovement(Board * board, position initial_position,  position final_position);

        virtual Piece* clone();

        Piece(piece_type type);
        Piece(Piece *toBeCopied);

    private:

        bool everMoved;       
        
        piece_type type;
        piece_color color;

};

class King : public Piece{
    public:
        King();
        bool validateMovement(Board * board, position initial_position,  position final_position) override;
        Piece* clone() override;
};

class Queen : public Piece{
    public:
        Queen();
        bool validateMovement(Board * board, position initial_position,  position final_position) override;
        Piece* clone() override;
};

class Rook : public Piece{
    public:
        Rook();
        bool validateMovement(Board * board, position initial_position,  position final_position) override;
        Piece* clone() override;
};

class Knight : public Piece{
    public:
        Knight();
        bool validateMovement(Board * board, position initial_position,  position final_position) override;
        Piece* clone() override;
};

class Bishop : public Piece{
    public:
        Bishop();
        bool validateMovement(Board * board, position initial_position,  position final_position) override;
        Piece* clone() override;
};

class Pawn : public Piece{
    public:
        Pawn();
        bool validateMovement(Board * board, position initial_position,  position final_position) override;
        Piece* clone() override;
};

#endif