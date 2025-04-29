//write a c program for showing switch - case demo for days of the week.
// correct day: saturday

#include <stdio.h>

int main() {
	int day;
	
	printf("Enter day number(1-7): \n");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1: printf("Monday");
		break;
		case 2: printf("Tuesday");
		break;
		case 3: printf("wednesday");
		break;
		case 4: printf("Thusday");
		break;
		case 5: printf("Friday");
		break;
		case 6: printf("saturday (Correct Day!)");
		break;
		case 7: printf("Sunday");
		break;
		default: printf("Invalid input");
	}
	return 0;
}