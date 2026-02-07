#include <stdio.h>

int main(void)
{
    int number = 1;

    do
    {
        printf("Number: %d\n", number);
        number++;
    } while (number <= 5);

    return 0;
}
