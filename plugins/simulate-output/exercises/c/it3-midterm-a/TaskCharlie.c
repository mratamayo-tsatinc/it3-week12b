/*
@output
credits = 18
units = 3
labFee = 75
baseFee = 900
totalFee = 1095
enrolled = 1

@variables
credits = 18
units = 3
labFee = 75
baseFee = 900
totalFee = 1095
enrolled = 1
*/

#include <stdio.h>

int main(void)
{
    int credits = 18, units = 3, labFee = 75, baseFee = 900;
    int totalFee, enrolled;

    totalFee = baseFee + units * labFee - credits / 6 * 10;
    enrolled = (credits >= 12 && units >= 3) || !((credits < 6));

    if (enrolled && totalFee < 1000)
        totalFee = totalFee + 50;
    else if (!enrolled || credits > 24)
        totalFee = totalFee + 100;

    printf("credits = %d\n", credits);
    printf("units = %d\n", units);
    printf("labFee = %d\n", labFee);
    printf("baseFee = %d\n", baseFee);
    printf("totalFee = %d\n", totalFee);
    printf("enrolled = %d\n", enrolled);
    return 0;
}
