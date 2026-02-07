#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number = 0;
    bool truthy = false;

    printf("Give me a number, and I'll tell you if it's true: ");

    scanf("%d", &number);

    truthy = (bool)number;

    printf("The number is %s\n", (truthy == true) ? "true" : "false");

}