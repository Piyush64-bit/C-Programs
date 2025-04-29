#include <stdio.h>
#include <stdarg.h>

// function ->
double calculate_average(int count, ...){
    va_list args;
    va_start(args, count);
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += va_arg(args, int);  // Retrieve each argument (as int) from the va_list
    }
    va_end(args);  // Clean up the va_list
    return (double)sum / count;  // Return the average as a double
}

//         int count: The first parameter represents the number of integers to process.

// va_list args: A special type used to handle variable arguments.

// va_start(args, count): Initializes args to start processing the variable arguments.

// va_arg(args, int): Retrieves the next argument from the list.

// va_end(args): Cleans up the memory used by args.

int main(){
    // Function to calculate average of any number of integer?
    printf("Average of 10, 20, 30: %.2f\n", calculate_average(3, 10, 20, 30));
    printf("Average of 5, 15, 25, 35, 45: %.2f\n", calculate_average(5, 5, 15, 25, 35, 45));

    return 0;
}