#include <stdio.h>

int main(void)
{
    int x = 10;
    printf("x is %d\n", x);

    x = x - 1;
    printf("x is %d\n", x);

    x -= 1;
    printf("x is %d\n", x);

    --x;
    printf("x is %d\n", x);

    x--;
    printf("x is %d\n", x);

    printf("--------------------\n");

    x = x + 1;
    printf("x is %d\n", x);

    x += 1;
    printf("x is %d\n", x);

    ++x;
    printf("x is %d\n", x);

    x++;
    printf("x is %d\n", x);

    return 0;
}