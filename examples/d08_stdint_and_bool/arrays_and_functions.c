#include <stdio.h>

#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))

int sum_it(int v[], int num_values);

int main(void)
{
    int values[] = {1, 2, 3, 4, 5, };

    printf("the sum is %d\n", sum_it(values, ARRAY_SIZE(values)));
    printf("the 2nd sum is %d\n", sum_it(values, ARRAY_SIZE(values)));

    return 0;
}

int sum_it(int v[], int num_values)
{
    int sum = 0;
    for (int i = 0; i < num_values; i++)
    {
        v[i] *= 2;
        sum += v[i];
    }
    return sum;
}