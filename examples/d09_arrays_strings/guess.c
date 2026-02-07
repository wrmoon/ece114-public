#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main ()
{
  char key[] = "apple";
  char buffer[80];
  do {
     printf ("Guess my favorite fruit? ");
     fflush (stdout);
     scanf ("%79s",buffer);
     //for (int i = 0; i < sizeof(buffer); i++)
     for (int i = 0; i < strlen(buffer); i++)
     {
         buffer[i] = tolower(buffer[i]);
     }
  } while (strcmp (key,buffer) != 0);
  puts ("Correct answer!");
  return 0;
}