// self_collection.cpp
// demonstrates class scope, static variables and methods
#include <vector>
#include <iostream>
// TODO: This is pretty confusing! Find a better way to tie together statics and class scope and vectors
class C
{
private:
    int m_a;
    static std::vector<C *> collective;
    void updateA(int a) { m_a = a; }
    void incAll()
    {
        for (auto o : collective)
        {
            o->updateA(collective.size());
        }
    }
public:
    C() : m_a{0}
    {
        collective.push_back(this);
        incAll();
    }
    void dump() { std::cout << m_a; }
    static void dumpAll();
};
std::vector<C *> C::collective;
void C::dumpAll()
{
    for (auto o : collective)
    {
        o->dump();
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<C> a_list(5);
    std::vector<C> b_list(4);
    C* pc =  new C();
    C::dumpAll();
    pc->dump();
    return 0;
}