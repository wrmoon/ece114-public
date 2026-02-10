#include <stdio.h>
#include <string.h>

int main()
{
    char key[] = "apple";
    char buffer[80] = {0};
    do
    {
        printf("Guess my favorite fruit? ");
        scanf("%79s", buffer);
    } while (strcmp(key, buffer) != 0);

    puts("Correct answer!");
    return 0;
}