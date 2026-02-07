#if 0
// example with global variable - not very scalable or helpful
#include <stdio.h>

int number = 0;

void getInput(void);
void computeValue(void);

int main(void)
{
    getInput();
    computeValue();
    printf("Result is %d\n", number);
    return 0;
}

// This function updates the global variable number
void getInput(void)
{
    printf("enter a number: ");
    scanf("%d", &number);
}

// This function does a computation on the global variable number
void computeValue(void)
{
    number *= 10;
}

#else
// same behavior, uses pass by pointer instead of global
#include <stdio.h>

void getInput(int* num);
void computeValue(int* num);

int main(void)
{
    int number = 0;

    getInput(&number);
    computeValue(&number);
    printf("Result is %d\n", number);
    return 0;
}

// Notice this function works with passed in parameter instead of a hard-coded global.
// This function can be used for any integer variable
void getInput(int *num)
{
    printf("enter a number: ");
    scanf("%d", num);
}

// Notice this function works with passed in parameter instead of a hard-coded global.
// This function can be used for any integer variable
void computeValue(int* num)
{
    *num *= 10;
}

#endif