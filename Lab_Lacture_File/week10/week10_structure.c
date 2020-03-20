/*
    ใช้สำหรับเก็บข้อมูลที่มีหลายค่า อาจมี data type เหมือนหรือต่างก็ได้ 
    แต่รวมเป็นลักษณะของสิ่งหนึ่ง
 */
#include <string.h>
#include <stdio.h>
// ประกาศรูปแบบของ struct ขึ้นมาก่อน
struct Student {
    char name[100];
    char id[11];
    double score;
};
void print_studen(struct Student stu){ // Pass by value
    printf("%s (%s) : %.2lf\n",stu.name, stu.id ,stu.score);
}
void add_score(struct Student *stu, double score){
    stu->score += score;
}
int main() {
            // struct Student t;
            // scanf("%s", t.name );
            // printf("%s\n",t.name);
            // t.score = 10.00;
            // printf("%lf\n",t.score);
    // นำ struct มาใช้ โดยการประกาศตัวแปร struct
    // มอง struct เป็น data type
    struct Student std;
    struct Student *sp;

    //Struct Array
    struct Student structArray[10]; // ประกาศstruct
    structArray[0].score = 10;
    strcpy(structArray[0].name, "CJ2");
    strcpy(structArray[0].id, "xXXx");
    print_studen(structArray[0]);

    strcpy(std.name, "CJ");
    strcpy(std.id, "2364");
    std.score = 100;
    // printf("%s (%s) : %.2lf\n", std.name, std.id ,std.score);
    add_score(&std, 100);
    print_studen(std);

    
    

}
