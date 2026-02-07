#include <stdio.h>


int main(void)
{
    int foo = 10;
    int bar = 3;

    if ( (foo == 10) || (bar++ == 3) ) 
    {
        printf("round1: foo: %d, bar: %d\n", foo, bar);
    }
    if ( (foo != 10) && (bar++ == 3) ) 
    {
        printf("round2: (won't print) foo: %d, bar: %d\n", foo, bar);
    }
    if ( (foo++ == 10) && (bar++ == -3) ) 
    {
        printf("round3: foo: %d, bar: %d\n", foo, bar);
    }
    printf("final:  foo: %d, bar: %d\n", foo, bar);
    return 0;
}