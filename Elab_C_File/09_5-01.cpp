#include <iostream>
using namespace std;

int main() {
    int num = 0, count = 0;
    cin >> num;
    for (int i = 0 ; num != 0; i++){
        if (num % 2 == 0){
            num /= 2;
            count += 1;
        }
        else if (num % 2 == 1){
            num -= 1;
            count += 1;
        }
    }
    cout << count << endl;



}