#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    vector<int> my_vector { 10, 20, 30, 40, 50 };

    // OG iteration
    for (unsigned int i=0; i < my_vector.size(); i++) {
        cout << my_vector[i] << " ";
    }
    cout << endl;

    // Using at
    for (unsigned int i=0; i < my_vector.size(); i++) {
        cout << my_vector.at(i) << " ";
    }
    cout << endl;

    // Using range-based for
    for (unsigned int i: my_vector) {
        cout << i << " ";
    }
    cout << endl;

    // Using iterator
    for (vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using iterator with auto
    for (auto it = my_vector.begin(); it != my_vector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using const iterator with auto
    for (auto it = my_vector.cbegin(); it != my_vector.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using const reverse iterator with auto
    for (auto it = my_vector.crbegin(); it != my_vector.crend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using reverse iterator with auto
    for (auto it = my_vector.rbegin(); it != my_vector.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}


