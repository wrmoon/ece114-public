/* strncat example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[200] = {};
  char pb[] = "Peanut Butter ";
  char choc[] = "& Chocolate";
  strncpy (str, pb, sizeof(str) - 1);
  str[sizeof(str)-1] = '\0';

  strncpy (str, pb, sizeof(str)); // why not? 
  strncpy (str, pb, strlen(str)); // why not? 

  strncat (str, choc, sizeof(str) - strlen(str) - 1);
  puts (str);
  return 0;
}