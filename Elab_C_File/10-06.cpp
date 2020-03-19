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
        string hr, min, sec;
        if(hour >= 10){hr = to_string(hour);}
            else{hr = string(1, '0').append(to_string(hour));}
        if (minute >= 10){min = to_string(minute);}
            else{min = string(1, '0').append(to_string(minute));}
        if(second >= 10){sec = to_string(second);}
            else{sec = string(1, '0').append(to_string(second));}
        return hr + ":" + min + ":" + sec;
    }
};


int main()
{
   // implement program to test class Time
   Time t1(10,02,02);
   Time t2(12,01,01);
   
   cout << t1.toString() << endl;
   cout << t2.toString() << endl;
   cout << t1.getDuration() << endl;
   cout << t2.getDuration() << endl;
   cout << "Subtract " << t1.subtract(t2) << endl;
   cout << "Subtract " << t2.subtract(t1) << endl;
   
   
}
