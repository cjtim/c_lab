#include <stdio.h>
#include <ctype.h>
#include <string.h>
// STRING
int main(){
    /*
        1.String by char[]
        2.String by char*
        3.Array of string
        4.Scanf and string

     */
//1.String by char[]
    // char color[] = "blue"; //char color[] = {'b', 'l', 'u', 'e', '\0'};
    //type name_of_array = string_initializer(")
    // printf("%c\n",color[1]);
    //Assign with index
    // color[2] = 'a';

//2.String by char*
    //Character Pointer
    // char *colorPtr = "blue";
    // ไม่สามารถ assing ค่าใหม่เฉพาะบางตัวได้

//3.Array of string
    // Array of character
    // char *numbers[] = {"one", "two", "three"};
    // printf("%s\n", numbers[2]);
    // printf("%c\n", numbers[2][1]);
    // printf("%s\n", *(numbers + 2));
    // printf("%c\n", (*(numbers + 2))[1]);
    // printf("%c\n", *(numbers + 2)[1]);

//4.Scanf and string
    // char color[20];
    // scanf("%19s", color); // ไม่ต้องมี&color เพราะarray เป็น address อยู่แล้ว
    // printf("%s", color);

    // Character Library
    // #include <ctype.h>
    printf("%s\n",
    isdigit('8') ? "8 is digit": "8 is not digit");

    // #include <stdlib.h>
    // strtod
    // strtol

// String Input/Output Library

#define SIZE 80
// ************จดใส่ใบเข้าห้องสอบไปด้วย
// getchar
char sentence[SIZE]; int i = 0, c;
while ((i < SIZE - 1) && (c = getchar()) != '\n') {
   sentence[i++] = c;
}
sentence[i] = '\0';
printf("[%s]\n", sentence);
//
    // strcpy
    // strncpy(str1, str2, size) N ตัวแรก
    // strcat เอาstring มาต่อกัน
    // strncat(str1, str2, size) เอาstring มาต่อกัน N ตัวแรก
    // strcmp string compare
    // strncmp string compare N ตัวแรก
    // strchr Find string (Front) - If found return NULL
        // const char* string = "This is a test";
        // char c1 = 'a';
        // char c2 = 'z';

        // if (strchr(string, c1) != NULL)
        // printf("'%c' was found in \"%s\".\n", c1, string);

        // if (strchr(string, c2) == NULL)
        // printf("'%c' was not found in \"%s\".\n", c2, string);
    // strrchr Find string (LAST) - If found return NULL
        const char* string = "This is a test";
        char c1 = 's';

        printf("%s\n", strchr(string, c1));
        printf("%s\n", strrchr(string, c1));
    // strstr
    // strlen
    // strerror
    


}