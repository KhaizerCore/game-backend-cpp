#include <person.h>

#include <iostream>
#include <uuid_v4.h>

using namespace std;

Person::Person(string username) {
    this->username = username;

    // UUIDv4::UUIDGenerator<mt19937_64> uuidGenerator;
    // UUIDv4::UUID uuid = uuidGenerator.getUUID();

    // this->username = uuid.str();
}

void Person::greet() {
    cout << "Hello, my username is " << endl;
}

int Person::login(string username, string password){
    
    return 0;
}