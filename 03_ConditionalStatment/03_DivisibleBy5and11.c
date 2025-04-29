#include <stdio.h>
#include<conio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num %5 == 0 && num %11 == 0)
    {
       printf("number is divisible by 5 and 11");
    } else
    
    printf("numder is not divisible by 5 and 11");
    
    
    return 0;
}