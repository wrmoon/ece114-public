#include <stdio.h>
int main()
{
    int n = 0;
    int number = 0;
    int sum = 0;

    printf("Enter numbers on each line (<0 ignored, q to quit):\n");
    while (scanf("%d", &number) == 1)
    {
        if (number < 0)
        {
            continue;
        }
        n++;
        sum += number; // sum = sum + number;
    }

    printf("sum: %d, ave: %0.2lf\n", sum, (double)sum / n);
    return 0;
}