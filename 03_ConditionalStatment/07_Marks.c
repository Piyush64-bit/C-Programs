#include <stdio.h>

int main() {
	int marks;
	
	printf("Enter marks: \n");
	scanf("%d", &marks);
	
	if(marks>=0 && marks<40)
	{
		printf("Fail");
	}
	else if(marks>=40 && marks<60)
	{
		printf("Just passed");
	}
	else if(marks>=60 && marks<70)
	{
		printf("C Grade");
	}
	else if(marks>=70 && marks<80)
	{
		printf("B Grade");
	}
	else if(marks>=80 && marks<90)
	{
		printf("A Grade");
	}
	else if(marks>=90 && marks<100)
	{
		printf("A+ Grade");
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
	
