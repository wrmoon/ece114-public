#include <stdio.h>

// This program that outputs the letter grade given the score:
//
//  90 - 100: A
//  80 - 89:  B
//  70 - 79:  C
//  60 - 69:  D
//  < 60:     F

int main(void)
{
    int score = 0;
    char grade = '?';

    printf("Enter the grade [0-100]: ");
    scanf("%d", &score);

    if (score >= 90) 
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >=70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("your grade is %c\n", grade);

    return 0;
}
