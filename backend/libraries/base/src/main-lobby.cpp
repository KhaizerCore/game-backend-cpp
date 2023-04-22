#include <iostream>
using namespace std;

#include <main-lobby.h>
#include <person.h>


Lobby::Lobby(){
    /**
     * Clear and free memory used by vector
    */
    this->people.clear();
    this->people.shrink_to_fit();


}

int Lobby::join(Person *person){
    
    {
        unique_lock<mutex> lck(this->lock);
        
        for (Person * p : this->people){
            if (person == p){
                cout << "Player already in lobby! (Can't join)" << person->username.c_str() << endl;
                return -1;
            }
        }

        cout << "Player joined successfully! p:" << person->username.c_str() << endl;
        this->people.push_back(person);
    }
    return 0;
}

int Lobby::leave(Person *person){

    {
        unique_lock<mutex> lck(this->lock);

        for (int i = 0; i < this->people.size(); i++){
            Person * p = this->people[i];

            if (p == person){
                this->people.erase(this->people.begin() + i);
                cout << "Player left successfully!" << person->username.c_str() << endl;
                return 0;
            }

            // delete p;
        }
    }

    cout << "Player already not in lobby! (Can't leave)" << person->username.c_str() << endl;

    return -1;
}