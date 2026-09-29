/*
@output
score = 72
points = 15
level = 2

@variables
score = 72
points = 15
level = 2
*/

#include <stdio.h>

int main(void)
{
    int score = 68;
    int points = 10;
    int level = 2;

    if (score >= 60)
    {
        points = points + 5;
    }

    if (score >= 70)
    {
        points = points + 10;
        level = level + 1;
    }

    if (points > 12)
    {
        score = score + 4;
    }

    printf("score = %d\n", score);
    printf("points = %d\n", points);
    printf("level = %d\n", level);

    return 0;
}
