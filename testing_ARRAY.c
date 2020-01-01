#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[20]; 
    //long long int ไม่เกิน 20 ตัวแน่ 
    // ทดลอง 19 ตัวผ่าน 1234567890123456789
    // ทดลอง 20 ตัว OVERFLOW
    gets(a);
    long long int b = atoll(a);
    int i;
    for(i = 0;i < sizeof(a);i++){
        printf("print from for = %c\n",a[i]);
    }
    printf("int = %lld\n",b);
    return 0;
}