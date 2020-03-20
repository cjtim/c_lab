#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
using namespace std;

class Student : public Person {
private:
    double score;
public:
    Student (string firstname, string lastname, string id);
    void addScore(double score);
    string calculateGrade();
    double getScore();
    string toString(); // Override superclass 
};







#endif