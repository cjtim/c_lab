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
    // for(i = 0; i < ARRAY_SIZE; i++){
    //     if((&pRec[i])->midterm > maxMid){
    //       printf("MAXIMUM POWERRRRR\n");
    //         // (*topMid) = (StudentRecord*)malloc(sizeof(StudentRecord));
    //         // (*topMid)->id = pRec[i].id;
    //     }
    // }
    printf("Student [0] is = %s\n", pRec->id);
    (*topMid) = *topFin = (StudentRecord*)malloc(sizeof(StudentRecord));
    topMid.id = "1111";
    topFin.id = "9999";
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
  printf("Student ID %s with score %d\n", pTopMid->id, pTopMid->midterm);
  printf("Top Score for Final:\n");
  printf("Student ID %s with score %d\n", pTopFin->id, pTopFin->final);
  return 0;
}
