#include <stdio.h>

char *words_of_wisdom(void);

int main(void)
{
    char *wisdumb = words_of_wisdom();
    printf("%p: %s\n", wisdumb, wisdumb);
}

char *words_of_wisdom(void)
{
    // char *buffer = "Buy low, sell high.";
    char buffer[] = "Buy low, sell high.";
    printf("%p: %s\n", buffer, buffer);
    return buffer;
}

