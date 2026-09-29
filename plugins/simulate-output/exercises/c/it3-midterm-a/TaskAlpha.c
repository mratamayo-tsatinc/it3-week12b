/*
@output
a = 8
b = 5
c = 18
total = 10

@variables
a = 8
b = 5
c = 18
total = 10
*/

#include <stdio.h>

int main(void)
{
    int a = 8;
    int b = 5;
    int c;
    int total;

    c = a + b * 2;
    total = c - a;

    if (total > 10)
    {
        total = total + 3;
        c = c - 2;
    }

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("total = %d\n", total);

    return 0;
}
