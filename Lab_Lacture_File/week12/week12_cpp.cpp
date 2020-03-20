#include <iostream> // input output stream
//stream เป็น channel ในการ feed ข้อมูล
#include <cstdio>  // printf 
#include <cstdlib> // atoi atof
#include <cstring> // str
#include <cmath>
#include <cctype>
using namespace std;

int main(){
    int number;
    double price;
    string name;

    cin >> number;
    cin >> price;
    cin >> name;

    double result = number * price;

    cout << "Hello " << name << endl;
    cout << result << endl;

    printf("result is %.2lf\n",result); // from #include <cstdio>

    // std::cout << "Hello C++" 
    //           << std::endl;       // cout = console output    << output stream operation
    // std::cout << std::endl; // new Line \n
    // std::cout << 418113;

}
