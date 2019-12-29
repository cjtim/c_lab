#include <stdio.h>
#include <stdlib.h>
int main(){
    char m_str[10],n_str[10000];
    gets(m_str);
    gets(n_str);
    int m = atoi(m_str);
    int n = atoi(n_str);
    printf("%d %d\n",m,n);

}