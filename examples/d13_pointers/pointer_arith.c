#include <stdio.h>


int main(void)
{
    int a[] = {10,20,30,40};


    int *pa = a;
    

    printf("%ld %ld\n", sizeof(a)/sizeof(a[0]), sizeof(pa));

    return 0;
}

int fun(int * b)
{
    *b += 1;
    b += 1;
    return *b + 7;
}