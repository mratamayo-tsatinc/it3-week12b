/*
@output
choice = 3
value = 13
result = 6

@variables
choice = 3
value = 13
result = 6
*/

#include <stdio.h>

int main(void)
{
    int choice = 3;
    int value = 10;
    int result;

    switch (choice)
    {
        case 1:
            result = value + 5;
            break;

        case 2:
            result = value * 2;
            break;

        case 3:
            result = value - 4;
            value = value + 3;
            break;

        case 4:
            result = value / 2;
            break;

        default:
            result = 0;
    }

    printf("choice = %d\n", choice);
    printf("value = %d\n", value);
    printf("result = %d\n", result);

    return 0;
}