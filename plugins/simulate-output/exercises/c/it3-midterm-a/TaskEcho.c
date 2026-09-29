/*
@output
items = 5
price = 120
member = 1
subtotal = 620
discount = 50
amountDue = 570

@variables
items = 5
price = 120
member = 1
subtotal = 620
discount = 50
amountDue = 570
*/

#include <stdio.h>

int main(void)
{
    int items = 5, price = 120, member = 1;
    int subtotal, discount = 20, amountDue;

    subtotal = items * price + 2 * 10;

    if ((member == 1 && items >= 5) || (!member && subtotal >= 1000))
        discount = discount + 30;
    else if (items > 2 && price >= 100)
        discount = discount + 10;
    else
        discount = 0;

    amountDue = subtotal - discount;

    printf("items = %d\n", items);
    printf("price = %d\n", price);
    printf("member = %d\n", member);
    printf("subtotal = %d\n", subtotal);
    printf("discount = %d\n", discount);
    printf("amountDue = %d\n", amountDue);
    return 0;
}
