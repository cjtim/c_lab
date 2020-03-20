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
        if(second >= 60){
            this->minute += 1;
            this->second -= 60;
        }
        else{
            this->second = second;
        }

        if(minute >= 60){
            this->hour += 1;
            this->minute -= 60;
        }
        else{
            this->minute = minute;
        }

        if(hour >= 24){
            this->hour = hour - 24;
        }
        else{
            this->hour = hour;
        }
    }
    Time(int duration){
        int hour = duration/3600;
        duration -= hour*3600;
        int minute = duration/60;
        duration -= minute*60;
        int second = duration; 
        if(second >= 60){
            this->minute += 1;
            this->second -= 60;
        }
        else{
            this->second = second;
        }

        if(minute >= 60){
            this->hour += 1;
            this->minute -= 60;
        }
        else{
            this->minute = minute;
        }

        if(hour >= 24){
            this->hour = hour - 24;
        }
        else{
            this->hour = hour;
        }
    }
    void setHour(int hr){
        hour = hr;
    }
    void setMinute(int min){
        minute = min;
    }
    void setSecond(int sec){
        second = sec;
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
        // int all = other.getDuration();
        // hour += all/3600;
        // all -= (all/3600)*3600;
        // minute += all/60;
        // all -= (all/60)*60;
        // second += all;
        Time tmp(getDuration() + other.getDuration());
        return tmp;
    }
    int subtract(Time other){
        if( getDuration() - other.getDuration() < 0 ){
            return 86400 + getDuration() - other.getDuration();
        }
        else{
            return getDuration() - other.getDuration();
        }
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
        stringstream ss;
        ss << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') <<second;
        return ss.str();
    }
};


int main()
{
   // implement program to test class Time
   Time t1(0,0,1);
   Time t2(25,0,0);
   
   cout << t1.toString() << endl;
   cout << t2.toString() << endl;
   cout << t1.getDuration() << endl;
   cout << t2.getDuration() << endl;
   cout << "Subtract " << t1.subtract(t2) << endl;
   cout << "Subtract " << t2.subtract(t1) << endl;
   
}
