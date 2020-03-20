#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char data2write[100] = "This is the data i want to write.";
    fp = fopen("output.txt", "w");
    
    if (fp != NULL){
        puts("This file is now open and writing..."); // AUTO \n (puts)
        fputs(data2write, fp);
        fputs("\n", fp);  // MANUAL \n (fputs)
        puts("Successfully writing to output.txt\n");
        fclose(fp);
    }
    else{ //IF CANNOT OPEN FILE
        printf("cannot open file\n");
    }

    
}