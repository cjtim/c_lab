#include <stdio.h>
#include <stdlib.h>
void main()
{
    char hour_str[5], min_str[5];
    int hour, min , minute;

    printf("Enter hour: ");
    fgets(hour_str, 5, stdin);

    printf("Enter minute: ");
    gets(min_str);

    hour = atoi(hour_str);
    minute = atoi(min_str);

    printf("Time is %02d:%02d", hour, minute);
}