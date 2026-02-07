#include "stock20.h"
#include <vector>

int main()
{
    #if 0
    // create an array of 4 Stock objects
    Stock mystocks[4];

    mystocks[0].update(); // apply update() to 1st element
    mystocks[3].show(); // apply show() to 4st element

    // compare 3rd and 2nd elements and point tops
    // to the one with larger value
    const Stock* tops = mystocks[2].topval(mystocks[1]);

    const int numStocks = 4;

    Stock stocks[numStocks] = {
        Stock("Nanosmart", 12.5, 20),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };


    const int numStocks = 10;
    Stock stocks[numStocks] = {
        Stock("Nanosmart", 12.5, 20),
        Stock(), // use Stock() constructor
        Stock("Monolithic Obelisks", 130, 3.25)
    };
    // The remaining seven members are
    // initialized using the default constructor

    std::vector<Stock> mystocks {
        Stock("Nanosmart", 12.5, 20),
        Stock(), // use Stock() constructor
        Stock("Monolithic Obelisks", 130, 3.25)
    };

    const int numStocks = 10;
    std::vector<Stock> mystocks(numStocks);
    mystocks[0] = Stock("Nanosmart", 12.5, 20);
    mystocks[1] = Stock();
    mystocks[2] = Stock("Monolithic Obelisks", 130, 3.25);
    #endif

    const int numStocks = 10;
    std::vector<Stock> mystocks;
    mystocks.reserve(numStocks);
    mystocks.emplace_back("Nanosmart", 12.5, 20);
    mystocks.emplace_back();
    mystocks.emplace_back("Monolithic Obelisks", 130, 3.25);
    while(mystocks.size() < numStocks) {
        mystocks.emplace_back();
    }


    return 0;
}