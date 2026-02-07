#include "stock20.h"
int main()
{
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    Stock stock2("Boffo Objects", 2, 2.0);
    stock2.show();
    // topval returns a const reference. 
    const Stock& top = stock1.topval(stock2);
    // so you can only call const methods with top
    // top.buy(10,20.5);
    top.show();
    return 0;
    }
