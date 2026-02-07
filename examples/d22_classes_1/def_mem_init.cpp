#include <iostream>
#include <vector>
using namespace std;

class C {
private:
    int m_a {10};
    int m_b {20};
    const int m_c {30};
    int m_d[10] {9,8,7};
    int m_e[10];            // uninitialized

    vector<int> m_v {4,5,6};
    //double m_x[m_c]; // doesn't work - even though m_c is const

public:
    C() {};
    void display() const { 
        cout << "a: " << m_a << " b: " << m_b << " c: " << m_c << endl;
        cout << endl << "d: ";
        for (auto &i: m_d) { cout << i << " " ; }
        cout << endl << "e: ";
        for (auto &i: m_e) { cout << i << " " ; }
        cout << endl << "v: ";
        for (auto &i: m_v) { cout << i << " " ; }
        cout << endl;
    }
};

int main() {
    C cc{};
    cc.display();
    return 0;
}
