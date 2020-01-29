#include <stdio.h>
#include <stdlib.h>
int main() {
    int tim = 18;
    char name[] = "tim";
    printf("hello, world\n%d\n%s\n" , tim , name);
    char a[20];
    gets(a);
    long long int b = atoll(a);
    int i;
    for(i = 0;i < sizeof(a);i++){
        printf("print from for = %c\n",a[i]);
    }
    printf("int = %lld\n",b);
    return 0;
}