#include <stdio.h>

long fibonacci(long);

int main(void)
{
    const int MAX = 18;
    int i;
    printf("   n=");
    for (i=0; i < MAX; i++)
    {
        printf("%5d", i);
    }
    printf("\nf(n)=");
    for (i=0; i< MAX; i++)
    {
        printf("%5ld", fibonacci(i));
    }
    printf("\n");
}

long fibonacci(long n)
{
    if (n < 2)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

