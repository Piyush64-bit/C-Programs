#include <stdio.h>

int main() {
    char ch[5][20] = {"hi", "hey", "hello", "bonjour", "namaste"};
    printf("The fourth string is: %s\n", ch[3]);   // Prints "bonjour"
    printf("The fifth string is: %s\n", ch[4]);    // Prints "namaste"
    return 0;
}
