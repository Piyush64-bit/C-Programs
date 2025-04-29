#include <stdio.h>

void main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num>0)
	{
		printf("the number is positive");
	}
	else if(num<0)
	{
		printf("the number is negative");
	}
	else if(num==0)
	{
		printf("the numder is zero");
	}
	return 0;
}