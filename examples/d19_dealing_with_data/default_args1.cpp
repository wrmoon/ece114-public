
void point(int x = 3, int y = 4);

int harpo(int n, int m = 4, int j = 5);       // valid
int chico(int n, int m = 4, int j);           // not valid
int groucho(int k = 1, int m = 2, int n = 3); // valid



point(1, 2); // calls point(1,2)
point(1);    // calls point(1,4)
point();     // calls point(3,4)

int harpo(int n, int m = 4, int j = 5); 

beeps = harpo(2);   // same as harpo(2, 4, 5)
beeps = harpo(1, 8); // same as harpo(1, 8, 5)
beeps = harpo(8, 7, 6); // no default args
beeps = harpo(8,  , 6); // invalid


