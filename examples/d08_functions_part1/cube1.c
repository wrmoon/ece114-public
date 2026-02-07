#include <stdio.h>

int blah(int );

int main(void)
{
    for (int i=1; i <= 15; i++)
    {
        int c = blah(i);
        printf("The blah of %d is %d\n", i, c);
    }
    return 0;
}

// blah definition
int blah(int number)
{
    number += 1;
    return number * number * number;
}



