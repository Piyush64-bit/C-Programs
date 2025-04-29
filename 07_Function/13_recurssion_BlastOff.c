// Print numbers from n->1, then print "blastoff 1", when hit 0.

#include <stdio.h>
void countdown(int n)
{
    if (n == 0)  // Use equality operator '=='
    {
        printf("Blast Off 1\n");
        return;
    }
    printf("%d \n", n);
    countdown(n-1);
}

int main(){
    countdown(5);
    
    return 0;
}