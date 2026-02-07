#include <stdio.h>

int main(void)
{
    int dailyTemperatures[7] = {50, 60, 55, 72, 75, 57, 88};
    int *ptr = dailyTemperatures;
    int (*ptr2)[7] = &dailyTemperatures;

    printf("address of dailyTemperatures = %p\n", dailyTemperatures);
    printf("address of dailyTemperatures = %p\n", &dailyTemperatures[0]);
    printf("address of &dailyTemperatures = %p\n", &dailyTemperatures);
    printf("                         ptr = %p\n", ptr);
    printf("                        ptr2 = %p\n", ptr2);

    int a = 10;
    int b = 20;
    int *pax[2] = {&a, &b};
    printf("                        pax = %p\n", pax);

    return 0;
}