#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int triple(int num){
    int a = 0, b = 0, c = 0;
    int m = 2, count = 0;
    while(a + b + c <= num){
        for(int n = 1; n < m; n++){
            a = m*m - n*n;
            b = 2 * m * n;
            c = m*m + n*n;

            
            if (a + b + c == num){
                if ( a > b && a > c){
                    int temp = a;
                    a = b;
                    b = c;
                    c = temp;
                }
                if (a>b){
                    int temp = a;
                    b = a;
                    a = temp;
                }
                if (b > c){
                    int temp = b;
                    b = c;
                    c = temp;
                }
                printf(" %d %d %d\n",a,b,c); 
                count = 1;
            }
        }
        m++;
    }
    printf(" %d %d %d\n",a,b,c); 
}
int main(){
    int num;
    scanf("%d", &num);
    triple(num);
    // pythagoreanTriplets(num);
    //sort



}