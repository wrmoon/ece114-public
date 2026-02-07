#include <stdio.h>
#include <ctype.h>

void get_input(char[], int);
void print_it_loud(const char[]);

int main(void)
{
    char foobar[100] = "unspecified";
    get_input(foobar, sizeof(foobar));
    print_it_loud(foobar);
}

// We're modifying the foobar array, therefore
// can't use const here
void get_input(char foobar[], int max_size)
{
    fgets(foobar, max_size, stdin);
}

// We don't want to modify the contents of the
// array foobar, so use a const
void print_it_loud(const char foobar[])
{
    // *foobar = 'a'; compiler error
    while (*foobar != '\0')
    {
        putchar(toupper(*foobar++));
    }
    putchar('\n');
}
