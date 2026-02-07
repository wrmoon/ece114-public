#include <stdio.h>

int main(void)
{
    int num1, num2, num3 = 0;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    printf("enter third number: ");
    scanf("%d", &num3);

    if (num1 % 2 == 0)
    {
        if (num2 % 2 == 0)
        {
            if (num3 % 2 == 0)
            {
                printf("%d, %d and %d are all even\n", num1, num2, num3);
            }
        }
    }
    return 0;
}