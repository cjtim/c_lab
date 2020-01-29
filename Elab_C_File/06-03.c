#include <stdio.h>
#define ARRAY_SIZE 100
int main() {
  int i, j;
  int A[ARRAY_SIZE] = {0};

  for (i = 2; i < ARRAY_SIZE; i++){
      A[i] = 1;
}
  for (int p = 0; p < ARRAY_SIZE; p++ ) {
      if (p % A[p] != 0){
          A[p] = 0;
      }
  }
  for (i = 2; i < ARRAY_SIZE; i++){

    printf("%d ", A[i]  );
  }

  printf("\n");

  return 0;
}