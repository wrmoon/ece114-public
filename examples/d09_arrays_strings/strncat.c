/* strncat example */
#include <stdio.h>
#include <string.h>

int main (void)
{
    char str[200] = {};
    char pb[] = "Peanut Butter ";
    char choc[] = "& Chocolate";

    // This is the safe, correct way to use strncpy()
    strncpy(str, pb, sizeof(str) - 1);
    str[sizeof(str)-1] = '\0';

    strncpy(str, pb, sizeof(str)); // This is bad! Why?
    strncpy(str, pb, strlen(str)); // This is bad! Why?
    strncpy(str, pb, sizeof(pb));  // This is bad! Why?
    strncpy(str, pb, strlen(pb));  // This is bad! Why?

    // This is the safe, correct way to use strncat()
    strncat(str, choc, sizeof(str) - strlen(str) - 1);

    puts(str);
    return 0;
}