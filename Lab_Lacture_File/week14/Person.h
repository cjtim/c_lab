#ifndef PERSON_H_   //include guard
#define PERSON_H_


#include <iostream>
using namespace std;

class Person{
private:
    string firstname;
    string lastname;
    string id;
public:
    Person(string first, string last, string id);
    void changeName(string first, string last);
    string getName();
    string toString();
};
#endif