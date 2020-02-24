#include <stdio.h>

int remove_vowel(char str[])
{   
    for(int x = 0; x < 20; x++){
        for (int i = 0; str[i] != '\0'; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u' ||
                    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'|| str[i] == 'U'){
                        // printf("see (%c)",str[i]);
                        for(int j = i ; str[j] != '\0'; j++){
                            str[j] = str[j+1];
                        }
                    }
        }
    }

}
int main()
{  char str[80];

  printf(" Input: ");
  gets(str);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}    