#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[20]; 
    //long long int ไม่เกิน 20 ตัวแน่ 
    // ทดลอง 19 ตัวผ่าน 1234567890123456789
    // ทดลอง 20 ตัว OVERFLOW
    gets(a);
    for(int zz = 0;zz < sizeof(a);zz++){
        printf("print CHAR from for = %c\n",a[zz]);
    }

    long long int b = atoll(a);
    printf("int = %lld\n",b);
    return 0;
}