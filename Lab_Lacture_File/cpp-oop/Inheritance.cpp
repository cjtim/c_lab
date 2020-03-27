#include <iostream>
using namespace std;
class People {
protected:
    string name;
public:
    People(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
};

class Teacher :public People {
private:
    string roomid;
public:
    Teacher(string name, string roomid)
        :People(name)
    {
        this->name = name;
        this->roomid = roomid;
    }
};
class Student : public People{
private:
    string id;
public:
    Student(string name, string id)
        :People(name)
    {
        this->name = name;
        this->id = id;
    }
};

int main(){
    People cleaner("Somjai");
    Teacher AJChakrit("Chakrit", "7xx");
    Student jinna("Jinna", "621040xxxx"); 

    cout << "Cleaner name: " << cleaner.getName() << endl;
    cout << "Teacher name: " << AJChakrit.getName() << endl;
    cout << "Student name: " << jinna.getName() << endl;

}