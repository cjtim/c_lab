#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

void main()
{
    float radius = 1.5;
    float a = 4.0/3;
    float r = radius * radius * radius;
    float volume = a * PI * r ;
    printf("The volume of this sphere is %.2f\n",volume);
    printf("r is %f\n", a);
    printf("r is %f\n", r);
    printf("r is %f\n", volume);




}