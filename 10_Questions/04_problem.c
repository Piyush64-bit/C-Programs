// Find factorial of any given number by user using Recursion
#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) { // Use '==' for comparison
        return 1;
    }
    return num * factorial(num - 1); // Corrected 'n' to 'num'
}

int main() {
    int num;
    printf("Enter a number to print its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %d\n", num, factorial(num)); // Corrected function call
    }

    return 0;
}

