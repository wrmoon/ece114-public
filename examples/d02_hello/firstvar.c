#include <stdio.h>

int main(void)
{
    int some_number;
    printf("Enter some number: ");
    scanf("%d", &some_number);

    printf("decimal: %d   hex: %#X\n", some_number, some_number);
    return 0;
}
