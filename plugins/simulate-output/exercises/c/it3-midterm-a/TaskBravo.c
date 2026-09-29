/*
@output
x = 12
y = 7
result = 8
bonus = 3

@variables
x = 12
y = 7
result = 8
bonus = 3
*/

#include <stdio.h>

int main(void)
{
    int x = 12;
    int y = 7;
    int result;
    int bonus = 4;

    result = x - y * 2;

    if (result > 5)
    {
        result = result + bonus;
        bonus = bonus + 2;
    }
    else
    {
        result = result + 10;
        bonus = bonus - 1;
    }

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("result = %d\n", result);
    printf("bonus = %d\n", bonus);

    return 0;
}
