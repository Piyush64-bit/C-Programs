#include <stdio.h>

void counter(){
    static int count = 0; // Retains Value
    count++;
    printf("%d", count);
}

int main(){
    // Variable Storage Classes
    // A) auto(default)
    // -> local to block
    // -> ex- void fun(){
    //     int x = 2;
    // }

    // b) register
    // -> ex- register int count;
    // -> scope: local

    // c) static
    // -> retains value b/w function calls
    // -> ex- static int count

    counter();
    counter();
    counter();
    return 0;
}