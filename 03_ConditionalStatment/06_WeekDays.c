#include <stdio.h>

int main() {
	int day;
	
	printf("Enter day number: \n");
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
		case 6: printf("saturday");
		break;
		case 7: printf("Sunday");
		break;
		default: printf("Invalid input");
	}
	return 0;
}