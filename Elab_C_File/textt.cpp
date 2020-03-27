#include <iostream>
using namespace std;
int main(){
    string input;
    while(1){
        cin >> input;
        if(input != "Jinna"){
            cout << "Authenticate Failed";
            continue;
        }
        cout << "Welcome Mr.Jinna";
        break;
    }
}