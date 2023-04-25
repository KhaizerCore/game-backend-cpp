#pragma once

#include <person.h>
#include <board.h>

using namespace std;

class Match{
    public:
        Match();

        Board *board;
        
    private:
        Person *playerWhites;
        Person *playerBlacks;

        

        
};