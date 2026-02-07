// const_mf_example2.cpp
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

    int getFoo()
    {
        return m_foo;
    }
};

int main()
{
    using namespace std;
    const Test t(10);
    cout << "The value of t is " << t.getFoo() << endl;
    return 0;
}

