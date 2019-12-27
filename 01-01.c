#include <stdio.h>
void main() {
   int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
   int day = computer_time/1440 ;
   int hour = (computer_time/60) - (day*24);
   int min = computer_time - (hour*60) - (day*1440);
   printf("It is %d days %d hours and %d minutes.\n",day , hour , min);





}
