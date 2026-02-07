#include <stdio.h>

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    printf("This program demonstrates the modulo operator.\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("The result of %d %% %d = %d\n", num1, num2, num1 % num2);
    return 0;
}