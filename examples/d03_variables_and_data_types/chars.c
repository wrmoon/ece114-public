#include <stdio.h>

int main(void)
{
    char foo = 0;

    printf("input a character: ");
    scanf("%hhd", &foo);
    printf("The ASCII value of your char is '%c'\n", foo);
    return 0;
}
