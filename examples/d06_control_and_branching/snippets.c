#include <stdio.h>

#define PI 3.1415926
#define WELCOME "Welcome to my app!\n"
void snip(void)
{
    int i = 0;

    switch (i) // the test must be an integer
    {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        default:
            printf("out of range");
    }

    char ch;
    switch (ch = getchar())
    {
        case 'A':
        case 'a':
            printf("A or a\n");
            break;
        case 'B':
        case 'b':
            printf("B or b\n");
            break;
        case 'C':
        case 'c':
            printf("C or c\n");
            break;
        default:
            printf("something else\n");
    }
}

int main(void)
{
    printf("Enter a letter: ");
    char ch;
    switch (ch = getchar())
    {
        case 'A':
        case 'a':
            printf("A or a\n");
            break;
        case 'B':
        case 'b':
            printf("B or b\n");
            // <-- oops forgot a break here
        case 'C':
        case 'c':
            printf("C or c\n");
            break;
        default:
            printf("something else\n");
    } 
    return 0;
}

void snip2(void)
{
    char ch;
    ch = getchar(); // takes no arguments
    scanf("%c", &ch); // same thing as above

    putchar(ch); 
    printf("%c", ch); // same thing as above
}

void snip3(void)
{
    int a, b, c;

    if (b > c)
    {
        a = b;
    }
    else
    {
        a = c;
    }

    a = (b > c) ? b : c;
}
