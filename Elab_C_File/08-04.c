#include <stdio.h>
struct Grade_system
{
    char id[11];
    int midterm;
    int final;
    int grade[2];
};
void insert(struct Grade_system *tmp){
    printf("Enter Student ID: ");
    scanf("%s", tmp->id);
    printf("Enter Student Midterm: ");
    scanf("%d", &(tmp->midterm));
    printf("Enter Student Final: ");
    scanf("%d", &(tmp->final));
}
void print(struct Grade_system *ptmp){
    int grade;
    if (ptmp->midterm + ptmp->final >= 80) { grade = 'A';}
    else if (ptmp->midterm + ptmp->final >= 70) { grade = 'B';}
    else if (ptmp->midterm + ptmp->final >= 60) { grade = 'C';}
    else if (ptmp->midterm + ptmp->final >= 50) { grade = 'D';}
    else { grade = 'F';}
    printf("Student ID %s receives grade %c.\n",ptmp->id, grade);
}
int main(){
    struct Grade_system s1, s2, s3, s4, s5;
    insert(&s1);
    insert(&s2);
    insert(&s3);
    insert(&s4);
    insert(&s5);
    print(&s1);
    print(&s2);
    print(&s3);
    print(&s4);
    print(&s5);
}