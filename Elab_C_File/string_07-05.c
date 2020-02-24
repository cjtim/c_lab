#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char stoupper(const char **s) {
    return s;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
    if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}