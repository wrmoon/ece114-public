/* strncpy example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Sample string";
  char str2[10];
  char str3[40];
  strncpy (str2, str1, sizeof(str2)-1);
  strncpy (str3, "copy successful", sizeof(str3)-1);
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}