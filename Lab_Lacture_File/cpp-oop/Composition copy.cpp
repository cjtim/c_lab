#include <iostream>
#include <sstream>
using namespace std;
class Birthday{
private:
    int date;
    int month;
    int year;
public:
    Birthday(int date, int month, int year){
        this->date = date;
        this->month = month;
        this->year = year;
    }
    string getBirthday(){
        stringstream ss;
        ss << date << "/" << month << "/" << year;
        return ss.str();
    }
};
class People{
private:
    string name;
    Birthday birthday;
public:
    People(string name, Birthday birthday) 
        :name(name), birthday(birthday){
    }
    string getInfo(){
        stringstream ss;
        ss << name <<" is born on " << birthday.getBirthday();
        return ss.str();
    }
};
int main(){
    Birthday jinna_birthday( 1, 1, 2000);
    People Jinna("Jinna", jinna_birthday);
    cout << Jinna.getInfo() << endl;
}