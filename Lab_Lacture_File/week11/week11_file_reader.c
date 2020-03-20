#include <stdio.h>
#include <string.h>

int main(){
    FILE* fp; // file pointer
    char line[100];

    fp = fopen("file_to_read.txt", "r"); // CAN OPEN ONLY TEXT FILE
    // EXAMPLE 1 READ FILE
    // while (fgets(line, 100, fp) != NULL) // fgets อ่านทีละบรรทัด
    // {
    //     line[strlen(line) -1] = '\0'; // เปลี่ยน '\n' ให้เป็น '\0'
    //     printf(">>>> %s <<<<\n",line);
    // }

    //EXAMPLE 2
    int number, total = 0;
    while (fscanf(fp, "%s %d", line, &number) != EOF){
        printf(">> %s:%d <<\n", line, number);
        total += number;
    }
    printf("%d\n",total);

    fclose(fp); // CLOSE FILE SEND FILE POINTER
}