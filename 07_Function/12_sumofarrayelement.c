#include <stdio.h>

int sumarray ( int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum = sum + arr[i];
        return sum;
    }
}
int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Sum of array: %d \n", sumarray(numbers, size));

    
    return 0;
}