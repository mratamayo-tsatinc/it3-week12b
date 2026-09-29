/*
@output
days = 6
dailyRate = 80
transport = 45
roomCost = 495
totalCost = 540
covered = 1

@variables
days = 6
dailyRate = 80
transport = 45
roomCost = 495
totalCost = 540
covered = 1
*/

#include <stdio.h>

int main(void)
{
    int days = 6, dailyRate = 80, transport = 45;
    int roomCost, totalCost, covered;

    roomCost = days * dailyRate + 30 / 2;
    totalCost = roomCost + transport;
    covered = (days >= 5 && dailyRate <= 100) ||
              (transport < 20 && !((days > 10)));

    if (covered && totalCost <= 550)
        totalCost = totalCost + 0;
    else if (!covered || totalCost > 800)
        totalCost = totalCost + 75;

    printf("days = %d\n", days);
    printf("dailyRate = %d\n", dailyRate);
    printf("transport = %d\n", transport);
    printf("roomCost = %d\n", roomCost);
    printf("totalCost = %d\n", totalCost);
    printf("covered = %d\n", covered);
    return 0;
}
