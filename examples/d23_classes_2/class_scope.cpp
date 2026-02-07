class Bakery1
{
private:
    const int Months = 12;
    double costs[Months]; // can't do this
};

class Bakery2
{
private:
    enum { Months = 12 };
    double costs[Months];
};

class Bakery3
{
private:
    static const int Months = 12;
    double costs[Months];
};

