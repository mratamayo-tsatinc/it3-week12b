/*
@output
hours = 4
rate = 85
materials = 120
laborCost = 350
totalCost = 470
approved = 1

@variables
hours = 4
rate = 85
materials = 120
laborCost = 350
totalCost = 470
approved = 1
*/

#include <stdio.h>

int main(void)
{
    int hours = 4, rate = 85, materials = 120;
    int laborCost, totalCost, approved;

    laborCost = hours * rate + 20 / 2;
    totalCost = laborCost + materials;
    approved = (hours > 0 && rate >= 50) &&
               (materials <= 200 || !((totalCost > 600)));

    if (approved && totalCost <= 500)
        totalCost = totalCost + 0;
    else if (!approved || totalCost > 700)
        totalCost = totalCost + 50;

    printf("hours = %d\n", hours);
    printf("rate = %d\n", rate);
    printf("materials = %d\n", materials);
    printf("laborCost = %d\n", laborCost);
    printf("totalCost = %d\n", totalCost);
    printf("approved = %d\n", approved);
    return 0;
}
