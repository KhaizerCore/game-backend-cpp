#include <match.h>

#include <iostream>
using namespace std;

#define EXIT -1
#define RUN_MATCH 1

Match::Match(ChessPlayer *playerWhites, ChessPlayer *playerBlacks){
    
    this->playerWhites = playerWhites;
    this->playerWhites->pieces_color = WHITE;

    this->playerBlacks = playerBlacks;
    this->playerBlacks->pieces_color = BLACK;

    this->board = Board::newEmptyBoard();
}

int Match::begin(){
    
    int run_match = RUN_MATCH;

    // validar jogadores

    // printar board
    this->board->printBoard();

    while(run_match == RUN_MATCH){

        // esperar um movimento valido das brancas
        int valid_white_move = -1;
        while(valid_white_move != 0){
            position wp0;
            position wpf;

            cout << "Mover brancas" << endl;
            cout << "De: x = "; cin >> wp0.x; cout << "   y = "; cin >> wp0.y; cout << endl;
            cout << "Para: x = "; cin >> wpf.x; cout << "     y = "; cin >> wpf.y; cout << endl;   

            valid_white_move = this->board->validateAndMovePiece(this->playerWhites, wp0, wpf);

            // printar board
            this->board->printBoard();
        }

        

        // esperar um movimento valido das pretas
        int valid_black_move = -1;
        while(valid_black_move != 0){
            position bp0;
            position bpf;

            cout << "Mover pretas" << endl;
            cout << "De: x = "; cin >> bp0.x; cout << ", y = "; cin >> bp0.y; cout << endl;
            cout << "Para: x = "; cin >> bpf.x; cout << ", y = "; cin >> bpf.y; cout << endl;

            valid_black_move = this->board->validateAndMovePiece(this->playerBlacks, bp0, bpf);

            // printar board
            this->board->printBoard();
        }

    }

    return EXIT;
}
