#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string name;
    cin >> name;
    double salary;
    cin >> salary;
    int month = 1;
    double tmp = 0, plus = salary*12;
    while (month <= 12){
        cin >> tmp;
        plus += tmp*0.15;
        month++;
    }
    cout << name;
    printf(" %.2lf\n", plus);
}