#include <stdio.h>

int main(void)
{
    int foobar = 10;

    printf("This will always print\n");

    if (foobar == 10)
    {
        printf("yeah, foobar is equal to 10\n");
        printf("Lots of statements can go in between these curly braces\n");
    }
    if (foobar != 10)
    {
        printf("no, this won't print\n");
    }
    if (foobar >= 10)
    {
        printf("yep, you'll see this...");
        if (foobar <= 10)
        {
            printf("and this!\n");
        }
    }
    if (foobar)
    {
        printf("We get here, because foobar ain't zero\n");
    }
    if (foobar == 0)
        printf("We won’t get here, because foobar ain't zero\n");
    printf("But this will always print! That's why I always use curly braces\n");

    return 0;
}