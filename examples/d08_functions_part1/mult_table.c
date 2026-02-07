#include <stdio.h>

// This program is an example of a loop within a loop, calling a function

int multiply(int a, int b);


int main(void)
{
    // print top header
    printf("     ");
    for (int i = 1; i <= 12; i++)
    {
        printf("%-3d ", i);
    }
    printf("\n    +------------------------------------------------\n");

    // print each row
    for (int row = 1; row <= 12; row++)
    {
        printf("%3d |", row);

        // print each column
        for (int col = 1; col <= 12; col++)
        {
            int product = multiply(row, col);
            printf("%-3d ", product);
        }
        printf("\n");
    }

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}