#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

Teacher::Teacher(string firstname, string lastname, string id)
        : Person(firstname, lastname, id) {

}

void Teacher::giveScore(Student* student, double score) {
    student->addScore(score);
}