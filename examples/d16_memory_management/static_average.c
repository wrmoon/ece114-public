#include <stdio.h>

double average(double);

int main(void)
{
    double num = 0.0;
    printf("Enter a bunch of numbers to average.\n");
    do {
        printf("Enter a number or q to quit: ");
        if (scanf("%lf", &num) == 0) {
            break;
        }
        printf("Rolling average: %0.2lf\n", average(num));
    } while (1);

    return 0;
}

double average(double number)
{
    // initialization only happens first time
    static double sum = 0.0;
    static int count = 0;

    sum += number;
    return sum / ++count;
}


