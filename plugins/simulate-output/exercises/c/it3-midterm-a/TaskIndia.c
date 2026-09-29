/*
@output
score = 86
activities = 2
basePoints = 50
bonus = 20
finalPoints = 70
qualified = 1

@variables
score = 86
activities = 2
basePoints = 50
bonus = 20
finalPoints = 70
qualified = 1
*/

#include <stdio.h>

int main(void)
{
    int score = 86, activities = 2, basePoints = 50;
    int bonus = 10, finalPoints, qualified;

    finalPoints = basePoints + score / 10 * 2 - activities * 3;
    qualified = (score >= 75 && activities >= 2) ||
                (score >= 90 && !((activities < 1)));

    if (qualified && score >= 85)
        bonus = bonus + 10;
    else if (!qualified || score < 60)
        bonus = 0;

    finalPoints = basePoints + bonus;

    printf("score = %d\n", score);
    printf("activities = %d\n", activities);
    printf("basePoints = %d\n", basePoints);
    printf("bonus = %d\n", bonus);
    printf("finalPoints = %d\n", finalPoints);
    printf("qualified = %d\n", qualified);
    return 0;
}
