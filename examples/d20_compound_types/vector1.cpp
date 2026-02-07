#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    vector<int> vi; // create a zero-size array of int
    // vi is an object of type vector<int>

    int n;
    cin >> n;

    vector<double> vd(n); // create an array of n doubles
    // vd is of type vector<double>

    // general form
    // vector<typeName> vt(num_elements);


    return 0;
}