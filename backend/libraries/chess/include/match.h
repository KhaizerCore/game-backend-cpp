#pragma once

#include <person.h>
#include <board.h>

using namespace std;

class Match{
    public:
        Match();

        
    private:
        Person playerWhites(string username);
        Person playerBlacks(string username);

        

        Board *board;
};