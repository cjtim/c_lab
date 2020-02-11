#include <stdio.h>
void stringcat(char src[], char dest[])
{
    // dest[] = src[] + dest[]
    char new[200];
    int i = 0;
    while(src[i] != '\0'){
        new[i] = src[i];
        i++;
    }
    int j = i+1;
    i = 0;
    while (dest[i] != '\0'){
        new[j] = dest[i];
        i++;
        j++;

    }
    for (int k = 0; k < i+j; k++){
        dest[k] = new[k];
        printf("%c\n",new[k]);
    }
}
int main()
{
  char in1[100],in2[100];

  printf("Input 1: ");
  gets(in1);  /* read a line of characters from the input to "in1" variable */
  printf("Input 2: ");
  gets(in2);  /* read another line of characters from the input to "in2" variable */
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;

}