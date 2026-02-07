#include <stdio.h>

/* This program prompts the user for
   two integers, adds them, and finally
   displays them on the console */

int main(void)
{
    // TIP: Always initialize your variables, like below!
    int num1 = 0; // first number
    int num2 = 0; // second number
    int sum = 0; // the sum of the num1 and num2

    printf("Enter integer #1: ");
    scanf("%d", &num1); // read the first number
    printf("Enter integer #2: ");
    scanf("%d", &num2); // read the second number

    sum = num1 + num2; // calculate the sum
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}