#pragma once

#include <chess-player.h>
#include <person.h>
#include <board.h>
#include <types.h>

using namespace std;

class Match{
    public:
        Match(ChessPlayer *playerWhites, ChessPlayer *playerBlacks);
        Board *board;

        int begin();
        
        
    private:
        ChessPlayer *playerWhites;
        ChessPlayer *playerBlacks;

        

        
};