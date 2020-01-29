#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    char input[10], hour_str[5], minute_str[10], *hour_ptr;
    hour_ptr = hour_str;
    fgets(input,10,stdin);
    for (int i = 0; i < 2; i++){
        if (input[i] != ':')
        {
            hour_str[i] = input[i];
        }
    }
    int hour = atoi(hour_str);
    int k = 0;
    for (int j = 2; j < 5; j++){
         if (input[j] != ':' && input[j] != 'a' && input[j] != 'A' && input[j] != 'p' && input[j] != 'P' && input[j] != 'm' && input[j] != 'M' &&  input[j] != ' ')
        {
            minute_str[k] = input[j];
            k++;
        }
    }
    int minute = atoi(minute_str);

    if (hour == 12){
        if (input[5] == 'p' || input[5] == 'P'|| input[6] == 'p' || input[6] == 'P'){
            printf("Equivalent 24-hour time: %02d:%02d\n",hour,minute);
        }
        else if ( input[5] == 'a' || input[5] == 'A' || input[6] == 'a' || input[6] == 'A'){
            printf("Equivalent 24-hour time: %02d:%02d\n",0,minute);
        }
    }
    else if (input[5] == 'p' || input[5] == 'P'|| input[6] == 'p' || input[6] == 'P'){
        printf("Equivalent 24-hour time: %02d:%02d\n",hour+12,minute);
    }
    else if ( input[5] == 'a' || input[5] == 'A' || input[6] == 'a' || input[6] == 'A'){
        printf("Equivalent 24-hour time: %02d:%02d\n",hour,minute);
    }
}