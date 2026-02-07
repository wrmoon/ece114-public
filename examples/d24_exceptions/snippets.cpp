
#include <iostream>
using namespace std;

int main()
{
    try {
        // your code here
    }
    catch (int param) { cout << "int exception"; }
    catch (char param) { cout << "char exception"; }
    catch (const char * param) { cout << "const char* exception"; }
    catch (...) { cout << "default exception"; }

    try 
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Exception number " << n << " happened.\n";
            if (n == 20)
            {
                throw; // can't deal with 20!
            }
        }
    } 
    catch (...)
    {
        cout << "Some exception happened. But it's OK now.\n";
    }




}