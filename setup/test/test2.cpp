#ifndef __cplusplus
#error You have selected the gcc compiler. Choose g++ instead.
#endif
#include <iostream>


int main()
{
    using namespace std;
    const char *const line = "==============================================================";
    cout << line << endl;
    cout << "Welcome to ECE114! If you are reading this from your terminal," << endl;
    cout << "then you have installed clang++ correctly." << endl;
    cout << line << endl;

    return 0;
}
