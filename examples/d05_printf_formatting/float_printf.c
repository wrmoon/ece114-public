#include <stdio.h>

// some simple examples of using printf with floats
int main(void)
{
    float num = 0;
    // hint: try big and small numbers, positive and negative
    printf("enter a floating point number: ");
    scanf("%f", &num);

    printf("%%f:      [%f]\n", num);
    printf("%%+f:     [%+f]\n", num);
    printf("%%-f:     [%-f]\n", num);
    printf("%% f:     [% f]\n", num);
    printf("%%6f:     [%6f]\n", num);
    printf("%%06f:    [%06f]\n", num);
    printf("%%.6f:    [%.6f]\n", num);
    printf("%%6.f:    [%6.f]\n", num);
    printf("%%6.0f:   [%6.0f]\n", num);
    printf("%%-6.2f:  [%-6.2f]\n", num);
    printf("%%6.3f:   [%6.3f]\n", num);
    printf("%%+-6.3f: [%+-6.3f]\n", num);

    // good for currency:
    printf("%%8.2f:   [%8.2f]\n", num);
    printf("%%-8.2f:  [%-8.2f]\n", num);
    printf("%%+-8.2f: [%+-8.2f]\n", num);

    return 0;
}