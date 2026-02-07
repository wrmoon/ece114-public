#include <iostream>
#include <string>

using namespace std;

// This is OK. The copy ctor (pre C++11) or move ctor (>= C++11)
// is invoked on return from function
string foo ()
{
    return string{"foobar"};
}

#if 0
// This is not OK. s gets deleted when bar exits, 
// and we can't persist a reference to that object.
string &bar()
{
    string s = string{"no sir"};
    return s;
}

// This is not OK. s gets deleted when bar exits, 
// and we can't persist an pointer to that object.
string *bat()
{
    string s = string{"no sir"};
    return &s;
}
#endif

// This is OK. We're returning a reference to an object
// that was passed in. 
string &emphasis(string &x)
{
    x += "... and there you go!";
    return x;
}


int main ()
{
    string s = foo();
    cout << s << endl;

    #if 0
    string b = bar();
    cout << b << endl;

    string x = *bat();
    cout << x << endl;
    #endif

    string i{"That's the way it is"};
    cout << emphasis(i) << endl;
    cout << i << endl;
    return 0;
}