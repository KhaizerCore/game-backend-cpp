#include <board.h>

#include <iostream>
using namespace std;

int Board::resetPiecesTaken()
{
    this->black_pieces_taken = {};
    this->white_pieces_taken = {};
}

Board::Board()
{
    this->resetPiecesTaken();
}

Board::Board(vector<vector<Piece*>> board_matrix)
{
    this->resetPiecesTaken();
    this->board_matrix = board_matrix;
}

Piece* Board::getPieceInPosition(position p)
{
    return this->board_matrix[p.y][p.x];
}

int Board::movePieceInBoard(Board * board, position initial_position, position final_position){
    Piece * piece_to_be_moved = board->getPieceInPosition(initial_position);

    if (NULL == piece_to_be_moved) { return -1; }

    // se a casa destino estiver vazia    
    if (board->getPieceInPosition(final_position) == NULL) {
                
        board->board_matrix[initial_position.y][initial_position.x] = NULL;

        board->board_matrix[final_position.y][final_position.x] = piece_to_be_moved;

        piece_to_be_moved->setEverMovedTrue();

    }
    else // se a casa destino contiver uma peça (será inimiga devido a validação), toma a posição e a peça que estava no local jogando no respectivo array de peças tomadas
    {
        Piece *piece_taken = board->getPieceInPosition(final_position);

        if (piece_taken->isWhite())
        {
            board->white_pieces_taken.push_back(piece_taken);
        }
        else
        {
            board->black_pieces_taken.push_back(piece_taken);
        }

        board->board_matrix[initial_position.y][initial_position.x] = NULL;

        board->board_matrix[final_position.y][final_position.x] = piece_to_be_moved;

        piece_to_be_moved->setEverMovedTrue();
    }

    return 0;
}

/**
 * Must be used after movement basic validation is successfull
*/
bool Board::CheckToItselfAfterMovement(ChessPlayer *player, position initial_position, position final_position){
    vector<vector<Piece*>> board_matrix_sim;

    // copy this->board values to board_matrix_sim that will be used to simulate movements
    for(int y = 0; y < this->board_matrix.size(); y++){
        board_matrix_sim.push_back(vector<Piece*>{});
        for (int x = 0; x < this->board_matrix[y].size(); x++){
            Piece * piece = this->board_matrix[y][x];
            if (NULL == piece) {
                board_matrix_sim[y].push_back(NULL);
            }else{
                board_matrix_sim[y].push_back(piece->clone());
            }
        }
    }
    
    // copied board that will be used in simulation
    Board *simulated_board = new Board(board_matrix_sim);

    // make the planned movement
    Board::movePieceInBoard(simulated_board, initial_position, final_position);

    // find current player's King position
    position current_player_kings_position;
    for(int y = 0; y < simulated_board->board_matrix.size(); y++){
        for (int x = 0; x < simulated_board->board_matrix[y].size(); x++){
            Piece * piece = simulated_board->board_matrix[y][x];
            if (NULL != piece){
                // piece is an instance of King and piece's color is the same as player's 
                if (piece->isKing() && (piece->getColor() == player->pieces_color)){
                    current_player_kings_position.y = y;
                    current_player_kings_position.x = x;
                }
            }
        }
    }

    // verifies for each enemy piece, if they have a valid movement to current player's king
    for(int y = 0; y < simulated_board->board_matrix.size(); y++){
        for (int x = 0; x < simulated_board->board_matrix[y].size(); x++){
            Piece * piece = simulated_board->board_matrix[y][x];
            if (NULL != piece){
                if (piece->getColor() != player->pieces_color){
                    if (piece->validateMovement(simulated_board, position{.x = x, .y = y}, current_player_kings_position)){
                        delete simulated_board;
                        return true;
                    }
                }                
            }
        }
    }

    delete simulated_board;
    return false;
}

int Board::validateAndMovePiece(ChessPlayer *player, position initial_position, position final_position)
{
    Piece * piece_to_be_moved = this->getPieceInPosition(initial_position);
    
    if (NULL == piece_to_be_moved) { return -1; }
    
    // Verifica se a cor das peças do jogador bate com a da peça a ser movida
    if (player->pieces_color != piece_to_be_moved->getColor()) { return -1; }

    // valida o movimento baseado na regra de cada peça
    if (piece_to_be_moved->validateMovement(this, initial_position, final_position) == false) { return -1; }

    if (CheckToItselfAfterMovement(player, initial_position, final_position)){ return -1; }

    if(Board::movePieceInBoard(this, initial_position, final_position) == -1) { return -1; }
    
}

Board* Board::newEmptyBoard()
{
    Board * board = new Board();  

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

    // Invert declaration to fit visualization in final matrix
    for (int y = board_initial_conditions.size() - 1; y >= 0 ; y--){   
        vector<Piece *> empty_vector = {};
        board->board_matrix.push_back(empty_vector);
    }

    for (int y = board_initial_conditions.size() - 1; y >= 0 ; y--){
        int yf = CHESS_TABLE_DIMENSION_X - 1 - y;
        for (int x = 0; x < board_initial_conditions[y].size(); x++){
            pair<int, int> position_condition = board_initial_conditions[y][x];

            // cout << "{" << position_condition.first << ", " << position_condition.second << "} ";

            Piece *piece;

            switch (position_condition.first)
            {
                case ROOK:
                    piece = position_condition.second == WHITE ? (new Rook())->white() : (new Rook())->black();
                break;
                
                case KNIGHT:
                    piece = position_condition.second == WHITE ?  (new Knight())->white() :  (new Knight())->black();
                break;

                case BISHOP:
                    piece = position_condition.second == WHITE ? (new Bishop())->white() : (new Bishop())->black();
                break;

                case QUEEN:
                    piece = position_condition.second == WHITE ? (new Queen())->white() : (new Queen())->black();
                break;

                case KING:
                    piece = position_condition.second == WHITE ? (new King())->white() : (new King())->black();
                break;

                case PAWN:
                    piece = position_condition.second == WHITE ? (new Pawn())->white() : (new Pawn())->black();
                break;

                case EMPTY:
                    piece = NULL;
                break;

                default:
                    cout << "Failed to exec newEmptyBoard() - err[1]" << endl;
                    return NULL;
                break;
            }
            
            board->board_matrix[yf].push_back(piece);
        }

        // cout << endl;
    }

    return board;
}

void ClearCLI()
{
    #if defined _WIN32
        system("cls");
        //clrscr(); // including header file : conio.h
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
        //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

void Board::printBoard(){
    ClearCLI();

    for (int y = this->board_matrix.size() - 1; y >= 0; y--){
        cout << y << " | ";
        for (int x = 0; x < this->board_matrix[y].size(); x++){
            if (NULL != this->board_matrix[y][x]){
                Piece * piece = this->board_matrix[y][x];
                cout << piece->getSymbol() << " | ";
            }else{
                cout << " " << " | ";
            }
        }
        cout << endl;
    }
    cout << "    ";
    for (int x = 0; x < CHESS_TABLE_DIMENSION_X; x++){
        cout << x << "   ";
    }
    cout << endl << endl;

    cout << "Black pieces taken --> {";
    for (int p = 0; p < this->black_pieces_taken.size(); p++){
        Piece * piece = this->black_pieces_taken[p];
        cout << piece->getSymbol() << " ";
    } cout << "}" << endl;

    cout << "White pieces taken --> {";
    for (int p = 0; p < this->white_pieces_taken.size(); p++){
        Piece * piece = this->white_pieces_taken[p];
        cout << piece->getSymbol() << " ";
    } cout << "}" << endl;

    cout << endl << endl;
}

bool Board::pieceInPositionExists(position pos){
    return this->board_matrix[pos.y][pos.x] != NULL;
}

bool Board::opponentInPosition(piece_color mover_color, position pos){
    if (this->board_matrix[pos.y][pos.x] == NULL) { return false; }
    if (this->board_matrix[pos.y][pos.x]->getColor() == mover_color) { return false; }
    return true;
}

bool Board::friendlyInPosition(piece_color mover_color, position pos){
    if (this->board_matrix[pos.y][pos.x] == NULL) { return false; }
    if (this->board_matrix[pos.y][pos.x]->getColor() != mover_color) { return false; }
    return true;
}
