#include <stdio.h>

typedef enum DayOfWeek
{Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Monday}DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month) {
	int start;
	switch (month)
	{
	case 1:
		start = 2;
		return (day+start-1)%7;
	case 2:
		start = 5;
		return (day+start-1)%7;
	case 3:
		start = 5;
		return (day+start-1)%7;
	case 4:
		start = 1;
		return (day+start-1)%7;
	case 5:
		start = 3;
		return (day+start-1)%7;
	case 6:
		start = 6;
		return (day+start-1)%7;
	case 7:
		start = 1;
		return (day+start-1)%7;
	case 8:
		start = 4;
		return (day+start-1)%7;
	case 9:
		start = 0;
		return (day+start-1)%7;
	case 10:
		start = 2;
		return (day+start-1)%7;
	case 11:
		start = 5;
		return (day+start-1)%7;
	case 12:
		start = 0;
		return (day+start-1)%7;
	}
	return 0;
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
		case 0: printf("Sunday.\n"); break;
		case 1: printf("Monday.\n"); break;
		case 2: printf("Tuesday.\n"); break;
		case 3: printf("Wednesday.\n"); break;
		case 4: printf("Thursday.\n"); break;
		case 5: printf("Friday.\n"); break;
		case 6: printf("Saturday.\n"); break;
	}
}