#include <stdio.h>
float calculationofarea(float radius) {
return 3.14 * radius * radius;
}

int main(){
    // Calculate area of square take input form user.
    float area, radius;

    printf("Enter radius of the circle to calculate its area: ");
    scanf("%f", &radius);

    area = calculationofarea(radius);

    printf("\nThe area of the circle is: %.2f", area);
    return 0;
}