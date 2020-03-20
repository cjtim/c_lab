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
   Time a(23,0,0);
   Time b(86400);
   
   cout << a.toString() << endl;
   cout << b.toString() << endl;
   cout << a.getDuration() << endl;
   cout << b.getDuration() << endl;
   cout << "Subtract " << a.subtract(b) << endl;
   cout << "Subtract " << b.subtract(a) << endl;

   
   
}
