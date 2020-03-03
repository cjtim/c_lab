#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
typedef struct Student{
  char id[12];
  int midterm;
  int final;
  char grade;
}StudentRecord;

void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin) {
    int i = 0, maxMid = 0, maxFin;
    printf("Student [0] is = %s\n", pRec[0].id);
    printf("score mid = %d final is %d\n\n\n",pRec[0].midterm, pRec[0].final);
    // *topMid = &pRec[0];
    // *topFin = &pRec[0];
}

int main() {
  StudentRecord students[5], *pTopMid, *pTopFin;
  int gradeCount[5] = {0};
  int i;
  for (i=0; i <  1; i++) {
    printf("Enter Student ID: ");
    scanf("%s", students[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);
  }
  findTop(&students[ARRAY_SIZE], ARRAY_SIZE, &pTopMid, &pTopFin);
  //print grade
  printf("Top Score for Midterm:\n");
  printf("Student ID %s with score %d\n", pTopMid->id, pTopMid->midterm );
  printf("Top Score for Final:\n");
  printf("Student ID %s with score %d\n", pTopFin->id, pTopFin->final);
  return 0;
}
