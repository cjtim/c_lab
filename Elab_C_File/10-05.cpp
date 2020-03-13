#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int hour, int minute, int second){
        this -> hour = hour;
        this -> minute = minute;
        this -> second = second;
    }
    Time(int duration){
        this->hour = duration/3600;
        duration -= hour*3600;
        this->minute = duration/60;
        duration -= minute*60;
        this->second = duration; 
    }
    int getDuration(){
        return hour*3600 + minute*60 + second;
    }
    Time add(Time other){
        
    }
    int subtract(Time other){

    }
    int equals(Time other){

    }
    string toString(){
        stringstream ss;
        return ss.str();
    }
};


int main()
{
   // implement program to test class Time
}
