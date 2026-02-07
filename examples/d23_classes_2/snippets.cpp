class Stock
{
private:
    ...
    double total_val;
    ...
public:
    double total() const { return total_val; }
    const Stock & topval(const Stock & s) const;
};

int main()
{
    top = stock1.topval(stock2);
    top = stock2.topval(stock1);

}
const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

