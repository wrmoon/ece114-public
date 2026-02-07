#include <stdio.h>
int main(void)
{
    int number = 0;
    int sum = 0;
    printf("Enter up to 5 numbers (q to quit):\n");
    for (int n = 1; n <= 5; n++)
    {
        if (scanf("%d", &number) != 1)
        {
            break;
        }
        sum += number;
    }

    printf("sum: %d\n", sum);
    return 0;
}