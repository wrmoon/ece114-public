#include <stdio.h>

// some simple examples of using printf with integers
int main(void)
{
    int num = 0;
    // hint: try big and small numbers, positive and negative
    printf("enter a number: ");
    scanf("%d", &num);

    printf("%%d:   [%d]\n", num);
    printf("%% d:  [% d]\n", num);
    printf("%%5d:  [%5d]\n", num);
    printf("%%-5d: [%-5d]\n", num);

    return 0;
}