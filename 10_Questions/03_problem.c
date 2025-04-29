// Write a c program to find withdrawal amount from ATM using nested-if-else
//  initial balance = 10,000

#include <stdio.h>

int main()
{
    int balance = 10000, withdraw;

    while (1)
    {
        printf("Enter an amount between 1-10000 (Enter 0 to exit): \n");
        scanf("%d", &withdraw);

        if (withdraw == 0)
        {
            printf("Transaction Ended.\n");
            break;
        }
        else if (withdraw < 0)
        {
            printf("Invalid amount! Please enter a positive value.\n");
        }
        else if (withdraw > balance)
        {
            printf("Insufficient balance! Available balance: %d\n", balance);
        }
        else
        {
            balance -= withdraw;
            printf("Withdrawal successful! Remaining balance: %d\n", balance);
        }
    }

    return 0;
}
