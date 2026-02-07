#include <stdio.h>
#include <stdbool.h>

// count the number of lower case 'a's
int main(void)
{
    char letter = '\0';
    int count = 0;

    printf("Give me your letters (q to quit): ");

    while(letter != 'q')
    {
        letter = getchar();

        if (letter == 'a')
        {
            count++;
        }
    }

    printf("The number of a's is %d\n", count);

    return 0;
}