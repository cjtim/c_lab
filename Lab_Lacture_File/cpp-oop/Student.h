#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include "Person.h"
using namespace std;


class Student : public Person {
private:
    double score;
public:
    Student(string firstname, string lastname, string id);

    void addScore(double score);

    string calculateGrade();

    double getScore();

    virtual string toString() override; // override
};

#endif