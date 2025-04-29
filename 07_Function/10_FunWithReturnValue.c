#include <stdio.h>

int square (int num){
    return num * num;
}

int main(){
    int result = square (5);
    printf("result is: %d \n", result);
    return 0;
}