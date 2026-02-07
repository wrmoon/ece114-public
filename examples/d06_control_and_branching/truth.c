#include <stdio.h>
// stdbool has true and false
#include <stdbool.h>

// This is the OG way of working with booleans in C. 
#define TRUE (1)
#define FALSE (0)

int main()
{
    int a = 5;

    printf("a is %d\n", a);

    if (a)
    {
        printf("a is not zero\n");
    }

    if (a != FALSE)
    {
        printf("a is not zero\n");
    }

    if (a == TRUE)
    {
        printf("a is TRUE\n");
    }
    if (a == FALSE)
    {
        printf("a is FALSE\n");
    }

    if (a == true)
    {
        printf("a == true\n");
    }
    if (a == false)
    {
        printf("a == false\n");
    }

    return 0;
}