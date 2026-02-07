// taken from https://www.dlsweb.rmit.edu.au/set/Courses/Content/CSIT/oua/cpt220/chapter/07/Command-LineArguments.html
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) 
{ 
   int sum = 0, i; 
 
   // start loop with 1 because argv[0] is the name of the program (add)
   for (i=1; i< argc; i++) {
      // sum += atoi(*++argv); // <-- this works too!
      sum += atoi(argv[i]);
   }
 
   printf("%d\n", sum); 
   return 0; 
} 

