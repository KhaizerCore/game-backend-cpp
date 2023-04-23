#include <string>
#include <iostream>
#include <vector>

#include <main-lobby.h>
#include <person.h>


int main(){
    
    Lobby *lobby = new Lobby;

    for (int i = 0; i < 100; i++){
        string s = to_string(i);
        Person *p = new Person(s);
        lobby->join(p);
        lobby->join(p);
    }


    for (int i = 0; i < 100; i++){
        Person *p = lobby->people[lobby->people.size() - 1];
        lobby->leave(p);
        lobby->leave(p);
    }

    

}