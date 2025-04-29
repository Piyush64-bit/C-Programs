#include <stdio.h>

int main()
{
    int a;

    printf("Enter a Number to cheak its odd or even: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("No is even");
    }
    else
    {
        printf("No is odd ");
    }

    return 0;
}