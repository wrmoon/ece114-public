#include <stdio.h>

//#define NUM_ELEMENTS 5
#define NUM_ELEMENTS(x) (sizeof(x) / sizeof(x[0]))
int main()
{
    int a[] = { 5, 6, 7, 2, 1, 1, 0  };

    float sum = 0.0f;
    for (int i=0; i < NUM_ELEMENTS(a); i++)
    {
        sum += a[i];
    }
    printf("The average of the numbers is %.2f\n", sum / NUM_ELEMENTS(a));
    return 0;
}
