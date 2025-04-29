// Pointer and arrays
// -> both are closely linked with each other.
// -> array name is a constant pointer to the first element of the array.

// 1st element (&arr[0])
// int arr[] = {1, 2, 3, 4, 5};
// &arr[0] = 1;

#include <stdio.h>

int main(){
    int arr[4] = {1, 2, 3, 4};
    int *ptr = arr;

    // Access via array notation

    for (int i = 0; i < 4; i++)
    {
        printf("Value of arr[%d]: %d\n", i, arr[i]);
    }

    // Access via pointer notation
    
    for (int i = 0; i < 4; i++)
    {
        printf("Value of *(ptr + %d): %d\n", i, *(ptr + i));
    }

    //Modify via pointer

    *(ptr + 1) = 99;
    printf("New value of arr[1]: %d\n", arr[1]);
    
    return 0;
}
