#include <stdio.h>

void find_sum(int a, int b) {  
    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}

int main() {
    int num1, num2;

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    find_sum(num1, num2);  // Call the function with arguments
    return 0;
}
