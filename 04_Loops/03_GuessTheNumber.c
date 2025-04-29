#include <stdio.h>

int main(){
    // Guess the number
    int secret = 7,num;
    printf("Enter a number to check: \n");
    scanf("%d", &num);

    while(num!=secret)
    {
        printf("Enter again\n");
        scanf("%d", &num);
    }
    printf("Congrats you matched the number.");
    return 0;
}