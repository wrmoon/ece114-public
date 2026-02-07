#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int entered_code = 0;

    // seed the random number generator with the current time.
    srand(time(0));
    // create a "random" number between 1 and 20
    int secret = rand() % 20 + 1; 

    do
    {
        printf("Please enter a secret code number: ");
        scanf("%d", &entered_code);
    } while (entered_code != secret);

    printf("Congratulations! You found it\n");

    return 0;
}