#include <stdio.h>
void stringcat(char src[], char dest[])
{
    // dest[] = src[] + dest[]
    char new[200];
    int i = 0, j = 0,k;
    //count src I
    while(src[i] != '\0'){
        i++;
    }
    //count dest J
    while(dest[j] !='\0'){
        j++;
    }
    int e = 0;
    for (k = j; k < i+j; k++){
        dest[k] = src[e];
        e++;
        if(k == i+j-1){
            dest[k+1] = '\0';
        }
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