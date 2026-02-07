#include <stdio.h>

// match the correct literal suffix to the type
int main(void)
{
    // float literals should have an f suffix
    float  myFloat           = 12.345678901234f;

    // double literals have no suffix
    double myDouble          = 12.34567890123456789;

    // long double literals have L suffix
    long double myLongDouble = 12.3456789012345678901234567890L;

    printf("myFloat      is %.8f\n", myFloat);
    printf("myDouble     is %.16lf\n", myDouble);
    printf("myLongDouble is %.32Lf\n", myLongDouble);
    return 0;
}

