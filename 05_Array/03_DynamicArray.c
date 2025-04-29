#include <stdio.h>
#include <stdlib.h>

int main(){
    // Dynamic Array =>
    // In C, Dynamic arrays use malloc() & calloc() for memory allocation.

    int *arr;
    int n = 5;
    // Allocate memory for 5 integer
    arr = (int *)malloc(n*sizeof(int));

    // assiging values
    for(int i = 0; i<n; i++)
    {
        arr[i] = i+1;
    }
    // printing values
    for(int j = 0; j<n; j++)
    {
        printf("%d", arr[j]);
    }
    // freeing allocated memory
    free(arr);
    return 0;
}