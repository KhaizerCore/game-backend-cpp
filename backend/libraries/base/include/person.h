#pragma once

#include <string>
using namespace std;

class Person {
    public:
        Person(string username);
        void greet();
        int login(string username, string password);

        string username;

    private:        
        string email;
        string password;
        int age;
};