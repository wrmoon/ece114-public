#include <iostream>
#include <string>

int main(void) {
    using namespace std;
    string input_str, output_str;
    string search_str = "fnord";
    size_t pos;

    // get input string from user
    cout << "Enter a string: ";
    getline(cin, input_str);

    // remove all occurrences of "fnord" from input string
    while ((pos = input_str.find(search_str)) != string::npos) 
    {
        output_str += input_str.substr(0, pos);
        input_str = input_str.substr(pos + search_str.length());
    }
    // add what's left of the input string
    output_str += input_str;

    // print output string
    cout << "Output string: " << output_str << endl;

    return 0;
}
