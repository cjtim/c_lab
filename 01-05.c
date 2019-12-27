#include <stdio.h>

int main()
{
  int amount = 98;
  int b50 = amount/50;
  int b20 = (amount - 50*b50)/20 ;
  int b5 = (amount - 20*b20 - 50*b50)/5 ;
  int b1 = amount - (b50*50 + b20*20 + b5*5);
  printf("1: %d\n5: %d\n20: %d\n50: %d\n",b1,b5,b20,b50);
}  