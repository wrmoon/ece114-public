// Thank you Zirui Li for this example
#include <stdio.h>
#include <string.h>
int main(void)
{
    int i = 0;
    char testArray[10] = "abcdefghij";
    printf("\"%s\" strlen=%zu sizeof=%zu\n", testArray, strlen(testArray), sizeof(testArray));
    for (i = 0; i < 12; i++)
    {
        printf("%-5d", i);
    }
    printf("\n");
    for (i = 0; i < 12; i++)
    {
        printf("'%c'  ", testArray[i]);
    }
    printf("\n");
    for (i = 0; i < 12; i++)
    {
        printf("0x%02hhX ", testArray[i]); // hhX is unsigned char as a hex
    }
    printf("\n");

    return 0;
}

// Best practice:
char testArray[] = "abcdefghij";
