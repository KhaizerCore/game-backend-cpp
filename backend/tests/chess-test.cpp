#include <chess-player.h>
#include <match.h>

#include <iostream>
using namespace std;

int main(){

    ChessPlayer *playerWhites = new ChessPlayer();
    ChessPlayer *playerBlacks = new ChessPlayer();

    Match match(playerWhites, playerBlacks);

    match.begin();

    // cout << endl;

    // match.board->printBoard();

    // cout << endl << "test done!" << endl;
}