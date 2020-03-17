#include <iostream>
#include <cmath>
#include <string>

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
        hour = duration/3600;
        duration -= hour*3600;
        minute = duration/60;
        duration -= minute*60;
        second = duration; 
    }
    void setHour(int hr){
        this->hour = hr;
    }
    void setMinute(int min){
        this->minute = min;
    }
    void setSecond(int sec){
        this->second = sec;
    }
    int getDuration(){
        return hour*3600 + minute*60 + second;
    }
    int getHour(){
        return hour;
    }
    int getMinute(){
        return minute;
    }
    int getSecond(){
        return second;
    }
    Time add(Time other){
        Time tmp(other.getDuration()+getDuration());
        return tmp;
    }
    int subtract(Time other){
        return abs( getDuration() - other.getDuration() );
    }
    int equals(Time other){
        if(getDuration() == other.getDuration()){
            return 1;
        }
        else{
            return 0;
        }
    }
    string toString(){
        // stringstream ss;
        // ss << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') <<second;
        
        return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
    }
};


int main()
{
   // implement program to test class Time
   Time t1(02,02,02);
   Time t2(01,01,01);
   
   cout << t1.toString() << endl;
   cout << t2.toString() << endl;
   cout << t1.getDuration() << endl;
   cout << t2.getDuration() << endl;
   cout << "Subtract " << t1.subtract(t2) << endl;
   
}
