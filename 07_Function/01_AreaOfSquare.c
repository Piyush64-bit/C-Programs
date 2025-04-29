#include <stdio.h>
int calculationofarea(int side) {
return side * side;
}

int main(){
    // Calculate area of square take input form user.
    int area, side;

    printf("Enter side of the square to calculate its area: ");
    scanf("%d", &side);

    area = calculationofarea(side);

    printf("\nThe area of the square is: %d", area);
    return 0;
}