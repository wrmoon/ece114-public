#include <iostream>
#include <limits>


int main() {
    using namespace std;
    int x;

    // clear any previous error flags on cin
    cin.clear();

    do 
    {
        // read an integer from cin
        cout << "Enter an integer: ";
        cin >> x;

        if (!cin.fail())
        {
            break;
        }

        cout << "Invalid input. Try again." << endl;
        cin.clear();                // clear the failbit
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard the rest of the input
    } while (true);

    // display rest of line if there were extra characters
    if (cin.peek() != '\n')
    {
        cout << "Ignoring extra characters on line: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << cin.gcount() << endl;
    }

    cout << "You entered: " << x << endl;

    return 0;
}

