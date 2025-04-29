// Question: create a function - multiplier and call it via pointer.

#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
};

int main(){
    int (*fptr) (int, int) = multiply;
    printf("The result is: %d\n", fptr(4, 5));
    
    return 0;
}