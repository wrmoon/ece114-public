/* strncpy example */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Sample string";
    char str2[10] = {0};
    char str3[40] = {0};

    // copy up to 9 characters of str1 into str2. Here, we leave str2[9] alone.
    strncpy(str2, str1, sizeof(str2) - 1);

    // str2[9] is already == '\0' because of the initialization on line 8.
    // BUT: defensive programming style means we should always do this after calling strncpy().
    // Make it a habit.
    str2[sizeof(str2) - 1] = '\0';

    strncpy(str3, "copy successful", sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = '\0';

    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);

    return 0;
}