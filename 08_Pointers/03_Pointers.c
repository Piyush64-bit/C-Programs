// Pointer to Structure 

// -> Pointers can point to structures.
// -> Structure = custom data type.
// -> use (->) to access structure members via pointer.

#include <stdio.h>

struct Point {
    int x, y;
};
int main(){
    struct Point p = {3, 4};
    struct Point *ptr = &p;
    printf("x: %d, y: %d \n", p.x, p.y);
    printf("x: %d, y: %d \n", ptr->x, ptr->y);

    //Modify via pointer
    ptr->x = 99;
    printf("New value of x: %d\n", p.x);
    return 0;
}