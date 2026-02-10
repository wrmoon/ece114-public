/* strlen example */
#include <stdio.h>
#include <string.h>

int main (void)
{
    char input[256] = {0};
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    printf("The sentence entered is %zu characters long.\n", strlen(input));
    return 0;
}