#ifndef PERSON_H_  
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
    string firstname;
    string lastname;
    string id;
public:
    Person(string firstname, string lastname, string id);
    void changeName(string first, string last);
    string getName();
    virtual string toString();
};

#endif