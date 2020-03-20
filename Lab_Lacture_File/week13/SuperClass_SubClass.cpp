#include <iostream>
using namespace std;

class Person{
private:
    string name;
public:
    // Constructor
    Person(string name){
        this->name = name;
    }

    void changeName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
};

class Student: public Person {
private:
    // string name; // มีใน SuperClass แล้ว
    double score;
public:
    Student(string name) : Person(name){
        score = 0;
    }

    double getScore(){
        return score;
    }

    void addScore(double score){
        if(score > 0) this->score += score;
    }
};


int main(){
    Person jack("Jack");
    cout << jack.getName() << endl;
    // cout << jack.getScore(); // Error SuperClass cannot call function from subclass
    Student korn("Thanalorn");
    cout << korn.getName() << endl; //SubClass can call function from superClass
    korn.addScore(1);
    cout << korn.getScore() << endl; // SubClass can call function from itself
}