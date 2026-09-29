/*
@output
score = 81
grade = 2
bonus = 5

@variables
score = 81
grade = 2
bonus = 5
*/

#include <stdio.h>

int main(void)
{
    int score = 76;
    int grade;
    int bonus = 3;

    if (score >= 90)
    {
        grade = 1;
        bonus = bonus + 5;
    }
    else if (score >= 75)
    {
        grade = 2;
        bonus = bonus + 2;
    }
    else if (score >= 60)
    {
        grade = 3;
        bonus = bonus - 1;
    }
    else
    {
        grade = 4;
        bonus = 0;
    }

    score = score + bonus;

    printf("score = %d\n", score);
    printf("grade = %d\n", grade);
    printf("bonus = %d\n", bonus);

    return 0;
}
