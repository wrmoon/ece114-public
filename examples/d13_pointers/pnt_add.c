// pnt_add.c -- pointer addition
// from listing 10.8
#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];  // array of shorts
    short * pts;        // points to dates
    double bills[SIZE]; // array of doubles
    double * ptf;       // used to point to bills

    // Assign the address of each array to a pointer. 
    // There is no & in front of the array name, because the
    // name of the array refers to the address of the first element. 
    pts = dates;
    ptf = bills;
    printf("%19s %15s\n", "short", "double");
    for (short index = 0; index < SIZE; index++)
    {
        printf("pointers + %d: %14p %14p\n",
            index, pts + index, ptf + index);
    }

    return 0;
}

