#include <board.h>

#include <iostream>
using namespace std;

Board::Board(){

}

Board* Board::newEmptyBoard(){
    Board * board = new Board();  

    cout << "1" << endl;

    vector<vector<pair<int, int>>> board_initial_conditions = {
        {{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}},
        {{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}},
        {{EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}},
        {{EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}},
        {{EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}},
        {{EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}, {EMPTY, EMPTY}},
        {{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}},
        {{ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE}, {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE}}
    };

    for (int y = board_initial_conditions.size() - 1; y >= 0 ; y--){   
        vector<Piece *> empty_vector = {};
        board->board_matrix.push_back(empty_vector);
    }

    cout << "INVERTED BOARD" << endl;
    for (int y = board_initial_conditions.size() - 1; y >= 0 ; y--){        
        for (int x = 0; x < board_initial_conditions[y].size(); x++){
            pair<int, int> position_condition = board_initial_conditions[y][x];

            cout << "{" << position_condition.first << ", " << position_condition.second << "} ";

            Piece *piece;

            switch (position_condition.first)
            {
                case ROOK:
                    piece = Piece::newRook(0, 0); 
                break;
                
                case KNIGHT:
                    piece = Piece::newKnight(0, 0); 
                break;

                case BISHOP:
                    piece = Piece::newBishop(0, 0); 
                break;

                case QUEEN:
                    piece = Piece::newQueen(0, 0); 
                break;

                case KING:
                    piece = Piece::newKing(0, 0); 
                break;

                case PAWN:
                    piece = Piece::newPawn(0, 0); 
                break;

                case EMPTY:
                    piece = NULL;
                break;

                default:
                    cout << "Failed to exec newEmptyBoard() - err[1]" << endl;
                    return NULL;
                break;
            }

            if (NULL != piece){
                switch (position_condition.second)
                {
                    case BLACK:
                        piece->black();
                    break;

                    case WHITE:
                        piece->white();
                    break;
                    
                    default:
                        cout << "Failed to exec newEmptyBoard() - err[2]" << endl;
                        return NULL;
                    break;
                }
            }
            

            board->board_matrix[y].push_back(piece);
        }

        cout << endl;
    }

    return board;
}

void Board::printBoard(){

    for (int y = this->board_matrix.size() - 1; i >= 0; y--){

        for (int x = 0; x < this->board_matrix[y].size(); x++){
            
            Piece * piece = this->board_matrix[y][x];


            cout << "| " <<  piece->

        }

    }

}