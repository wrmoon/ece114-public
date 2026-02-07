#include <stdio.h>
#include <string.h>
int main (void)
{
    char company_name[] = "Facebook";
    printf("old name: %s\n", company_name);

    strcpy(company_name, "Meta");
    printf("new name: %s\n", company_name);

    // error: array type 'char [15]' is not assignable
    //company_name = "Snapchat"; 

    return 0;
}


