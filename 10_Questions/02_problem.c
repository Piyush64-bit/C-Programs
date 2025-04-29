// Write a c program to showcase the use of functions
//  addition, subtraction, division, multiplication (all should be function)

#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int division(int a, int b)
{
    return a / b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b, input, store;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter any methamatical operations to perform with the given numbers: \n1. Addition \n2. Subtraction \n3. Division \n4. Multiplictation \n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        store = addition(a, b);
        printf("The addition of both numbers is : %d", store);
        break;
    case 2:
        store = subtraction(a, b);
        printf("The subtraction of both numbers is : %d", store);
        break;
    case 3:
        store = division(a, b);
        printf("The division of both numbers is : %d", store);
        break;
    case 4:
        store = multiplication(a, b);
        printf("The multiplication of both numbers is : %d", store);
        break;
    default:
        printf("Invalid input");
    }

    return 0;
}