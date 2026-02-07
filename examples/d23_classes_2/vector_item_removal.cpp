#include <vector>
#include <iostream>

using namespace std;


int main()
{
    vector<int> my_numbers { 10, 20, 30, 40, 50};

    for (auto i: my_numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto ii = my_numbers.begin(); ii < my_numbers.end(); ii++)
    {
        cout << *ii << " ";
    }
    cout << endl;

    // how do I remove the item in the list == 30?
    for (auto ii = my_numbers.begin(); ii < my_numbers.end(); ii++)
    {
        cout << *ii << " ";
        if (*ii == 30)
        {
            my_numbers.erase(ii);
            break;
        }
    }
    cout << endl;
    cout << "===" << endl;

    for (auto i: my_numbers)
    {
        cout << i << " ";
    }
    cout << endl;
}