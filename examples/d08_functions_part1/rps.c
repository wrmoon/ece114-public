#include <stdio.h>

// without these prototypes, you can't compile
void print_paper(int print_beats);
void print_scissors(int print_beats);
void print_rock(int print_beats);

void print_paper(int print_beats)
{
    printf("paper");
    if (print_beats)
    {
        printf(" beats ");
        print_rock(0);
        putchar('\n');
    }
}

void print_scissors(int print_beats)
{
    printf("scissors");
    if (print_beats)
    {
        printf(" beats ");
        print_paper(0);
        putchar('\n');
    }
}

void print_rock(int print_beats)
{
    printf("rock");
    if (print_beats)
    {
        printf(" beats ");
        print_scissors(0);
        putchar('\n');
    }
}

int main()
{
    print_rock(1);
    print_paper(1);
    print_scissors(1);
    return 0;
}
