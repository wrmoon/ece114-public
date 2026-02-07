#include "stock00.h"

struct Foo
{
    int a;
    float b;
};

Foo foo;

//void Lock::update()
//void Stock::update(double price)
//void Barrel::update(int size)


int main()
{

Stock sally, carlos;
sally.show(); // the sally object calls the member function
carlos.show(); // the carlos object calls the member function

Stock gift;
gift.buy(10, 24.75);


int year {2001};                                   // valid initialization
struct thing
{
    char * pn;
    int m;
};

thing amabob {"wodget", -23};                    // valid initialization
Stock hot {"Sukie's Autos, Inc.", 200, 50.25};   // NO! compile error

}

class Stock
{
private:
    string m_company;
    long m_shares;
};

class Stock
{
private:
    string company_;
    long shares_;
};

// Call constructor explicitly
Stock food = Stock("World Cabbage", 250, 1.25);

// Call constructor implicitly
Stock food("World Cabbage", 250, 1.25);

// Call constructor implicitly
Stock food{"World Cabbage", 250, 1.25};

Stock *pstock = new Stock("Electroshock Games", 18, 19.0);

Stock fluffy; // uses the default constructor

Stock::Stock() {} // default definition of the default ctor

Stock first; // calls default ctor implicitly
Stock second = Stock(); // calls default ctor explicitly
Stock *third = new Stock; // default ctor, implicit
Stock *fourth = new Stock(); // default ctor, explicit
Stock fifth("Meta Static Inc"); // calls constructor
Stock sixth(); // declares a function that returns a Stock!

Stock hot_tip = {"Derivatives Plus Plus", 100, 45.0};
Stock jock = {"Sport Age Storage, Inc"};
Stock temp {}; // calls default constructor

const Stock land = Stock("Kudgehorn Properties");
land.show();

