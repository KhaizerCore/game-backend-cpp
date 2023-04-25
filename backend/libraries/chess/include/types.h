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

enum piece_color_t{
    BLACK,
    WHITE
};
typedef enum piece_color_t piece_color;

struct position_t{
    int x;
    int y;
};
typedef struct position_t position;