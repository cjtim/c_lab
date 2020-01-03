#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    int sum;
    float up, down;
    up = powf((1 + sqrtf(5)),n) - powf(( 1 - sqrtf(5)),n);
    //printf("up = %f\n",up);
    down = powf(2,n) * sqrtf(5);
    //printf("down = %f\n",down);
    sum = up / down;
    //printf("sum = %d\n",sum);
    return sum;

}
void main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (i = 0; i<=n; i++)
    {
        printf("F(%d) = %d\n",i,fibo(i));
    }

}