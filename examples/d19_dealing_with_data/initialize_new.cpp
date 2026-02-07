#include <iostream>

int main ()
{
    int * pint = new int; // not initalized
    int * pten = new int(10); // initalized to 10
    int * ptwo = new int{2}; // initalized to 2

    int * psome = new int[10]; // not initialized
    int * evens = new int[4] {2,4,6,8}; // initialized
    int * csome = new int[4] {}; // initialized to zeros

    using namespace std;
    cout << *pint << endl
         << *pten << endl
         << *ptwo << endl;
    
    for (int i=0; i < 10; i++){
        cout << psome[i] << endl;
    }
    for (int i=0; i < 4; i++){
        cout << csome[i] << "   " << evens[i] << endl;
    }

    return 0;
}