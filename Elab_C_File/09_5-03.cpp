#include <iostream>
using namespace std;
int main(){
    int n, i, max = 0, input, num[100] = {0};;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> input;
        num[input] = 1;
        if (input > max){
            max = input;
        }
    } 
    for(int j = 1; j <= max; j++){
        if (j % 2 == 1){
            if (num[j] == 0){ cout << j << " "; }
        }
    }
    cout << endl;
    for(int j = 1; j <= max; j++){
        if (j % 2 == 0){
            if (num[j] == 0){ cout << j << " "; }
        }
    }
    cout << endl;
}