#include <iostream>
#include <string>
using namespace std;

string strip_punctuation(const string &input)
{
    string output = input;
    size_t pos = output.find_last_not_of(".!?");
    if (pos != string::npos)
    {
        output.erase(pos + 1);
    }

    return output;
}

int main(void)
{
    string str;
    cout << "enter some text:" ;
    cin >> str;

    cout << strip_punctuation(str) << endl;;

    return 0;
}