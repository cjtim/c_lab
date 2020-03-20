#include<iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main(){



    Person *people[10];
    people[0] = new Student("A", "B", "ID1");
    people[1] = new Teacher ("Teacher", "Lastname A", "ID2");\
    people[2] = new Student ("Student C", "Lastname C", "ID3");

    for (int i = 0; i < 3; i++){
        cout << people[i]->toString() << endl;
    }
    //  OOP is A-PIE 
    // Polymorphism
}