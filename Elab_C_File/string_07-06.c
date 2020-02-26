#include <stdio.h>

int charcount(char *s)
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count += 1;
    }
    return count;
}

void charweave(char *s,char *result)
{
    
}

main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}