//Calculator

#include <stdio.h>

float addition (float a, float b) {
    return a + b;
}
float subtraction (float a, float b) {
    return a - b;
}
float multiplication (float a, float b) {
    return a * b;
}
float division (float a, float b) {
    if (b == 0){
        printf("cannot divide by zero");
        return 0;
    }
    else{
    return a / b;
    }
}

int main(){

    float a, b, store;
    char input;

    printf("Enter two numbers to perform any Arithmetic operations: \n");
    scanf("%f %f", &a, &b);

    getchar();

    printf("Enter the operator to perform the operation: + , - , * , / \n");
    scanf("%c", &input);

    switch (input)
    {
    case '+':
        store = addition(a, b);
        printf("The additon of both the numbers: %.2f\n", store);
        break;
    case '-':
        store = subtraction(a, b);
        printf("The subtraction of both the numbers: %.2f\n", store);
        break;
    case '*':
        store = multiplication(a, b);
        printf("The multiplication of both the numbers: %.2f\n", store);
        break;
    case '/':
        store = division(a, b);
        printf("The additon of both the numbers: %.2f\n", store);
        break;
    
    default:
        printf("Invalide Input");
        break;
    }


    
    return 0;
}