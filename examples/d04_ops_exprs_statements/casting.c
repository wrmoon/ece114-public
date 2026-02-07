#include <stdio.h>

int main(void)
{
    int num = 0;

    num = (int)2.5;
    printf("num is %d\n", num);

    num = (int)1.8 + (int)2.5;
    printf("num is %d\n", num);

    num = (int)(1.8 + 2.5);
    printf("num is %d\n", num);

    double fnum = 1.8 + 2.5;
    printf("floating point num is %f\n", fnum);

    return 0;
}