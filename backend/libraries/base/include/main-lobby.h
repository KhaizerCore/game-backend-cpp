#pragma once

#include <mutex>
#include <vector>
#include <string>
using namespace std;

#include <person.h>

class Lobby {
    public:
        int id;

        Lobby();        
        
        int join(Person *person); 
        int leave(Person *person);

        vector<Person *> people;
        

    private:
        // vector<Person *> people;
        mutex lock;
};