#include <iostream>
#include <sstream>

using namespace std;

// OOP is A-PIE
// E = Encapsulation การเก็บข้อมูลแบบ private

class Student{
private:            // Encapsulation ไม่ต้องรู้ว่าข้างในเก็บอะไร แต่มีวิธีในการเข้าถึงมัน
    string name;    //field ต้องอยู่ที่ private ไม่งั้นโดนหักคะแนน
    double score;
public:
    // Constructor
        // explicit Student(){
        //     name = "Tim";
        //     score = 0;
        // }
    Student(string name){
        this->name = name;
        this->score = 0;
    }

    //Method -----> function
    // อยากจะเปลื่ยนค่า field ให้สร้าง function ขึ้นมา
    void addScore(double score){
        if (score > 0){    // this->score += score > 0 ? score : 0;
            this->score += score; // หมายถึง score ใน field  += scoreของparameter
        }
    }
    // Getter
    double getScore(){
        return score;
    }
    string getName(){
        return name;
    }
    // Setter
    void setName(string name){
        this->name = name;
    }
    string ToString(){
        stringstream ss;
        ss << name << ":" << score ;
        return ss.str();
    }
};
int main(){
    Student Tim("timmy");
    cout << "function getScore is " << Tim.getScore() << endl;
    cout << "function getName is " << Tim.getName() << endl;
    cout << Tim.ToString() << endl << endl;
    
    cout << "Using Pointer" << endl;
    Student *sp;
    sp = new Student("One"); 
    

    Student *students[20];
    students[0] = new Student("Two");
    students[1] = &Tim;
    students[2] = sp;
    
    students[0]->addScore(100);
    students[1]->addScore(200);
    students[2]->addScore(300);

    for (int i = 0; i < 3; i++){
        cout << "students[" << i << "] = " << students[i]->getName() << "Score is " << students[i]->getScore() << endl;
    }
    

}