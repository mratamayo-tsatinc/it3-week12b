/*
@output
choice = 2
balance = 900
amount = 250
fee = 15
finalBalance = 635
status = 1

@variables
choice = 2
balance = 900
amount = 250
fee = 15
finalBalance = 635
status = 1
*/

#include <stdio.h>

int main(void)
{
    int choice = 2, balance = 900, amount = 250, fee = 15;
    int finalBalance, status = 0;

    switch (choice)
    {
        case 1:
            finalBalance = balance + amount - fee;
            status = (amount > 0 && balance >= 0);
            break;
        case 2:
            finalBalance = balance - amount - fee;
            status = (amount > 0 && amount <= balance) ||
                     !((amount > balance));
            break;
        case 3:
            finalBalance = balance;
            status = 0;
            break;
        default:
            finalBalance = 0;
            status = 0;
    }

    if (status && finalBalance >= 500)
        fee = fee + 0;
    else if (!status || finalBalance < 0)
        fee = fee + 10;

    if (choice == 2)
        finalBalance = balance - amount - fee;

    printf("choice = %d\n", choice);
    printf("balance = %d\n", balance);
    printf("amount = %d\n", amount);
    printf("fee = %d\n", fee);
    printf("finalBalance = %d\n", finalBalance);
    printf("status = %d\n", status);
    return 0;
}
