#include <stdio.h>

typedef enum DayOfWeek
{Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Monday}DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month) {
    int total = day % 7;
    int first = 3; // Tuesday


    }
    printf("total is %d\n",total);
    return total;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case 5: printf("Sunday.\n"); break;
		case 6: printf("Monday.\n"); break;
		case 0: printf("Tuesday.\n"); break;
		case 1: printf("Wednesday.\n"); break;
		case 2: printf("Thursday.\n"); break;
		case 3: printf("Friday.\n"); break;
		case 4: printf("Saturday.\n"); break;
	}
}