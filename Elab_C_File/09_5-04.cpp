#include <iostream>
using namespace std;

typedef struct Word_ {
    string word;
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        i = 0;
        int break_loop = 0;
        data[0].word = input;
        data[0].count += 1;
        i++;
        last_word++;
        while(1){
            cin >> input;
            if(input == "exit"){
                break;
            }
            else{
                for(int j = 0; j < i; j++){
                    if(data[j].word == input){
                        data[j].count += 1;
                        break_loop = 1;
                        break;
                    }
                }
                if(break_loop == 0){
                    data[i].word = input;
                    data[i].count += 1;
                    last_word++;
                    i++;
                }
            }
            break_loop = 0;
        }
        break;
    }
    cout << "Output:" << endl;
    for(i=0;i<last_word;i++){
                    cout << data[i].word << " = " << data[i].count << endl;;
                    // printf("data[%d].word = %s data[%d].count = %d\n", i, data[i].word, i, data[i].count);
            }
    return 0;
}