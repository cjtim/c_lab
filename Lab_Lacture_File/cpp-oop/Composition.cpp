#include <iostream>
#include <sstream>
using namespace std;

class People{
private:
    string name;
    int date;
    int month;
    int year;
public:
    People(string name, int date, int month, int year){
        this->name = name;
        this->date = date;
        this->month = month;
        this->year = year;
    }
    string getBirthday(){
        stringstream ss;
        ss << name <<" is born on " << date << "/" << month << "/" << year;
        return ss.str();
    }
};
int main(){
    People Jinna("Jinna", 1, 1, 2000);
    cout << Jinna.getBirthday() << endl;
}