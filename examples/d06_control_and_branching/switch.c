#include <stdio.h>

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
