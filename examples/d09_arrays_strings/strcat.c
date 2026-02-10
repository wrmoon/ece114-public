/* strcat example */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[80] = {0};
    strcpy(str, "these ");
    strcat(str, "strings ");
    strcat(str, "are ");
    strcat(str, "concatenated.");
    puts(str);

    return 0;
}