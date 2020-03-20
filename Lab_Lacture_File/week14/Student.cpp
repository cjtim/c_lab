#include<iostream>
#include <sstream>
#include "Person.h"
#include "Student.h"
using namespace std;

Student::Student(string firstname, string lastname, string id)
    : Person (firstname, lastname, id){
        score = 0;
}

void Student::addScore(double score){
    if (score > 0){
        this->score = score;
    }
}

string Student::calculateGrade(){
    if(score > 80) return "A";
    if (score > 70) return "B+";
    return "F";
}
double Student::getScore(){
    return score;
}
string Student::toString(){
    stringstream ss;
    ss << Person::tostring
}