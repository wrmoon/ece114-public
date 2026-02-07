/* Listing 4.2 praise1.c -- uses an assortment of strings */
#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    return 0;
}

// Prata, Stephen. C Primer Plus (Developer's Library) (p. 102). 
// Pearson Education. Kindle Edition. 