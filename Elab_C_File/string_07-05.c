#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char stoupper(const char *s) {
	// for (int i = 0; i < 10; i++)
	// printf("%s",a);
	char g[] = "helloworld";
    return (char)s;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);

	// result = "helloworld";

    if (result == s) printf("ERROR.\n");
	// printf("%s\n",s);
	printf("%s\n",result);
	
}