#include <stdio.h>
int main(){
    int a[10] = {0, 1}, *ptr;
    int  k;
    ptr  =  a+2;
    for(k=2; k<10; k++)
        a[k] = a[k-1]+a[k-2];
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+2));
    printf("%p\n",ptr);
    printf("%d\n",ptr[-1]);
}