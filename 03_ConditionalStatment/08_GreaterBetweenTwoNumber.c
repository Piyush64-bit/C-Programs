#include <stdio.h>

int main()
{
    // find the largest of two numbers

    int a, b;

    printf("Enter two number to cheak the largest: \n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d in greater", a);
    }
    else
        printf("%d in greater", b);
    return 0;
}