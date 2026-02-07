#include <stdio.h>
#include "cube.h"

int main(void)
{
    for (int i=1; i <= 15; i++)
    {
        printf("The cube of %d is %d\n", i, cube(i));
    }
    return 0;
}


