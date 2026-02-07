#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;

    int prices[] {11, 22, 33, 44, 55};

    for (int x : prices)
    {
        cout << x << " ";
    }
    cout << endl;

    // To modify the array values,
    // use a reference variable
    for (int &x : prices)
    {
        x *= 2;
    }

    // Use with initialization lists, too!
    for (int x : {2, 4, 6, 8})
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> my_vector{99, 88, 77, 66, 55};
    for (int &x : my_vector)
    {
        x /= 11;
        cout << x << " ";
    }
    cout << endl;

    vector<string> my_words{"hello", "world", "how", "are", "you"};
    // not using a reference: word is a copy of each element
    for (auto word : my_words)
    {
        word += "!";
        cout << word << " ";
    }
    cout << endl;

    // using a reference: word is a reference to each element
    for (auto &word : my_words)
    {
        word += "?";
        cout << word << " ";
    }
    cout << endl;

    // proving that my_words is altered
    for (auto word : my_words)
    {
        cout << word << " ";
    }
    cout << endl;


    return 0;
}
