/*
@output
nights = 3
roomRate = 650
mealCost = 300
roomTotal = 2150
discount = 100
totalBill = 2350
eligible = 1

@variables
nights = 3
roomRate = 650
mealCost = 300
roomTotal = 2150
discount = 100
totalBill = 2350
eligible = 1
*/

#include <stdio.h>

int main(void)
{
    int nights = 3, roomRate = 650, mealCost = 300;
    int roomTotal, discount = 50, totalBill, eligible;

    roomTotal = nights * roomRate + mealCost / 3 * 2;
    eligible = (nights >= 3 && roomRate >= 500) ||
               (mealCost > 500 && !((nights < 2)));

    if (eligible && roomTotal >= 2000)
        discount = discount + 50;
    else if (eligible || nights == 1)
        discount = discount + 50;
    else
        discount = 0;

    totalBill = roomTotal + mealCost - discount;

    printf("nights = %d\n", nights);
    printf("roomRate = %d\n", roomRate);
    printf("mealCost = %d\n", mealCost);
    printf("roomTotal = %d\n", roomTotal);
    printf("discount = %d\n", discount);
    printf("totalBill = %d\n", totalBill);
    printf("eligible = %d\n", eligible);
    return 0;
}
