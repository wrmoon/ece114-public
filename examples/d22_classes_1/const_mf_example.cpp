// const_mf_example.cpp
#include <iostream>
class Test
{
private:
    int m_foo;
public:
    Test(int f = 0)
    {
        m_foo = f;
    }

    int getFoo() const
    {
        // foo++; // can't do this because const
        return m_foo;
    }
};

int main()
{
    using namespace std;
    Test bar(10);
    cout << "The value of bar is " << bar.getFoo() << endl;
    return 0;
}
