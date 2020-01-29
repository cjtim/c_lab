#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    // initialize array numbers from 1 to num by numbersPtr
    for (int i = 1;i <= num; i++ && numbersPtr++) {
       *numbersPtr = i;
    //    printf("print for array[%d] = %d\n",i-1,numbers[i-1]);
    }

    // loop through count
    for (int j = 0; j < count; j++) {
        scanf("%d", &target);
        removeTarget(numbers, num, target);
    }

    numbersPtr = &numbers[0];

    // print elements in numbers using numberPtr
    for (int i = 1; i <= num; i++ && numbersPtr++){
        printf("%d ", *numbersPtr);
    }
    puts("");
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{
    int *first = array;
    int *last = array+size-1;
    // printf("last %d\n",*last);
    // printf("inside function\n");
   for(int loop = 0; loop < size ; loop++){
       if (*array == target){
           int k = 0;
           while(k <= size - loop +1){
               *(array) = *(array+1);
               k++;
               array++;
            //    printf("debug now is %d\n",*array);
           }
           *last = 0;
           break;
       }
       array++;

   }

}
