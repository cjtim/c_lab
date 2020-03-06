#include <stdio.h>
// #include <stdlib.h>

double findAverage(char *filename)
{
    FILE *fp;
    fp = fopen(filename, "r");
    // for(int i = 0; )
    char line[100];
    double sum, i, num;
    while (fscanf(fp, "%lf", &num) != EOF){
        printf(">> %lf <<\n", num);
        sum += num;
        i++;
    }
    fclose(fp);
    return sum/i;

}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}