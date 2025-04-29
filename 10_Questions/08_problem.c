#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    float arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}