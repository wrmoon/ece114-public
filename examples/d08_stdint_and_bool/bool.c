#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    do
    {
        int number = 0;

        printf("Enter a number and I'll tell you if it's even (q to quit): ");
        if (scanf("%d", &number) != 1)
        {
            break;
        }
        bool is_even = ((number % 2) == 0);
        if (is_even)
        {
            printf("%d is even\n", number);
        }
        else
        {
            printf("%d is odd\n", number);
        }
    } while (true);

    return 0;
}