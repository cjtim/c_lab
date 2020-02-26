#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char stoupper(const char a[]) {
	// for (int i = 0; i < 10; i++)
	// printf("%s",a);
	char g[] = "helloworld";
    return g;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);

	// result = "helloworld";

    if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}