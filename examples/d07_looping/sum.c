#include <stdio.h>

int main(void)
{
    int n = 0;
    int number = 0;
    int sum = 0;

    printf("Enter numbers on each line, q to quit:\n");
    while (scanf("%d", &number) == 1)
    {
        n++;
        sum += number; // sum = sum + number;
    }

    printf("sum: %d, ave: %0.2lf\n", sum, (double)sum / n);
    return 0;
}