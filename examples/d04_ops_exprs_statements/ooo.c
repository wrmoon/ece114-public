#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 2;

    int result = a + b + c / d;
    printf(" %d + %d + %d / %d = %d\n", a, b, c, d, result);
    return 0;
}