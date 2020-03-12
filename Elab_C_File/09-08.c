#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}
void reportStock(char filename[]){
    char tmp[100],name[30];
    int price, count = 0, i = 0, line = 0;
    FILE *pf = fopen(filename, "r");
    while(fgets(tmp, 50, pf) != NULL){
        line += 1;
    }
    printf("line is %d\n", line);
    Product p1[line];
    char *ptr;
    fseek(pf, 0, SEEK_SET);
    while(fgets(tmp, 50, pf) != NULL){
        ptr = tmp + 18;
        printf("%s\n",ptr);

        // printf("%s",strstr(ptr, ",")+1);
        float price;
        char price_str[20];
        strcpy(price_str,strstr(ptr, ",")+1);
        printf("price_str is %s\n",price_str);
        sscanf(price_str, "%f", &price);
        printf("%f\n",price);
        

    }





    fclose(pf);
}



int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}