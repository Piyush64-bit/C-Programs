#include <stdio.h>

int main(){
    int x = 42;
    int *ptr = &x;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p \n", (void*)&x);
    printf("Address of ptr: %p \n", (void*)ptr);
    printf("Value of ptr: %d \n", *ptr);

        *ptr = 99;
        printf("New value of x: %d\n", x);
    
    return 0;
}