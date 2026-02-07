#include <stdio.h>

int main(void)
{
    for (int i=1; i <= 15; i++)
    {
        int cube = i*i*i;
        printf("The cube of %d is %d\n", i, cube);
    }
    return 0;
}

