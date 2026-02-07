#include <stdio.h>
#include <string.h>

int main ()
{
    printf("\ngimme a number: ");
    int value = 0;
    scanf("%d", &value);
    char str[80];

    // clear out input buffer - needed if calling fgets() after calling scanf()
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    printf("gimme a string: ");
    fgets(str, sizeof(str), stdin);

    // strip \n from str
    str[strcspn(str, "\n")] = '\0';

    printf("<%s> %d\n", str, value);

    return 0;
}
