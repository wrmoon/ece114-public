#include <stdio.h>

int cube(int y); // function prototype
void printy(void);

// This 'y' is a global variable
// It is visible everywhere in this file.
int y = 100;

int main(void)
{
    printf("global y == %d\n", y);
    int y = 25; // this 'y' is only visible in main()

    printf("main y == %d\n", y);
    for (int y = 1; y <= 15; y++)
    { 
        // this 'y' is only visible in the for loop
        printf("%d ", cube(y));
    }

    {
        // yet another 'y' - only visible in this block
        int y = 2000;
        printf("\nanother y == %d\n", y);
    }
    printf("main y == %d\n", y);
    printy();
    return 0;
}

int cube(int y)
{ 
    // this y is only visible in this function
    return y * y * y;
}

void printy(void)
{
    printf("global y == %d\n", y); // only the global 'y' is valid here
}
