#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person(string firstname, string lastname, string id) {
    this->firstname = firstname;
    this->lastname = lastname;
    this->id = id;
}

void Person::changeName(string first, string last) {
    firstname = first;
    lastname = last;
}

string Person::getName() {
    return firstname + " " + lastname;
}

string Person::toString() {
    stringstream ss;
    ss << "Firstname: " << firstname
       << ", Lastname: " << lastname
       << ", ID: " << id;
    return ss.str();
}