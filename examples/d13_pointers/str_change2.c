#include <stdio.h>
#include <string.h>
int main (void)
{
    char *company_name = "Facebook";
    printf("old name: %s\n", company_name);

    company_name = "Meta"; 
    //strcpy(company_name, "Meta"); // bus error

    printf("new name: %s\n", company_name);
    return 0;
}


