// Question: Declare a float f = 3.14, a pointer to it, and print its value via pointer?

#include <stdio.h>

struct point {
float f;
};

int main(){
    struct point f = {3.14};
    struct point *ptr = &f;
    printf("x: %.2f \n", f.f);
    printf("x: %.2f \n", ptr->f);

    //Modify via pointer
    ptr->f = 7.77;
    printf("New value of F: %.iu82f \n", f.f);
    return 0;
}