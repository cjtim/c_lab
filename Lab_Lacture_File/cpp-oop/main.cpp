#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

void print(Person* person) {
    cout << person->toString() << endl;
}

int main() {
    // Person ps("First", "Last", "1234");
    // cout << ps.getName() << endl;
    // ps.changeName("First1", "Last");
    // cout << ps.getName() << endl;

    // Student dew("Dew", "Wanida", "62104AAAAA");
    // Student* sp = new Student("Dew2", "Wanida2", "62104AAAAB");
    // dew.addScore(100);
    // cout << dew.getName() << ": " << dew.getScore() << endl;
    // cout << dew.calculateGrade() << endl;

    // Teacher saac("Saac", "Sornchai", "D14XX");
    // cout << saac.getName() << endl;
    // saac.giveScore(&dew, 100);
    // cout << dew.getName() << ": " << dew.getScore() << endl;

    Student s1("Student S1", "...", "ID4");
    s1.addScore(100);

    Person* people[10];
    people[0] = new Student("A", "B", "ID1");
    people[1] = new Teacher("Teacher A", "Lastname A", "ID2");
    people[2] = new Student("Student C", "Lastname C", "ID3");
    people[3] = &s1;

    for (int i = 0; i < 4; i++) {
        
        print(people[i]);
    }

    // OOP is A-PIE
    // Polymorphism 
}