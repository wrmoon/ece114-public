#include <stdio.h>
#include <string.h>
int main (void)
{
    const char *company_name = "Facebook";
    printf("old name: %s\n", company_name);

    strcpy(company_name, "Meta"); // compiler warning instead of crash!

    printf("new name: %s\n", company_name);
    return 0;
}


