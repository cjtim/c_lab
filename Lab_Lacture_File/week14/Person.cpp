#include "Person.h"
#include <iostream>
#include <sstream>
using namespace std;

Person::Person(string firstname, string lastname, string id){
    this->firstname = firstname;
    this->lastname = lastname;
    this->id = id;
}
void Person::changeName(string firstname, string lastname){
    this->firstname = firstname;
    this->lastname = lastname;
}
string Person::getName(){
    return firstname + " " + lastname;
}
string Person::toString(){
    stringstream ss;
    ss << "Firstname: " << firstname 
       << "Lastname: "  << lastname
       << "ID: " << id;
    return ss.str();
}
