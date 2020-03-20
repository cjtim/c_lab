#ifndef TEACHER_H_
#define TEACHER_H_

#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

class Teacher : public Person {
private:

public:
    Teacher (string firstname, string lastname, string id);

    void giveScore(Student* student, double score);

};

#endif