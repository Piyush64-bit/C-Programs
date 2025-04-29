#include <stdio.h>

int main()
{
    int balance = 10000, withdraw;
    while (1)
    {
        printf("Enter a amount b/w 1-10000: \n");
        scanf("%d", &withdraw);

        if (withdraw == 0)
        {
            printf("Transaction Ended. \n");
            break;
        }
        else if (withdraw > balance)
        {
            printf("Insufficent balance: %d \n", balance);
        }
        else
        {
            balance -= withdraw;
            printf("Withdraw successful, remaining balance: %d \n", balance);
        }
    }
    return 0;
}