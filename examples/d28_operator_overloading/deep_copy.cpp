// copy constructor: deep copy
// http://www.cplusplus.com/doc/tutorial/classes2/
#include <iostream>
#include <string>
using namespace std;

class Example5
{
    string *ptr;

public:
    Example5(const string &str) : ptr(new string(str)) {}
    ~Example5() { *ptr = "xxx"; delete ptr; }

    // copy constructor:
    Example5(const Example5 &x) : ptr(new string(x.content())) {}

    #if 0
    // assignment operator v1
    Example5& operator= (const Example5& x) 
    {
        delete ptr;                      // delete currently pointed string
        ptr = new string (x.content());  // allocate space for new string, and copy
        return *this;
    }
    #endif

    #if 1
    // assignment operator v2 --> utilizes same string object because ptr is not const
    Example5 &operator=(const Example5 &x)
    {
        *ptr = x.content(); // this uses std::string assignment operator!
        return *this;
    }
    #endif

    // access content:
    const string &content() const { return *ptr; }
};

void copy_constructor_demo()
{
    Example5 *foo = new Example5("hello");
    cout << "foo's content: " << foo->content() << '\n';
    Example5 bar = *foo;
    delete foo;
    foo=nullptr;
    cout << "bar's content: " << bar.content() << '\n';
}

void assignment_operator_demo()
{
    Example5 *foo = new Example5("hello");
    cout << "foo's content: " << foo->content() << '\n';
    Example5 bar{"there"};
    cout << "bar's content before assign: " << bar.content() << '\n';
    bar = *foo;
    //Example5& operator= (const Example5& x) 
    bar.operator=(*foo);

    cout << "bar's content after assign: " << bar.content() << '\n';
    delete foo;
    foo=nullptr;
    cout << "bar's content after delete: " << bar.content() << '\n';
}

int main()
{
    //copy_constructor_demo();
    assignment_operator_demo();
    string s = "Hello";
    s = "World";
    return 0;
}

