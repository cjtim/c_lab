#include<stdio.h>
void main()
{
    char item[25] = {'C','o','m','p','u','t','e','r',' ','P','r','o','g','r','a','m','m','i','n','g'} ;
    char *a1= item , *a2;
    printf("%s\n",a1);
    a2 = &item[5]   ;
    printf("%s\n",a2);
    a2 = &item[8]    ;
    printf("%s\n",a2);
}