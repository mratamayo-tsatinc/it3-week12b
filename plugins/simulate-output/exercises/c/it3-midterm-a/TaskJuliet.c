/*
@output
a = 7
b = 6
c = 7
total = 18
level = 2
bonus = 5
result = 34

@variables
a = 7
b = 6
c = 7
total = 18
level = 2
bonus = 5
result = 34
*/

#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 4;
    int c = 3;
    int total;
    int level;
    int bonus = 5;
    int result;

    total = a * b + c;

    if (total > 30)
    {
        total = total - 5;
        bonus = bonus + 2;
    }

    if (total >= 25)
    {
        level = 3;
    }
    else if (total >= 20)
    {
        level = 2;
    }
    else
    {
        level = 1;
    }

    if (level == 3)
    {
        if (bonus >= 7)
        {
            result = total + bonus;
        }
        else
        {
            result = total - bonus;
        }
    }
    else
    {
        result = total + level;
    }

    switch (level)
    {
        case 1:
            result = result + 2;
            a = a + 1;
            break;

        case 2:
            result = result * 2;
            b = b + 2;
            break;

        case 3:
            result = result - 3;
            c = c + 4;
            break;

        default:
            result = 0;
    }

    total = total + a - b + c;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("total = %d\n", total);
    printf("level = %d\n", level);
    printf("bonus = %d\n", bonus);
    printf("result = %d\n", result);

    return 0;
}