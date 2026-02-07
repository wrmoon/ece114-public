#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// print out 200 random words a-z
int main(void)
{
    // seed PRNG with number of seconds since 1970. 
    // NOTICE: If you run this program twice within the same second, you'll get the same output
    srand(time(NULL));

    for (int i = 1; i <= 1000; i++)
    {
        char letter = rand() % 26 + 'a';
        putchar(letter);

        if (i % 50 == 0)
        {
            printf("\n");
        }
        else if (i % 5 == 0)
        {
            putchar(' ');
        }
    }
    printf("\n");

    return 0;
}