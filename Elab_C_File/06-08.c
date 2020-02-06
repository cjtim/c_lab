#include <stdio.h>
void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
		for(int j=0;j<m-1;j++){
            int count=0;
            if(*killerPtr != prisoners[numPrisoners - (i+1) ] && *killerPtr != 0){
                *killerPtr++;
            }
			else{
                if(*killerPtr == 0){
				count++;
			}				
            if(killerPtr == &prisoners[1] && count==1){
				count--;
			}
            killerPtr = &prisoners[0+count];
        }
    }
        // *killerPtr = prisoners[(i*m)%10];
		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    int *last = array + size - 1;
    int *start = array;
    for (int i = 0; i < size; i++ , array++){
        if(*array == killedPrisoner){
			for(int j = i; j < size; j++, array++){
				*array = *(array+1);
			}
			break;
        }
    }
    *last = 0;
    
}