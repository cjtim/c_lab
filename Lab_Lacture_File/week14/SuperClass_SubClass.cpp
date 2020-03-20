#include <iostream>
using namespace std;

class Person{
private:
    string firstname;
    string lastname;
    string id;
public:
    // Constructor
    Person(string firstname, string lastname, string id);
    void changeName(string first, string last);
    string getName();
};
// :: Scope Resolution Operator
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
    return firstname;
}

class Teacher : public Person{
private:

public:
    Teacher(string firstname, string lastname, string id);
    void giveScore(Student *student, double score);
};



class Student: public Person {
private:
    // string name; // มีใน SuperClass แล้ว
    double score;
public:
    Student(string firstname, string lastname, string id) 
        : Person(firstname, lastname, id){
        score = 0;
    }
    double getScore(){
        return score;
    }
    void addScore(double score){
        if(score > 0){
            this->score += score;
        }
    }
};


int main(){
    Person jack("Jack","Rushsel", 1);
    cout << jack.getName() << endl;
    // cout << jack.getScore(); // Error SuperClass cannot call function from subclass
    Student korn("Thanalorn","aka",2);
    cout << korn.getName() << endl; //SubClass can call function from superClass
    korn.addScore(1);
    cout << korn.getScore() << endl; // SubClass can call function from itself
}