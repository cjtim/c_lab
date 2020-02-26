#include <stdio.h>
void roman2arabic(char input[],char output[]){
    int i = 0, sum = 0, j = 0, count;
    for (i = 0; input[i] != '\0';i++){
        count += 1;
    }
    for(i = 0; i < count ; i++ , j++){
        if(input[i] == 'I' && input[i+1] == 'I' && input[i+2] == 'I'){
            sum += 3;
            output[j] = '3';
            i += 2;
        }
        else if(input[i] == 'I' && input[i+1] == 'I'){
            sum += 2;
            output[j] = '2';
            i += 1;
        }
        else if(input[i] == 'I' && input[i+1] == 'V'){
            sum += 4;
            output[j] = '4';
            i += 1;
        }
        else if(input[i] == 'I' && input[i+1] == 'X'){
            sum += 9;
            output[j] = '9';
            i += 1;
        }
        else if(input[i] == 'I'){
            sum += 1;
            output[j] = '1';
            i +=0;
        }   
        else if(input[i] == 'V' && input[i+1] == 'I' && input[i+2] == 'I' && input[i+3] == 'I'){
            sum += 8;
            output[j] = '8';
            i += 3;
        }
        else if(input[i] == 'V' && input[i+1] == 'I' && input[i+2] == 'I'){
            sum += 7;
            output[j] = '7';
            i += 2;
        }
        else if(input[i] == 'V' && input[i+1] == 'I'){
            sum += 6;
            output[j] = '6';
            i += 1;
        }
        else if(input[i] == 'V'){
            sum += 5;
            output[j] = '5';
            i += 0;
        }
        else{
            output[j] = input[i];
        }
    }
}
int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}