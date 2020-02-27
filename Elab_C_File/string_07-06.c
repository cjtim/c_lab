#include <stdio.h>
int charcount(char *s)
{
    int count = 0, i = 0;
    for (i = 0; s[i] != '\0'; i++){
        count += 1;
    }
    return count;
}
void charweave(char *s,char *result)
{
    int count = charcount(s);
    int front = 0, back = charcount(s)-1; 
    int i = 0;
    char out[100];
    for (i = 0;i < count; i++ ){
        if (i % 2 == 0){
            result[i] = s[front];
            front++;
        }
        else{
            result[i] = s[back];
            back--;
        }
    }
    // printf("%s\n",result);
    int backward = count-1;
    int j = 0;
    for (j = count; j < 2*count; j++ , backward--){
        result[j] = result[backward];
    }
    result[j] = '\0'; //******* WTF IS THIS SHIT BRO... FROM 2 PASS TO ALL PASS
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   
   return 0;
}