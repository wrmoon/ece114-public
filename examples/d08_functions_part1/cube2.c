#include <stdio.h>

// cube prototype
int cube(int);

int main(void)
{
    for (int i=1; i <= 15; i++)
    {
        printf("The cube of %d is %d\n", i, cube(i));
    }
    return 0;
}

// cube definition
int cube(int number)
{
    return number * number * number;
}


