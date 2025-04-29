#include <stdio.h>
void counter() {
    static int count = 0;
    count ++;
    printf("Count is %d", count);
}

int main(){
    counter();
    counter();
    counter();   
    return 0;
}