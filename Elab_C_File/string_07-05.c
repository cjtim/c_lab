#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char s[]) {
    char *sPtr = (char*)malloc(100);
    int i = 0;
    for(i = 0;s[i] != '\0'; i++){
        *sPtr = toupper(s[i]);
        sPtr++;
        // printf("%c",toupper(s[i]));
    }
    return sPtr-i;
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