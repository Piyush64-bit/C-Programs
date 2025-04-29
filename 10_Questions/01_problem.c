// Write a c program to print input taken from users.
// inputs are - name, age, phone.

#include <stdio.h>

int main()
{
    char name[20];
    int age;
    long long phone_number;

    printf("Enter your name, age and Phone \n");
    scanf("%19s %d %lld", name, &age, &phone_number);

    printf("The entered name: %s , age: %d , number: %lld \n", name, age, phone_number);

    return 0;
}