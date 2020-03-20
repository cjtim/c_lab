#include <iostream>
using namespace std;

class Student{
private: //Attribute
    string name;
    double score;
public:
    // Getter
    string getName(){
        return name;
    }
    double getScore(){
        return score;
    }
    //Setter
    void setName(string name){
        this->name = name; // This is Pointer
    }

};

int main(){
    Student stop;
    stop.setName("stop");
    cout << stop.getName() << endl;
}