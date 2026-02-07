#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// print out 100 random numbers between 0 and 99
int main(void)
{
    // seed PRNG with number of seconds since 1970. 
    // NOTICE: If you run this program twice within the same second, you'll get the same output
    srand(time(NULL));

    for (int i = 1; i <= 100; i++)
    {
        int number = rand() % 100;
        printf("%2d ", number);

        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}